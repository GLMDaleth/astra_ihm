// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mqtt_client_interfaces:srv/IsConnected.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_introspection_c.h"
#include "mqtt_client_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"
#include "mqtt_client_interfaces/srv/detail/is_connected__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mqtt_client_interfaces__srv__IsConnected_Request__init(message_memory);
}

void mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_fini_function(void * message_memory)
{
  mqtt_client_interfaces__srv__IsConnected_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces__srv__IsConnected_Request, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_members = {
  "mqtt_client_interfaces__srv",  // message namespace
  "IsConnected_Request",  // message name
  1,  // number of fields
  sizeof(mqtt_client_interfaces__srv__IsConnected_Request),
  mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_member_array,  // message members
  mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle = {
  0,
  &mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_members,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__IsConnected_Request__get_type_hash,
  &mqtt_client_interfaces__srv__IsConnected_Request__get_type_description,
  &mqtt_client_interfaces__srv__IsConnected_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Request)() {
  if (!mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle.typesupport_identifier) {
    mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mqtt_client_interfaces__srv__IsConnected_Response__init(message_memory);
}

void mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_fini_function(void * message_memory)
{
  mqtt_client_interfaces__srv__IsConnected_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_member_array[1] = {
  {
    "connected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces__srv__IsConnected_Response, connected),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_members = {
  "mqtt_client_interfaces__srv",  // message namespace
  "IsConnected_Response",  // message name
  1,  // number of fields
  sizeof(mqtt_client_interfaces__srv__IsConnected_Response),
  mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_member_array,  // message members
  mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle = {
  0,
  &mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_members,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__IsConnected_Response__get_type_hash,
  &mqtt_client_interfaces__srv__IsConnected_Response__get_type_description,
  &mqtt_client_interfaces__srv__IsConnected_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Response)() {
  if (!mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle.typesupport_identifier) {
    mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__functions.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "mqtt_client_interfaces/srv/is_connected.h"
// Member `request`
// Member `response`
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mqtt_client_interfaces__srv__IsConnected_Event__init(message_memory);
}

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_fini_function(void * message_memory)
{
  mqtt_client_interfaces__srv__IsConnected_Event__fini(message_memory);
}

size_t mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__size_function__IsConnected_Event__request(
  const void * untyped_member)
{
  const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * member =
    (const mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__request(
  const void * untyped_member, size_t index)
{
  const mqtt_client_interfaces__srv__IsConnected_Request__Sequence * member =
    (const mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__request(
  void * untyped_member, size_t index)
{
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * member =
    (mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__fetch_function__IsConnected_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mqtt_client_interfaces__srv__IsConnected_Request * item =
    ((const mqtt_client_interfaces__srv__IsConnected_Request *)
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__request(untyped_member, index));
  mqtt_client_interfaces__srv__IsConnected_Request * value =
    (mqtt_client_interfaces__srv__IsConnected_Request *)(untyped_value);
  *value = *item;
}

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__assign_function__IsConnected_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mqtt_client_interfaces__srv__IsConnected_Request * item =
    ((mqtt_client_interfaces__srv__IsConnected_Request *)
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__request(untyped_member, index));
  const mqtt_client_interfaces__srv__IsConnected_Request * value =
    (const mqtt_client_interfaces__srv__IsConnected_Request *)(untyped_value);
  *item = *value;
}

bool mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__resize_function__IsConnected_Event__request(
  void * untyped_member, size_t size)
{
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence * member =
    (mqtt_client_interfaces__srv__IsConnected_Request__Sequence *)(untyped_member);
  mqtt_client_interfaces__srv__IsConnected_Request__Sequence__fini(member);
  return mqtt_client_interfaces__srv__IsConnected_Request__Sequence__init(member, size);
}

size_t mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__size_function__IsConnected_Event__response(
  const void * untyped_member)
{
  const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * member =
    (const mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__response(
  const void * untyped_member, size_t index)
{
  const mqtt_client_interfaces__srv__IsConnected_Response__Sequence * member =
    (const mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__response(
  void * untyped_member, size_t index)
{
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * member =
    (mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__fetch_function__IsConnected_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mqtt_client_interfaces__srv__IsConnected_Response * item =
    ((const mqtt_client_interfaces__srv__IsConnected_Response *)
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__response(untyped_member, index));
  mqtt_client_interfaces__srv__IsConnected_Response * value =
    (mqtt_client_interfaces__srv__IsConnected_Response *)(untyped_value);
  *value = *item;
}

void mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__assign_function__IsConnected_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mqtt_client_interfaces__srv__IsConnected_Response * item =
    ((mqtt_client_interfaces__srv__IsConnected_Response *)
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__response(untyped_member, index));
  const mqtt_client_interfaces__srv__IsConnected_Response * value =
    (const mqtt_client_interfaces__srv__IsConnected_Response *)(untyped_value);
  *item = *value;
}

bool mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__resize_function__IsConnected_Event__response(
  void * untyped_member, size_t size)
{
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence * member =
    (mqtt_client_interfaces__srv__IsConnected_Response__Sequence *)(untyped_member);
  mqtt_client_interfaces__srv__IsConnected_Response__Sequence__fini(member);
  return mqtt_client_interfaces__srv__IsConnected_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mqtt_client_interfaces__srv__IsConnected_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mqtt_client_interfaces__srv__IsConnected_Event, request),  // bytes offset in struct
    NULL,  // default value
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__size_function__IsConnected_Event__request,  // size() function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__request,  // get_const(index) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__request,  // get(index) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__fetch_function__IsConnected_Event__request,  // fetch(index, &value) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__assign_function__IsConnected_Event__request,  // assign(index, value) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__resize_function__IsConnected_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(mqtt_client_interfaces__srv__IsConnected_Event, response),  // bytes offset in struct
    NULL,  // default value
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__size_function__IsConnected_Event__response,  // size() function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_const_function__IsConnected_Event__response,  // get_const(index) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__get_function__IsConnected_Event__response,  // get(index) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__fetch_function__IsConnected_Event__response,  // fetch(index, &value) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__assign_function__IsConnected_Event__response,  // assign(index, value) function pointer
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__resize_function__IsConnected_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_members = {
  "mqtt_client_interfaces__srv",  // message namespace
  "IsConnected_Event",  // message name
  3,  // number of fields
  sizeof(mqtt_client_interfaces__srv__IsConnected_Event),
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_member_array,  // message members
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_type_support_handle = {
  0,
  &mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_members,
  get_message_typesupport_handle_function,
  &mqtt_client_interfaces__srv__IsConnected_Event__get_type_hash,
  &mqtt_client_interfaces__srv__IsConnected_Event__get_type_description,
  &mqtt_client_interfaces__srv__IsConnected_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mqtt_client_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Event)() {
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Request)();
  mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Response)();
  if (!mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_type_support_handle.typesupport_identifier) {
    mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mqtt_client_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mqtt_client_interfaces/srv/detail/is_connected__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_members = {
  "mqtt_client_interfaces__srv",  // service namespace
  "IsConnected",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle,
  NULL,  // response message
  // mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle
  NULL  // event_message
  // mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle
};


static rosidl_service_type_support_t mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_type_support_handle = {
  0,
  &mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_members,
  get_service_typesupport_handle_function,
  &mqtt_client_interfaces__srv__IsConnected_Request__rosidl_typesupport_introspection_c__IsConnected_Request_message_type_support_handle,
  &mqtt_client_interfaces__srv__IsConnected_Response__rosidl_typesupport_introspection_c__IsConnected_Response_message_type_support_handle,
  &mqtt_client_interfaces__srv__IsConnected_Event__rosidl_typesupport_introspection_c__IsConnected_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mqtt_client_interfaces,
    srv,
    IsConnected
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    mqtt_client_interfaces,
    srv,
    IsConnected
  ),
  &mqtt_client_interfaces__srv__IsConnected__get_type_hash,
  &mqtt_client_interfaces__srv__IsConnected__get_type_description,
  &mqtt_client_interfaces__srv__IsConnected__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mqtt_client_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected)() {
  if (!mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_type_support_handle.typesupport_identifier) {
    mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mqtt_client_interfaces, srv, IsConnected_Event)()->data;
  }

  return &mqtt_client_interfaces__srv__detail__is_connected__rosidl_typesupport_introspection_c__IsConnected_service_type_support_handle;
}
