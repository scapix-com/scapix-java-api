// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandleImpl_Makers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandleImpl_Makers>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandleImpl$Makers";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MethodHandleImpl_Makers : public jni::object_base<"java/lang/invoke/MethodHandleImpl$Makers",
	java::lang::Object>
{
public:


protected:

	MethodHandleImpl_Makers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_MAKERS
