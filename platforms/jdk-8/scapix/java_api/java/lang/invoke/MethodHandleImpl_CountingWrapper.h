// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/DelegatingMethodHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandleImpl_CountingWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandleImpl_CountingWrapper>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandleImpl$CountingWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::DelegatingMethodHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MethodHandleImpl_CountingWrapper : public jni::object_base<"java/lang/invoke/MethodHandleImpl$CountingWrapper",
	java::lang::invoke::DelegatingMethodHandle>
{
public:

	jni::ref<java::lang::invoke::MethodHandle> asTypeUncached(jni::ref<java::lang::invoke::MethodType> p1) { return call_method<"asTypeUncached", jni::ref<java::lang::invoke::MethodHandle>>(p1); }

protected:

	MethodHandleImpl_CountingWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEIMPL_COUNTINGWRAPPER
