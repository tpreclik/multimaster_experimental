///////////////////////////////////////////////////////////////////////////////
// relay just passes messages on. it can be useful if you're trying to ensure
// that a message doesn't get sent twice over a wireless link, by having the 
// relay catch the message and then do the fanout on the far side of the 
// wireless link.
//
// Copyright (C) 2009, Morgan Quigley
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//   * Redistributions of source code must retain the above copyright notice,
//     this list of conditions and the following disclaimer.
//   * Redistributions in binary form must reproduce the above copyright
//     notice, this list of conditions and the following disclaimer in the
//     documentation and/or other materials provided with the distribution.
//   * Neither the name of Stanford University nor the names of its
//     contributors may be used to endorse or promote products derived from
//     this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
/////////////////////////////////////////////////////////////////////////////


#include <cstdio>
#include "topic_tools/shape_shifter.h"
#include "topic_tools/parse.h"
#include "XmlRpc.h"
#include "ros/xmlrpc_manager.h"
#include "ros/network.h"

using std::string;
using std::vector;
using namespace topic_tools;

ros::NodeHandle *g_node = NULL;
static bool g_advertised = false;
static string g_output_topic;
static ros::Publisher g_pub;
static string g_host;
uint32_t g_port = 0;
bool g_error = false;

ros::XMLRPCManagerPtr g_xmlrpc_manager = ros::XMLRPCManager::instance();

void foreign_advertise(const std::string &type)
{
  XmlRpc::XmlRpcClient *client = g_xmlrpc_manager->getXMLRPCClient(g_host, g_port, "/");
  XmlRpc::XmlRpcValue args, result;
  args[0] = ros::this_node::getName();
  args[1] = g_output_topic;
  args[2] = type;
  args[3] = g_xmlrpc_manager->getServerURI();
  if (!client->execute("registerPublisher", args, result))
  {
    ROS_FATAL("Failed to contact foreign master at [%s:%d] to register [%s].", g_host.c_str(), g_port, g_output_topic.c_str());
    g_error = true;
    ros::shutdown();
  }
  ros::XMLRPCManager::instance()->releaseXMLRPCClient(client);
}

void foreign_unadvertise()
{
  XmlRpc::XmlRpcClient *client = g_xmlrpc_manager->getXMLRPCClient(g_host, g_port, "/");
  XmlRpc::XmlRpcValue args, result;
  args[0] = ros::this_node::getName();
  args[1] = g_output_topic;
  args[2] = g_xmlrpc_manager->getServerURI();
  if (!client->execute("unregisterPublisher", args, result))
  {
    ROS_ERROR("Failed to contact foreign master at [%s:%d] to unregister [%s].", g_host.c_str(), g_port, g_output_topic.c_str());
    g_error = true;
  }
  ros::XMLRPCManager::instance()->releaseXMLRPCClient(client);
}

void in_cb(const ros::MessageEvent<ShapeShifter>& msg_event)
{
  boost::shared_ptr<ShapeShifter const> const &msg = msg_event.getConstMessage();

  if (!g_advertised)
  {
    g_pub = msg->advertise(*g_node, g_output_topic, 10, true);
    foreign_advertise(msg_event.getConnectionHeader()["type"]);
    g_advertised = true;
    printf("advertised as %s\n", g_output_topic.c_str());
  }
  g_pub.publish(msg);
}

int main(int argc, char **argv)
{
  if (argc < 4)
  {
    printf("\nusage: foreign_relay_latched FOREIGN_MASTER_URI FOREIGN_TOPIC LOCAL_TOPIC\n\n");
    return 1;
  }
  std::string topic_name;
  if(!getBaseName(string(argv[3]), topic_name))
    return 1;
  ros::init(argc, argv, topic_name + string("_foreign_relay"),
            ros::init_options::AnonymousName);
  if (!ros::network::splitURI(string(argv[1]), g_host, g_port))
  {
    ROS_FATAL("Couldn't parse the foreign master URI [%s] into a host:port pair.", argv[1]);
    return 1;
  }
  g_output_topic = string(argv[2]);
  ros::NodeHandle n;
  ros::NodeHandle pnh("~");
  g_node = &pnh;

  boost::shared_ptr<ros::Subscriber> sub(new ros::Subscriber);
  {
    // Subscribe at local master.
    ros::SubscribeOptions ops;
    ops.topic = string(argv[3]);
    ops.queue_size = 10;
    ops.md5sum = ros::message_traits::md5sum<topic_tools::ShapeShifter>();
    ops.datatype = ros::message_traits::datatype<topic_tools::ShapeShifter>();
    ops.helper = ros::SubscriptionCallbackHelperPtr(
        new ros::SubscriptionCallbackHelperT<const ros::MessageEvent<topic_tools::ShapeShifter const>& >(
            boost::bind(&in_cb, _1)
        )
    );
    *sub = n.subscribe(ops);
  }

  //ros::Subscriber sub = n.subscribe<ShapeShifter>(string(argv[2]), 10, &in_cb);

  ros::spin();
  foreign_unadvertise();
  return g_error;
}

