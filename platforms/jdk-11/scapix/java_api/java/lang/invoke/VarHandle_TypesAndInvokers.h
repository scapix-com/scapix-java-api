// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandle_TypesAndInvokers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandle_TypesAndInvokers>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandle$TypesAndInvokers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandle_TypesAndInvokers : public jni::object_base<"java/lang/invoke/VarHandle$TypesAndInvokers",
	java::lang::Object>
{
public:


protected:

	VarHandle_TypesAndInvokers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLE_TYPESANDINVOKERS
