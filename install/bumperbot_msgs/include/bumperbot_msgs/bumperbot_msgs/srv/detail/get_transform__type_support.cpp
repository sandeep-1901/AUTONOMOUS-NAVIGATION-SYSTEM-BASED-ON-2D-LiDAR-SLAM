// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bumperbot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bumperbot_msgs/srv/detail/get_transform__functions.h"
#include "bumperbot_msgs/srv/detail/get_transform__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bumperbot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTransform_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bumperbot_msgs::srv::GetTransform_Request(_init);
}

void GetTransform_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bumperbot_msgs::srv::GetTransform_Request *>(message_memory);
  typed_message->~GetTransform_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTransform_Request_message_member_array[2] = {
  {
    "frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Request, frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_frame_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Request, child_frame_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTransform_Request_message_members = {
  "bumperbot_msgs::srv",  // message namespace
  "GetTransform_Request",  // message name
  2,  // number of fields
  sizeof(bumperbot_msgs::srv::GetTransform_Request),
  false,  // has_any_key_member_
  GetTransform_Request_message_member_array,  // message members
  GetTransform_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTransform_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTransform_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTransform_Request_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__GetTransform_Request__get_type_hash,
  &bumperbot_msgs__srv__GetTransform_Request__get_type_description,
  &bumperbot_msgs__srv__GetTransform_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bumperbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Request>()
{
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, srv, GetTransform_Request)() {
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__functions.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bumperbot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTransform_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bumperbot_msgs::srv::GetTransform_Response(_init);
}

void GetTransform_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bumperbot_msgs::srv::GetTransform_Response *>(message_memory);
  typed_message->~GetTransform_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTransform_Response_message_member_array[2] = {
  {
    "transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::TransformStamped>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Response, transform),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTransform_Response_message_members = {
  "bumperbot_msgs::srv",  // message namespace
  "GetTransform_Response",  // message name
  2,  // number of fields
  sizeof(bumperbot_msgs::srv::GetTransform_Response),
  false,  // has_any_key_member_
  GetTransform_Response_message_member_array,  // message members
  GetTransform_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTransform_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTransform_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTransform_Response_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__GetTransform_Response__get_type_hash,
  &bumperbot_msgs__srv__GetTransform_Response__get_type_description,
  &bumperbot_msgs__srv__GetTransform_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bumperbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Response>()
{
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, srv, GetTransform_Response)() {
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__functions.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bumperbot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetTransform_Event_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bumperbot_msgs::srv::GetTransform_Event(_init);
}

void GetTransform_Event_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bumperbot_msgs::srv::GetTransform_Event *>(message_memory);
  typed_message->~GetTransform_Event();
}

size_t size_function__GetTransform_Event__request(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bumperbot_msgs::srv::GetTransform_Request> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetTransform_Event__request(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bumperbot_msgs::srv::GetTransform_Request> *>(untyped_member);
  return &member[index];
}

void * get_function__GetTransform_Event__request(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bumperbot_msgs::srv::GetTransform_Request> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetTransform_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bumperbot_msgs::srv::GetTransform_Request *>(
    get_const_function__GetTransform_Event__request(untyped_member, index));
  auto & value = *reinterpret_cast<bumperbot_msgs::srv::GetTransform_Request *>(untyped_value);
  value = item;
}

void assign_function__GetTransform_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bumperbot_msgs::srv::GetTransform_Request *>(
    get_function__GetTransform_Event__request(untyped_member, index));
  const auto & value = *reinterpret_cast<const bumperbot_msgs::srv::GetTransform_Request *>(untyped_value);
  item = value;
}

void resize_function__GetTransform_Event__request(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bumperbot_msgs::srv::GetTransform_Request> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetTransform_Event__response(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bumperbot_msgs::srv::GetTransform_Response> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetTransform_Event__response(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bumperbot_msgs::srv::GetTransform_Response> *>(untyped_member);
  return &member[index];
}

void * get_function__GetTransform_Event__response(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bumperbot_msgs::srv::GetTransform_Response> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetTransform_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bumperbot_msgs::srv::GetTransform_Response *>(
    get_const_function__GetTransform_Event__response(untyped_member, index));
  auto & value = *reinterpret_cast<bumperbot_msgs::srv::GetTransform_Response *>(untyped_value);
  value = item;
}

void assign_function__GetTransform_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bumperbot_msgs::srv::GetTransform_Response *>(
    get_function__GetTransform_Event__response(untyped_member, index));
  const auto & value = *reinterpret_cast<const bumperbot_msgs::srv::GetTransform_Response *>(untyped_value);
  item = value;
}

void resize_function__GetTransform_Event__response(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bumperbot_msgs::srv::GetTransform_Response> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetTransform_Event_message_member_array[3] = {
  {
    "info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<service_msgs::msg::ServiceEventInfo>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Event, info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Request>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Event, request),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetTransform_Event__request,  // size() function pointer
    get_const_function__GetTransform_Event__request,  // get_const(index) function pointer
    get_function__GetTransform_Event__request,  // get(index) function pointer
    fetch_function__GetTransform_Event__request,  // fetch(index, &value) function pointer
    assign_function__GetTransform_Event__request,  // assign(index, value) function pointer
    resize_function__GetTransform_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Response>(),  // members of sub message
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(bumperbot_msgs::srv::GetTransform_Event, response),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetTransform_Event__response,  // size() function pointer
    get_const_function__GetTransform_Event__response,  // get_const(index) function pointer
    get_function__GetTransform_Event__response,  // get(index) function pointer
    fetch_function__GetTransform_Event__response,  // fetch(index, &value) function pointer
    assign_function__GetTransform_Event__response,  // assign(index, value) function pointer
    resize_function__GetTransform_Event__response  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetTransform_Event_message_members = {
  "bumperbot_msgs::srv",  // message namespace
  "GetTransform_Event",  // message name
  3,  // number of fields
  sizeof(bumperbot_msgs::srv::GetTransform_Event),
  false,  // has_any_key_member_
  GetTransform_Event_message_member_array,  // message members
  GetTransform_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  GetTransform_Event_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetTransform_Event_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTransform_Event_message_members,
  get_message_typesupport_handle_function,
  &bumperbot_msgs__srv__GetTransform_Event__get_type_hash,
  &bumperbot_msgs__srv__GetTransform_Event__get_type_description,
  &bumperbot_msgs__srv__GetTransform_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bumperbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Event>()
{
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Event_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, srv, GetTransform_Event)() {
  return &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__functions.h"
// already included above
// #include "bumperbot_msgs/srv/detail/get_transform__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace bumperbot_msgs
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetTransform_service_members = {
  "bumperbot_msgs::srv",  // service namespace
  "GetTransform",  // service name
  // the following fields are initialized below on first access
  // see get_service_type_support_handle<bumperbot_msgs::srv::GetTransform>()
  nullptr,  // request message
  nullptr,  // response message
  nullptr,  // event message
};

static const rosidl_service_type_support_t GetTransform_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetTransform_service_members,
  get_service_typesupport_handle_function,
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Request>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Response>(),
  ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bumperbot_msgs::srv::GetTransform_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<bumperbot_msgs::srv::GetTransform>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<bumperbot_msgs::srv::GetTransform>,
  &bumperbot_msgs__srv__GetTransform__get_type_hash,
  &bumperbot_msgs__srv__GetTransform__get_type_description,
  &bumperbot_msgs__srv__GetTransform__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace bumperbot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<bumperbot_msgs::srv::GetTransform>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::bumperbot_msgs::srv::rosidl_typesupport_introspection_cpp::GetTransform_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure all of the service_members are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr ||
    service_members->event_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bumperbot_msgs::srv::GetTransform_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bumperbot_msgs::srv::GetTransform_Response
      >()->data
      );
    // initialize the event_members_ with the static function from the external library
    service_members->event_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::bumperbot_msgs::srv::GetTransform_Event
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bumperbot_msgs, srv, GetTransform)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<bumperbot_msgs::srv::GetTransform>();
}

#ifdef __cplusplus
}
#endif
