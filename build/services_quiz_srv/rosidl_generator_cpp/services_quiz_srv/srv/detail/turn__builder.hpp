// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from services_quiz_srv:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__BUILDER_HPP_
#define SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "services_quiz_srv/srv/detail/turn__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace services_quiz_srv
{

namespace srv
{

namespace builder
{

class Init_Turn_Request_time
{
public:
  explicit Init_Turn_Request_time(::services_quiz_srv::srv::Turn_Request & msg)
  : msg_(msg)
  {}
  ::services_quiz_srv::srv::Turn_Request time(::services_quiz_srv::srv::Turn_Request::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_quiz_srv::srv::Turn_Request msg_;
};

class Init_Turn_Request_angular_velocity
{
public:
  explicit Init_Turn_Request_angular_velocity(::services_quiz_srv::srv::Turn_Request & msg)
  : msg_(msg)
  {}
  Init_Turn_Request_time angular_velocity(::services_quiz_srv::srv::Turn_Request::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return Init_Turn_Request_time(msg_);
  }

private:
  ::services_quiz_srv::srv::Turn_Request msg_;
};

class Init_Turn_Request_direction
{
public:
  Init_Turn_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Turn_Request_angular_velocity direction(::services_quiz_srv::srv::Turn_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Turn_Request_angular_velocity(msg_);
  }

private:
  ::services_quiz_srv::srv::Turn_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_quiz_srv::srv::Turn_Request>()
{
  return services_quiz_srv::srv::builder::Init_Turn_Request_direction();
}

}  // namespace services_quiz_srv


namespace services_quiz_srv
{

namespace srv
{

namespace builder
{

class Init_Turn_Response_success
{
public:
  Init_Turn_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::services_quiz_srv::srv::Turn_Response success(::services_quiz_srv::srv::Turn_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::services_quiz_srv::srv::Turn_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::services_quiz_srv::srv::Turn_Response>()
{
  return services_quiz_srv::srv::builder::Init_Turn_Response_success();
}

}  // namespace services_quiz_srv

#endif  // SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__BUILDER_HPP_
