// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from services_quiz_srv:srv/Turn.idl
// generated code does not contain a copyright notice

#ifndef SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__TRAITS_HPP_
#define SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "services_quiz_srv/srv/detail/turn__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace services_quiz_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Turn_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: angular_velocity
  {
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << ", ";
  }

  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: angular_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity, out);
    out << "\n";
  }

  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turn_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace services_quiz_srv

namespace rosidl_generator_traits
{

[[deprecated("use services_quiz_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const services_quiz_srv::srv::Turn_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  services_quiz_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use services_quiz_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const services_quiz_srv::srv::Turn_Request & msg)
{
  return services_quiz_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<services_quiz_srv::srv::Turn_Request>()
{
  return "services_quiz_srv::srv::Turn_Request";
}

template<>
inline const char * name<services_quiz_srv::srv::Turn_Request>()
{
  return "services_quiz_srv/srv/Turn_Request";
}

template<>
struct has_fixed_size<services_quiz_srv::srv::Turn_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<services_quiz_srv::srv::Turn_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<services_quiz_srv::srv::Turn_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace services_quiz_srv
{

namespace srv
{

inline void to_flow_style_yaml(
  const Turn_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Turn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Turn_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace services_quiz_srv

namespace rosidl_generator_traits
{

[[deprecated("use services_quiz_srv::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const services_quiz_srv::srv::Turn_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  services_quiz_srv::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use services_quiz_srv::srv::to_yaml() instead")]]
inline std::string to_yaml(const services_quiz_srv::srv::Turn_Response & msg)
{
  return services_quiz_srv::srv::to_yaml(msg);
}

template<>
inline const char * data_type<services_quiz_srv::srv::Turn_Response>()
{
  return "services_quiz_srv::srv::Turn_Response";
}

template<>
inline const char * name<services_quiz_srv::srv::Turn_Response>()
{
  return "services_quiz_srv/srv/Turn_Response";
}

template<>
struct has_fixed_size<services_quiz_srv::srv::Turn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<services_quiz_srv::srv::Turn_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<services_quiz_srv::srv::Turn_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<services_quiz_srv::srv::Turn>()
{
  return "services_quiz_srv::srv::Turn";
}

template<>
inline const char * name<services_quiz_srv::srv::Turn>()
{
  return "services_quiz_srv/srv/Turn";
}

template<>
struct has_fixed_size<services_quiz_srv::srv::Turn>
  : std::integral_constant<
    bool,
    has_fixed_size<services_quiz_srv::srv::Turn_Request>::value &&
    has_fixed_size<services_quiz_srv::srv::Turn_Response>::value
  >
{
};

template<>
struct has_bounded_size<services_quiz_srv::srv::Turn>
  : std::integral_constant<
    bool,
    has_bounded_size<services_quiz_srv::srv::Turn_Request>::value &&
    has_bounded_size<services_quiz_srv::srv::Turn_Response>::value
  >
{
};

template<>
struct is_service<services_quiz_srv::srv::Turn>
  : std::true_type
{
};

template<>
struct is_service_request<services_quiz_srv::srv::Turn_Request>
  : std::true_type
{
};

template<>
struct is_service_response<services_quiz_srv::srv::Turn_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SERVICES_QUIZ_SRV__SRV__DETAIL__TURN__TRAITS_HPP_
