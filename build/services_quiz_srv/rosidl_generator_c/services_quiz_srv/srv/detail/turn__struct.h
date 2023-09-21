// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from services_quiz_srv:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_H_
#define SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Turn in the package services_quiz_srv.
typedef struct services_quiz_srv__srv__Turn_Request
{
  /// Direction to spin (right or left)
  rosidl_runtime_c__String direction;
  /// Angular Velocity (in rad/s)
  double angular_velocity;
  /// Duration of the spin (in seconds)
  int32_t time;
} services_quiz_srv__srv__Turn_Request;

// Struct for a sequence of services_quiz_srv__srv__Turn_Request.
typedef struct services_quiz_srv__srv__Turn_Request__Sequence
{
  services_quiz_srv__srv__Turn_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_quiz_srv__srv__Turn_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Turn in the package services_quiz_srv.
typedef struct services_quiz_srv__srv__Turn_Response
{
  /// Did it achieve it?
  bool success;
} services_quiz_srv__srv__Turn_Response;

// Struct for a sequence of services_quiz_srv__srv__Turn_Response.
typedef struct services_quiz_srv__srv__Turn_Response__Sequence
{
  services_quiz_srv__srv__Turn_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} services_quiz_srv__srv__Turn_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_H_
