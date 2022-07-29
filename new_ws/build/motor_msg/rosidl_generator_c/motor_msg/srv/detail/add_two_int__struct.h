// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from motor_msg:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
#define MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package motor_msg.
typedef struct motor_msg__srv__AddTwoInt_Request
{
  int16_t a;
  int16_t b;
} motor_msg__srv__AddTwoInt_Request;

// Struct for a sequence of motor_msg__srv__AddTwoInt_Request.
typedef struct motor_msg__srv__AddTwoInt_Request__Sequence
{
  motor_msg__srv__AddTwoInt_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msg__srv__AddTwoInt_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/AddTwoInt in the package motor_msg.
typedef struct motor_msg__srv__AddTwoInt_Response
{
  int16_t sum;
} motor_msg__srv__AddTwoInt_Response;

// Struct for a sequence of motor_msg__srv__AddTwoInt_Response.
typedef struct motor_msg__srv__AddTwoInt_Response__Sequence
{
  motor_msg__srv__AddTwoInt_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} motor_msg__srv__AddTwoInt_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__STRUCT_H_
