// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rom_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rom_msgs/msg/detail/rpm__rosidl_typesupport_introspection_c.h"
#include "rom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rom_msgs/msg/detail/rpm__functions.h"
#include "rom_msgs/msg/detail/rpm__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rom_msgs__msg__Rpm__init(message_memory);
}

void rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_fini_function(void * message_memory)
{
  rom_msgs__msg__Rpm__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_member_array[2] = {
  {
    "left_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rom_msgs__msg__Rpm, left_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_rpm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rom_msgs__msg__Rpm, right_rpm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_members = {
  "rom_msgs__msg",  // message namespace
  "Rpm",  // message name
  2,  // number of fields
  sizeof(rom_msgs__msg__Rpm),
  rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_member_array,  // message members
  rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_init_function,  // function to initialize message memory (memory has to be allocated)
  rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_type_support_handle = {
  0,
  &rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rom_msgs, msg, Rpm)() {
  if (!rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_type_support_handle.typesupport_identifier) {
    rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rom_msgs__msg__Rpm__rosidl_typesupport_introspection_c__Rpm_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
