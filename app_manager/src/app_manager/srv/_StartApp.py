"""autogenerated by genmsg_py from StartAppRequest.msg. Do not edit."""
import roslib.message
import struct


class StartAppRequest(roslib.message.Message):
  _md5sum = "c1f3d28f1b044c871e6eff2e9fc3c667"
  _type = "app_manager/StartAppRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
string name

"""
  __slots__ = ['name']
  _slot_types = ['string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       name
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(StartAppRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.name is None:
        self.name = ''
    else:
      self.name = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self.name
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.name = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
"""autogenerated by genmsg_py from StartAppResponse.msg. Do not edit."""
import roslib.message
import struct


class StartAppResponse(roslib.message.Message):
  _md5sum = "29589baf2876ff624d4cb5688c12265e"
  _type = "app_manager/StartAppResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
bool started


int32 error_code

string message

string namespace



"""
  __slots__ = ['started','error_code','message','namespace']
  _slot_types = ['bool','int32','string','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       started,error_code,message,namespace
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(StartAppResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.started is None:
        self.started = False
      if self.error_code is None:
        self.error_code = 0
      if self.message is None:
        self.message = ''
      if self.namespace is None:
        self.namespace = ''
    else:
      self.started = False
      self.error_code = 0
      self.message = ''
      self.namespace = ''

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_Bi.pack(_x.started, _x.error_code))
      _x = self.message
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.namespace
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.started, _x.error_code,) = _struct_Bi.unpack(str[start:end])
      self.started = bool(self.started)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.namespace = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_Bi.pack(_x.started, _x.error_code))
      _x = self.message
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.namespace
      length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.started, _x.error_code,) = _struct_Bi.unpack(str[start:end])
      self.started = bool(self.started)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.message = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.namespace = str[start:end]
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_Bi = struct.Struct("<Bi")
class StartApp(roslib.message.ServiceDefinition):
  _type          = 'app_manager/StartApp'
  _md5sum = '07c2c0d81a44b3d573187630fa526c81'
  _request_class  = StartAppRequest
  _response_class = StartAppResponse
