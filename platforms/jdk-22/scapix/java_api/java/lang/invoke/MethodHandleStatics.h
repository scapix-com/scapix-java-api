// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandleStatics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandleStatics>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandleStatics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MethodHandleStatics : public jni::object_base<"java/lang/invoke/MethodHandleStatics",
	java::lang::Object>
{
public:


protected:

	MethodHandleStatics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLESTATICS
