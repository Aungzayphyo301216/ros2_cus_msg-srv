// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_msg:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_msg/srv/detail/add_two_int__rosidl_typesupport_introspection_c.h"
#include "motor_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_msg/srv/detail/add_two_int__functions.h"
#include "motor_msg/srv/detail/add_two_int__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_msg__srv__AddTwoInt_Request__init(message_memory);
}

void motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_fini_function(void * message_memory)
{
  motor_msg__srv__AddTwoInt_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_member_array[2] = {
  {
    "a",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_msg__srv__AddTwoInt_Request, a),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "b",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_msg__srv__AddTwoInt_Request, b),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_members = {
  "motor_msg__srv",  // message namespace
  "AddTwoInt_Request",  // message name
  2,  // number of fields
  sizeof(motor_msg__srv__AddTwoInt_Request),
  motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_member_array,  // message members
  motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_type_support_handle = {
  0,
  &motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Request)() {
  if (!motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_type_support_handle.typesupport_identifier) {
    motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_msg__srv__AddTwoInt_Request__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "motor_msg/srv/detail/add_two_int__rosidl_typesupport_introspection_c.h"
// already included above
// #include "motor_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "motor_msg/srv/detail/add_two_int__functions.h"
// already included above
// #include "motor_msg/srv/detail/add_two_int__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_msg__srv__AddTwoInt_Response__init(message_memory);
}

void motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_fini_function(void * message_memory)
{
  motor_msg__srv__AddTwoInt_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_member_array[1] = {
  {
    "sum",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_msg__srv__AddTwoInt_Response, sum),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_members = {
  "motor_msg__srv",  // message namespace
  "AddTwoInt_Response",  // message name
  1,  // number of fields
  sizeof(motor_msg__srv__AddTwoInt_Response),
  motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_member_array,  // message members
  motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_type_support_handle = {
  0,
  &motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Response)() {
  if (!motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_type_support_handle.typesupport_identifier) {
    motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_msg__srv__AddTwoInt_Response__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "motor_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "motor_msg/srv/detail/add_two_int__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_members = {
  "motor_msg__srv",  // service namespace
  "AddTwoInt",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_Request_message_type_support_handle,
  NULL  // response message
  // motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_Response_message_type_support_handle
};

static rosidl_service_type_support_t motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_type_support_handle = {
  0,
  &motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_msg
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt)() {
  if (!motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_type_support_handle.typesupport_identifier) {
    motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_msg, srv, AddTwoInt_Response)()->data;
  }

  return &motor_msg__srv__detail__add_two_int__rosidl_typesupport_introspection_c__AddTwoInt_service_type_support_handle;
}
