# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NewRos2MqttBridge_Request(type):
    """Metaclass of message 'NewRos2MqttBridge_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mqtt_client_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mqtt_client_interfaces.srv.NewRos2MqttBridge_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__new_ros2_mqtt_bridge__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__new_ros2_mqtt_bridge__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__new_ros2_mqtt_bridge__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__new_ros2_mqtt_bridge__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__new_ros2_mqtt_bridge__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PRIMITIVE__DEFAULT': False,
            'INJECT_TIMESTAMP__DEFAULT': False,
            'ROS_QUEUE_SIZE__DEFAULT': 1,
            'MQTT_QOS__DEFAULT': 0,
            'MQTT_RETAINED__DEFAULT': False,
        }

    @property
    def PRIMITIVE__DEFAULT(cls):
        """Return default value for message field 'primitive'."""
        return False

    @property
    def INJECT_TIMESTAMP__DEFAULT(cls):
        """Return default value for message field 'inject_timestamp'."""
        return False

    @property
    def ROS_QUEUE_SIZE__DEFAULT(cls):
        """Return default value for message field 'ros_queue_size'."""
        return 1

    @property
    def MQTT_QOS__DEFAULT(cls):
        """Return default value for message field 'mqtt_qos'."""
        return 0

    @property
    def MQTT_RETAINED__DEFAULT(cls):
        """Return default value for message field 'mqtt_retained'."""
        return False


class NewRos2MqttBridge_Request(metaclass=Metaclass_NewRos2MqttBridge_Request):
    """Message class 'NewRos2MqttBridge_Request'."""

    __slots__ = [
        '_ros_topic',
        '_mqtt_topic',
        '_primitive',
        '_inject_timestamp',
        '_ros_queue_size',
        '_mqtt_qos',
        '_mqtt_retained',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'ros_topic': 'string',
        'mqtt_topic': 'string',
        'primitive': 'boolean',
        'inject_timestamp': 'boolean',
        'ros_queue_size': 'uint32',
        'mqtt_qos': 'uint8',
        'mqtt_retained': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ros_topic = kwargs.get('ros_topic', str())
        self.mqtt_topic = kwargs.get('mqtt_topic', str())
        self.primitive = kwargs.get(
            'primitive', NewRos2MqttBridge_Request.PRIMITIVE__DEFAULT)
        self.inject_timestamp = kwargs.get(
            'inject_timestamp', NewRos2MqttBridge_Request.INJECT_TIMESTAMP__DEFAULT)
        self.ros_queue_size = kwargs.get(
            'ros_queue_size', NewRos2MqttBridge_Request.ROS_QUEUE_SIZE__DEFAULT)
        self.mqtt_qos = kwargs.get(
            'mqtt_qos', NewRos2MqttBridge_Request.MQTT_QOS__DEFAULT)
        self.mqtt_retained = kwargs.get(
            'mqtt_retained', NewRos2MqttBridge_Request.MQTT_RETAINED__DEFAULT)

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ros_topic != other.ros_topic:
            return False
        if self.mqtt_topic != other.mqtt_topic:
            return False
        if self.primitive != other.primitive:
            return False
        if self.inject_timestamp != other.inject_timestamp:
            return False
        if self.ros_queue_size != other.ros_queue_size:
            return False
        if self.mqtt_qos != other.mqtt_qos:
            return False
        if self.mqtt_retained != other.mqtt_retained:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ros_topic(self):
        """Message field 'ros_topic'."""
        return self._ros_topic

    @ros_topic.setter
    def ros_topic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'ros_topic' field must be of type 'str'"
        self._ros_topic = value

    @builtins.property
    def mqtt_topic(self):
        """Message field 'mqtt_topic'."""
        return self._mqtt_topic

    @mqtt_topic.setter
    def mqtt_topic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mqtt_topic' field must be of type 'str'"
        self._mqtt_topic = value

    @builtins.property
    def primitive(self):
        """Message field 'primitive'."""
        return self._primitive

    @primitive.setter
    def primitive(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'primitive' field must be of type 'bool'"
        self._primitive = value

    @builtins.property
    def inject_timestamp(self):
        """Message field 'inject_timestamp'."""
        return self._inject_timestamp

    @inject_timestamp.setter
    def inject_timestamp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'inject_timestamp' field must be of type 'bool'"
        self._inject_timestamp = value

    @builtins.property
    def ros_queue_size(self):
        """Message field 'ros_queue_size'."""
        return self._ros_queue_size

    @ros_queue_size.setter
    def ros_queue_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ros_queue_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ros_queue_size' field must be an unsigned integer in [0, 4294967295]"
        self._ros_queue_size = value

    @builtins.property
    def mqtt_qos(self):
        """Message field 'mqtt_qos'."""
        return self._mqtt_qos

    @mqtt_qos.setter
    def mqtt_qos(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'mqtt_qos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mqtt_qos' field must be an unsigned integer in [0, 255]"
        self._mqtt_qos = value

    @builtins.property
    def mqtt_retained(self):
        """Message field 'mqtt_retained'."""
        return self._mqtt_retained

    @mqtt_retained.setter
    def mqtt_retained(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mqtt_retained' field must be of type 'bool'"
        self._mqtt_retained = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NewRos2MqttBridge_Response(type):
    """Metaclass of message 'NewRos2MqttBridge_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mqtt_client_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mqtt_client_interfaces.srv.NewRos2MqttBridge_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__new_ros2_mqtt_bridge__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__new_ros2_mqtt_bridge__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__new_ros2_mqtt_bridge__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__new_ros2_mqtt_bridge__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__new_ros2_mqtt_bridge__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NewRos2MqttBridge_Response(metaclass=Metaclass_NewRos2MqttBridge_Response):
    """Message class 'NewRos2MqttBridge_Response'."""

    __slots__ = [
        '_success',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_NewRos2MqttBridge_Event(type):
    """Metaclass of message 'NewRos2MqttBridge_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mqtt_client_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mqtt_client_interfaces.srv.NewRos2MqttBridge_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__new_ros2_mqtt_bridge__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__new_ros2_mqtt_bridge__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__new_ros2_mqtt_bridge__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__new_ros2_mqtt_bridge__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__new_ros2_mqtt_bridge__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NewRos2MqttBridge_Event(metaclass=Metaclass_NewRos2MqttBridge_Event):
    """Message class 'NewRos2MqttBridge_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mqtt_client_interfaces/NewRos2MqttBridge_Request, 1>',
        'response': 'sequence<mqtt_client_interfaces/NewRos2MqttBridge_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mqtt_client_interfaces', 'srv'], 'NewRos2MqttBridge_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mqtt_client_interfaces', 'srv'], 'NewRos2MqttBridge_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mqtt_client_interfaces.srv import NewRos2MqttBridge_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, NewRos2MqttBridge_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'NewRos2MqttBridge_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mqtt_client_interfaces.srv import NewRos2MqttBridge_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, NewRos2MqttBridge_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'NewRos2MqttBridge_Response'"
        self._response = value


class Metaclass_NewRos2MqttBridge(type):
    """Metaclass of service 'NewRos2MqttBridge'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mqtt_client_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mqtt_client_interfaces.srv.NewRos2MqttBridge')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__new_ros2_mqtt_bridge

            from mqtt_client_interfaces.srv import _new_ros2_mqtt_bridge
            if _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Request._TYPE_SUPPORT is None:
                _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Request.__import_type_support__()
            if _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Response._TYPE_SUPPORT is None:
                _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Response.__import_type_support__()
            if _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Event._TYPE_SUPPORT is None:
                _new_ros2_mqtt_bridge.Metaclass_NewRos2MqttBridge_Event.__import_type_support__()


class NewRos2MqttBridge(metaclass=Metaclass_NewRos2MqttBridge):
    from mqtt_client_interfaces.srv._new_ros2_mqtt_bridge import NewRos2MqttBridge_Request as Request
    from mqtt_client_interfaces.srv._new_ros2_mqtt_bridge import NewRos2MqttBridge_Response as Response
    from mqtt_client_interfaces.srv._new_ros2_mqtt_bridge import NewRos2MqttBridge_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
