// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice
#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__struct.h"
#include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // mqtt_topic, ros_topic
#include "rosidl_runtime_c/string_functions.h"  // mqtt_topic, ros_topic

// forward declare type support functions


using _NewRos2MqttBridge_Request__ros_msg_type = mqtt_client_interfaces__srv__NewRos2MqttBridge_Request;

static bool _NewRos2MqttBridge_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NewRos2MqttBridge_Request__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->ros_topic;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: mqtt_topic
  {
    const rosidl_runtime_c__String * str = &ros_message->mqtt_topic;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: primitive
  {
    cdr << (ros_message->primitive ? true : false);
  }

  // Field name: inject_timestamp
  {
    cdr << (ros_message->inject_timestamp ? true : false);
  }

  // Field name: ros_queue_size
  {
    cdr << ros_message->ros_queue_size;
  }

  // Field name: mqtt_qos
  {
    cdr << ros_message->mqtt_qos;
  }

  // Field name: mqtt_retained
  {
    cdr << (ros_message->mqtt_retained ? true : false);
  }

  return true;
}

static bool _NewRos2MqttBridge_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NewRos2MqttBridge_Request__ros_msg_type * ros_message = static_cast<_NewRos2MqttBridge_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ros_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->ros_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->ros_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->ros_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'ros_topic'\n");
      return false;
    }
  }

  // Field name: mqtt_topic
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mqtt_topic.data) {
      rosidl_runtime_c__String__init(&ros_message->mqtt_topic);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mqtt_topic,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mqtt_topic'\n");
      return false;
    }
  }

  // Field name: primitive
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->primitive = tmp ? true : false;
  }

  // Field name: inject_timestamp
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->inject_timestamp = tmp ? true : false;
  }

  // Field name: ros_queue_size
  {
    cdr >> ros_message->ros_queue_size;
  }

  // Field name: mqtt_qos
  {
    cdr >> ros_message->mqtt_qos;
  }

  // Field name: mqtt_retained
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mqtt_retained = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NewRos2MqttBridge_Request__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ros_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->ros_topic.size + 1);
  // field.name mqtt_topic
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mqtt_topic.size + 1);
  // field.name primitive
  {
    size_t item_size = sizeof(ros_message->primitive);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name inject_timestamp
  {
    size_t item_size = sizeof(ros_message->inject_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ros_queue_size
  {
    size_t item_size = sizeof(ros_message->ros_queue_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mqtt_qos
  {
    size_t item_size = sizeof(ros_message->mqtt_qos);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mqtt_retained
  {
    size_t item_size = sizeof(ros_message->mqtt_retained);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NewRos2MqttBridge_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: ros_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: mqtt_topic
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: primitive
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: inject_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ros_queue_size
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mqtt_qos
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mqtt_retained
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mqtt_client_interfaces__srv__NewRos2MqttBridge_Request;
    is_plain =
      (
      offsetof(DataType, mqtt_retained) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NewRos2MqttBridge_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NewRos2MqttBridge_Request = {
  "mqtt_client_interfaces::srv",
  "NewRos2MqttBridge_Request",
  _NewRos2MqttBridge_Request__cdr_serialize,
  _NewRos2MqttBridge_Request__cdr_deserialize,
  _NewRos2MqttBridge_Request__get_serialized_size,
  _NewRos2MqttBridge_Request__max_serialized_size
};

static rosidl_message_type_support_t _NewRos2MqttBridge_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NewRos2MqttBridge_Request,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__get_type_hash,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__get_type_description,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Request)() {
  return &_NewRos2MqttBridge_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__struct.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _NewRos2MqttBridge_Response__ros_msg_type = mqtt_client_interfaces__srv__NewRos2MqttBridge_Response;

static bool _NewRos2MqttBridge_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NewRos2MqttBridge_Response__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _NewRos2MqttBridge_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NewRos2MqttBridge_Response__ros_msg_type * ros_message = static_cast<_NewRos2MqttBridge_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NewRos2MqttBridge_Response__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NewRos2MqttBridge_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mqtt_client_interfaces__srv__NewRos2MqttBridge_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NewRos2MqttBridge_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NewRos2MqttBridge_Response = {
  "mqtt_client_interfaces::srv",
  "NewRos2MqttBridge_Response",
  _NewRos2MqttBridge_Response__cdr_serialize,
  _NewRos2MqttBridge_Response__cdr_deserialize,
  _NewRos2MqttBridge_Response__get_serialized_size,
  _NewRos2MqttBridge_Response__max_serialized_size
};

static rosidl_message_type_support_t _NewRos2MqttBridge_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NewRos2MqttBridge_Response,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__get_type_hash,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__get_type_description,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Response)() {
  return &_NewRos2MqttBridge_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__struct.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/new_ros2_mqtt_bridge__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions
size_t get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Request)();
size_t get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Response)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mqtt_client_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mqtt_client_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _NewRos2MqttBridge_Event__ros_msg_type = mqtt_client_interfaces__srv__NewRos2MqttBridge_Event;

static bool _NewRos2MqttBridge_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NewRos2MqttBridge_Event__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->info, cdr))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Request
      )()->data);
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Response
      )()->data);
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _NewRos2MqttBridge_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NewRos2MqttBridge_Event__ros_msg_type * ros_message = static_cast<_NewRos2MqttBridge_Event__ros_msg_type *>(untyped_ros_message);
  // Field name: info
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->info))
    {
      return false;
    }
  }

  // Field name: request
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Request
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__fini(&ros_message->request);
    }
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: response
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Response
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__fini(&ros_message->response);
    }
    if (!mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NewRos2MqttBridge_Event__ros_msg_type * ros_message = static_cast<const _NewRos2MqttBridge_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name info

  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);
  // field.name request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NewRos2MqttBridge_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Event(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mqtt_client_interfaces
size_t max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: info
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mqtt_client_interfaces__srv__NewRos2MqttBridge_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NewRos2MqttBridge_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mqtt_client_interfaces__srv__NewRos2MqttBridge_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NewRos2MqttBridge_Event = {
  "mqtt_client_interfaces::srv",
  "NewRos2MqttBridge_Event",
  _NewRos2MqttBridge_Event__cdr_serialize,
  _NewRos2MqttBridge_Event__cdr_deserialize,
  _NewRos2MqttBridge_Event__get_serialized_size,
  _NewRos2MqttBridge_Event__max_serialized_size
};

static rosidl_message_type_support_t _NewRos2MqttBridge_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NewRos2MqttBridge_Event,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__get_type_hash,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__get_type_description,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Event)() {
  return &_NewRos2MqttBridge_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mqtt_client_interfaces/srv/new_ros2_mqtt_bridge.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NewRos2MqttBridge__callbacks = {
  "mqtt_client_interfaces::srv",
  "NewRos2MqttBridge",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge_Response)(),
};

static rosidl_service_type_support_t NewRos2MqttBridge__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NewRos2MqttBridge__callbacks,
  get_service_typesupport_handle_function,
  &_NewRos2MqttBridge_Request__type_support,
  &_NewRos2MqttBridge_Response__type_support,
  &_NewRos2MqttBridge_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mqtt_client_interfaces,
    srv,
    NewRos2MqttBridge
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mqtt_client_interfaces,
    srv,
    NewRos2MqttBridge
  ),
  &mqtt_client_interfaces__srv__NewRos2MqttBridge__get_type_hash,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge__get_type_description,
  &mqtt_client_interfaces__srv__NewRos2MqttBridge__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mqtt_client_interfaces, srv, NewRos2MqttBridge)() {
  return &NewRos2MqttBridge__handle;
}

#if defined(__cplusplus)
}
#endif
