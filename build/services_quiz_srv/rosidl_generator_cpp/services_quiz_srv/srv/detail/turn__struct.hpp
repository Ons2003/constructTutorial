// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from services_quiz_srv:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_HPP_
#define SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__services_quiz_srv__srv__Turn_Request __attribute__((deprecated))
#else
# define DEPRECATED__services_quiz_srv__srv__Turn_Request __declspec(deprecated)
#endif

namespace services_quiz_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Turn_Request_
{
  using Type = Turn_Request_<ContainerAllocator>;

  explicit Turn_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->angular_velocity = 0.0;
      this->time = 0l;
    }
  }

  explicit Turn_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = "";
      this->angular_velocity = 0.0;
      this->time = 0l;
    }
  }

  // field types and members
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _angular_velocity_type =
    double;
  _angular_velocity_type angular_velocity;
  using _time_type =
    int32_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const double & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }
  Type & set__time(
    const int32_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    services_quiz_srv::srv::Turn_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const services_quiz_srv::srv::Turn_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      services_quiz_srv::srv::Turn_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      services_quiz_srv::srv::Turn_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__services_quiz_srv__srv__Turn_Request
    std::shared_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__services_quiz_srv__srv__Turn_Request
    std::shared_ptr<services_quiz_srv::srv::Turn_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turn_Request_ & other) const
  {
    if (this->direction != other.direction) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turn_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turn_Request_

// alias to use template instance with default allocator
using Turn_Request =
  services_quiz_srv::srv::Turn_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace services_quiz_srv


#ifndef _WIN32
# define DEPRECATED__services_quiz_srv__srv__Turn_Response __attribute__((deprecated))
#else
# define DEPRECATED__services_quiz_srv__srv__Turn_Response __declspec(deprecated)
#endif

namespace services_quiz_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Turn_Response_
{
  using Type = Turn_Response_<ContainerAllocator>;

  explicit Turn_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Turn_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    services_quiz_srv::srv::Turn_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const services_quiz_srv::srv::Turn_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      services_quiz_srv::srv::Turn_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      services_quiz_srv::srv::Turn_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__services_quiz_srv__srv__Turn_Response
    std::shared_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__services_quiz_srv__srv__Turn_Response
    std::shared_ptr<services_quiz_srv::srv::Turn_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Turn_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Turn_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Turn_Response_

// alias to use template instance with default allocator
using Turn_Response =
  services_quiz_srv::srv::Turn_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace services_quiz_srv

namespace services_quiz_srv
{

namespace srv
{

struct Turn
{
  using Request = services_quiz_srv::srv::Turn_Request;
  using Response = services_quiz_srv::srv::Turn_Response;
};

}  // namespace srv

}  // namespace services_quiz_srv

#endif  // SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__STRUCT_HPP_
