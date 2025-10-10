// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mqtt_client_interfaces:srv/NewMqtt2RosBridge.idl
// generated code does not contain a copyright notice

#include "mqtt_client_interfaces/srv/detail/new_mqtt2_ros_bridge__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mqtt_client_interfaces
const rosidl_type_hash_t *
mqtt_client_interfaces__srv__NewMqtt2RosBridge__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x79, 0x7f, 0x6b, 0x16, 0xa5, 0x4e, 0xe2,
      0xf2, 0x32, 0x45, 0x9c, 0x70, 0x0d, 0x3a, 0x18,
      0xfd, 0x2c, 0x43, 0xa1, 0x3f, 0xb9, 0x96, 0x6b,
      0xe9, 0xe2, 0x3c, 0xa9, 0x6b, 0xce, 0x48, 0x8d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mqtt_client_interfaces
const rosidl_type_hash_t *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x50, 0xcd, 0xc3, 0x52, 0xae, 0x6e, 0xda,
      0x7c, 0x94, 0xab, 0x74, 0x75, 0x13, 0x2a, 0x17,
      0xb0, 0x10, 0xd2, 0x96, 0xed, 0x21, 0x79, 0x64,
      0x22, 0xf1, 0xc3, 0xbc, 0x40, 0x91, 0x63, 0x5f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mqtt_client_interfaces
const rosidl_type_hash_t *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x28, 0xee, 0x44, 0x51, 0x30, 0xc9, 0x69, 0x2e,
      0x8e, 0xaa, 0x3e, 0x7e, 0x92, 0x12, 0x10, 0xe6,
      0x6d, 0xf4, 0x7a, 0xa9, 0x0d, 0x84, 0xb4, 0xbe,
      0x5f, 0x46, 0xad, 0x6f, 0x16, 0xb8, 0x4d, 0xbc,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_mqtt_client_interfaces
const rosidl_type_hash_t *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x61, 0xe8, 0x01, 0xee, 0xe1, 0xea, 0x7f, 0xc3,
      0x95, 0x7e, 0x36, 0x69, 0x52, 0x9f, 0x2a, 0xcc,
      0xef, 0x01, 0x88, 0x18, 0x83, 0xb1, 0x95, 0x80,
      0x6d, 0x00, 0xce, 0xe2, 0x06, 0x1f, 0xa9, 0xc6,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char mqtt_client_interfaces__srv__NewMqtt2RosBridge__TYPE_NAME[] = "mqtt_client_interfaces/srv/NewMqtt2RosBridge";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__TYPE_NAME[] = "mqtt_client_interfaces/srv/NewMqtt2RosBridge_Event";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME[] = "mqtt_client_interfaces/srv/NewMqtt2RosBridge_Request";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME[] = "mqtt_client_interfaces/srv/NewMqtt2RosBridge_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__request_message[] = "request_message";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__response_message[] = "response_message";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELDS[] = {
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__TYPE_NAME, 50, 50},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mqtt_client_interfaces__srv__NewMqtt2RosBridge__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__TYPE_NAME, 50, 50},
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mqtt_client_interfaces__srv__NewMqtt2RosBridge__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge__TYPE_NAME, 44, 44},
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge__FIELDS, 3, 3},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_topic[] = "ros_topic";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__mqtt_topic[] = "mqtt_topic";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__primitive[] = "primitive";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__primitive[] = "False";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__mqtt_qos[] = "mqtt_qos";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__mqtt_qos[] = "0";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_queue_size[] = "ros_queue_size";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__ros_queue_size[] = "1";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_latched[] = "ros_latched";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__ros_latched[] = "False";

static rosidl_runtime_c__type_description__Field mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELDS[] = {
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_topic, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__mqtt_topic, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__primitive, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__primitive, 5, 5},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__mqtt_qos, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__mqtt_qos, 1, 1},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_queue_size, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__ros_queue_size, 1, 1},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELD_NAME__ros_latched, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__DEFAULT_VALUE__ros_latched, 5, 5},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__FIELDS, 6, 6},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__FIELDS[] = {
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__FIELD_NAME__success, 7, 7},
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
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__info[] = "info";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__request[] = "request";
static char mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELDS[] = {
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__TYPE_NAME, 50, 50},
      {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__FIELDS, 3, 3},
    },
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# This service is used to dynamically register new MQTT -> ROS mappings.\n"
  "\n"
  "string ros_topic\n"
  "string mqtt_topic \n"
  "bool primitive false \n"
  "uint8 mqtt_qos 0\n"
  "uint32 ros_queue_size 1\n"
  "bool ros_latched false\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mqtt_client_interfaces__srv__NewMqtt2RosBridge__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge__TYPE_NAME, 44, 44},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 213, 213},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__TYPE_NAME, 53, 53},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__TYPE_NAME, 50, 50},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mqtt_client_interfaces__srv__NewMqtt2RosBridge__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_individual_type_description_source(NULL);
    sources[3] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_individual_type_description_source(NULL);
    sources[4] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Request__get_individual_type_description_source(NULL);
    sources[3] = *mqtt_client_interfaces__srv__NewMqtt2RosBridge_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
