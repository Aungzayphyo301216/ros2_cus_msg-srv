// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rom_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

#ifndef ROM_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define ROM_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package rom_msgs.
typedef struct rom_msgs__srv__AddTwoInts_Request
{
  int16_t a;
  int16_t b;
} rom_msgs__srv__AddTwoInts_Request;

// Struct for a sequence of rom_msgs__srv__AddTwoInts_Request.
typedef struct rom_msgs__srv__AddTwoInts_Request__Sequence
{
  rom_msgs__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rom_msgs__srv__AddTwoInts_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package rom_msgs.
typedef struct rom_msgs__srv__AddTwoInts_Response
{
  int16_t sum;
} rom_msgs__srv__AddTwoInts_Response;

// Struct for a sequence of rom_msgs__srv__AddTwoInts_Response.
typedef struct rom_msgs__srv__AddTwoInts_Response__Sequence
{
  rom_msgs__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rom_msgs__srv__AddTwoInts_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROM_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
