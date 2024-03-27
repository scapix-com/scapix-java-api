// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Runnable.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandleNatives_CallSiteContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandleNatives_CallSiteContext>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandleNatives$CallSiteContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Runnable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MethodHandleNatives_CallSiteContext : public jni::object_base<"java/lang/invoke/MethodHandleNatives$CallSiteContext",
	java::lang::Object,
	java::lang::Runnable>
{
public:

	void run() { return call_method<"run", void>(); }

protected:

	MethodHandleNatives_CallSiteContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLENATIVES_CALLSITECONTEXT
