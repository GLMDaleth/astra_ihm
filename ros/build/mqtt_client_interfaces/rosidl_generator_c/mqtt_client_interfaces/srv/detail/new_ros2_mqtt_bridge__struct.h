// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mqtt_client_interfaces:srv/NewRos2MqttBridge.idl
// generated code does not contain a copyright notice

#ifndef MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_H_
#define MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ros_topic'
// Member 'mqtt_topic'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/NewRos2MqttBridge in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Request
{
  rosidl_runtime_c__String ros_topic;
  rosidl_runtime_c__String mqtt_topic;
  bool primitive;
  bool inject_timestamp;
  uint32_t ros_queue_size;
  uint8_t mqtt_qos;
  bool mqtt_retained;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Request;

// Struct for a sequence of mqtt_client_interfaces__srv__NewRos2MqttBridge_Request.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence
{
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/NewRos2MqttBridge in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Response
{
  bool success;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Response;

// Struct for a sequence of mqtt_client_interfaces__srv__NewRos2MqttBridge_Response.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence
{
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__request__MAX_SIZE = 1
};
// response
enum
{
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/NewRos2MqttBridge in the package mqtt_client_interfaces.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Event
{
  service_msgs__msg__ServiceEventInfo info;
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Request__Sequence request;
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Response__Sequence response;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Event;

// Struct for a sequence of mqtt_client_interfaces__srv__NewRos2MqttBridge_Event.
typedef struct mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence
{
  mqtt_client_interfaces__srv__NewRos2MqttBridge_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mqtt_client_interfaces__srv__NewRos2MqttBridge_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MQTT_CLIENT_INTERFACES__SRV__DETAIL__NEW_ROS2_MQTT_BRIDGE__STRUCT_H_
