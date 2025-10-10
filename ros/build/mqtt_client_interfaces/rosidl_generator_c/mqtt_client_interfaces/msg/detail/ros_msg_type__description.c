// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mqtt_client_interfaces:msg/RosMsgType.idl
// generated code does not contain a copyright notice

#include "mqtt_client_interfaces/msg/detail/ros_msg_type__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mqtt_client_interfaces
const rosidl_type_hash_t *
mqtt_client_interfaces__msg__RosMsgType__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa2, 0xd7, 0xf3, 0x4c, 0xbf, 0xf2, 0xc1, 0x59,
      0xa0, 0x22, 0xf7, 0x01, 0xac, 0x7d, 0xf2, 0x66,
      0x0f, 0xfc, 0x01, 0x49, 0xb7, 0x8d, 0x13, 0x8b,
      0x1a, 0x38, 0x09, 0x52, 0x98, 0x7d, 0xec, 0xd6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mqtt_client_interfaces__msg__RosMsgType__TYPE_NAME[] = "mqtt_client_interfaces/msg/RosMsgType";

// Define type names, field names, and default values
static char mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__md5[] = "md5";
static char mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__name[] = "name";
static char mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__definition[] = "definition";
static char mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__stamped[] = "stamped";

static rosidl_runtime_c__type_description__Field mqtt_client_interfaces__msg__RosMsgType__FIELDS[] = {
  {
    {mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__md5, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__definition, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__msg__RosMsgType__FIELD_NAME__stamped, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mqtt_client_interfaces__msg__RosMsgType__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mqtt_client_interfaces__msg__RosMsgType__TYPE_NAME, 37, 37},
      {mqtt_client_interfaces__msg__RosMsgType__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This message contains information about a ROS Message Type.\n"
  "\n"
  "string md5          # MD5 sum of ROS message type\n"
  "string name         # ROS message type name (e.g. 'std_msgs/Float32')\n"
  "string definition   # ROS message type definition (e.g. 'float data')\n"
  "bool stamped        # whether timestamp is prepended for latency computation";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mqtt_client_interfaces__msg__RosMsgType__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mqtt_client_interfaces__msg__RosMsgType__TYPE_NAME, 37, 37},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 329, 329},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mqtt_client_interfaces__msg__RosMsgType__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mqtt_client_interfaces__msg__RosMsgType__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
