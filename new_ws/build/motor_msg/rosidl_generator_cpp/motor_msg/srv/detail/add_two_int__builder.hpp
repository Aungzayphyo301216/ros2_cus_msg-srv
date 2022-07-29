// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_msg:srv/AddTwoInt.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
#define MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_msg/srv/detail/add_two_int__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_msg
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Request_b
{
public:
  explicit Init_AddTwoInt_Request_b(::motor_msg::srv::AddTwoInt_Request & msg)
  : msg_(msg)
  {}
  ::motor_msg::srv::AddTwoInt_Request b(::motor_msg::srv::AddTwoInt_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msg::srv::AddTwoInt_Request msg_;
};

class Init_AddTwoInt_Request_a
{
public:
  Init_AddTwoInt_Request_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddTwoInt_Request_b a(::motor_msg::srv::AddTwoInt_Request::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_AddTwoInt_Request_b(msg_);
  }

private:
  ::motor_msg::srv::AddTwoInt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msg::srv::AddTwoInt_Request>()
{
  return motor_msg::srv::builder::Init_AddTwoInt_Request_a();
}

}  // namespace motor_msg


namespace motor_msg
{

namespace srv
{

namespace builder
{

class Init_AddTwoInt_Response_sum
{
public:
  Init_AddTwoInt_Response_sum()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::motor_msg::srv::AddTwoInt_Response sum(::motor_msg::srv::AddTwoInt_Response::_sum_type arg)
  {
    msg_.sum = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_msg::srv::AddTwoInt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_msg::srv::AddTwoInt_Response>()
{
  return motor_msg::srv::builder::Init_AddTwoInt_Response_sum();
}

}  // namespace motor_msg

#endif  // MOTOR_MSG__SRV__DETAIL__ADD_TWO_INT__BUILDER_HPP_
