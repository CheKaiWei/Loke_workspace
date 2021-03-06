# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from messages/caissonDetectionFeedback.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class caissonDetectionFeedback(genpy.Message):
  _md5sum = "eb8bac980f74f4fd346cfb7f20183901"
  _type = "messages/caissonDetectionFeedback"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
#feedback
bool detected
int32  error_code
string error_msg
int16 dis
bool  isCheck

"""
  __slots__ = ['detected','error_code','error_msg','dis','isCheck']
  _slot_types = ['bool','int32','string','int16','bool']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       detected,error_code,error_msg,dis,isCheck

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(caissonDetectionFeedback, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.detected is None:
        self.detected = False
      if self.error_code is None:
        self.error_code = 0
      if self.error_msg is None:
        self.error_msg = ''
      if self.dis is None:
        self.dis = 0
      if self.isCheck is None:
        self.isCheck = False
    else:
      self.detected = False
      self.error_code = 0
      self.error_msg = ''
      self.dis = 0
      self.isCheck = False

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_Bi().pack(_x.detected, _x.error_code))
      _x = self.error_msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_hB().pack(_x.dis, _x.isCheck))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.detected, _x.error_code,) = _get_struct_Bi().unpack(str[start:end])
      self.detected = bool(self.detected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_msg = str[start:end].decode('utf-8')
      else:
        self.error_msg = str[start:end]
      _x = self
      start = end
      end += 3
      (_x.dis, _x.isCheck,) = _get_struct_hB().unpack(str[start:end])
      self.isCheck = bool(self.isCheck)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_Bi().pack(_x.detected, _x.error_code))
      _x = self.error_msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_hB().pack(_x.dis, _x.isCheck))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 5
      (_x.detected, _x.error_code,) = _get_struct_Bi().unpack(str[start:end])
      self.detected = bool(self.detected)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.error_msg = str[start:end].decode('utf-8')
      else:
        self.error_msg = str[start:end]
      _x = self
      start = end
      end += 3
      (_x.dis, _x.isCheck,) = _get_struct_hB().unpack(str[start:end])
      self.isCheck = bool(self.isCheck)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_hB = None
def _get_struct_hB():
    global _struct_hB
    if _struct_hB is None:
        _struct_hB = struct.Struct("<hB")
    return _struct_hB
_struct_Bi = None
def _get_struct_Bi():
    global _struct_Bi
    if _struct_Bi is None:
        _struct_Bi = struct.Struct("<Bi")
    return _struct_Bi
