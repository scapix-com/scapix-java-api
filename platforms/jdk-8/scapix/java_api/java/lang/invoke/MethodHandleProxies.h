// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MethodHandleProxies; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MethodHandleProxies>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MethodHandleProxies";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::MethodHandleProxies : public jni::object_base<"java/lang/invoke/MethodHandleProxies",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::Object> asInterfaceInstance(jni::ref<java::lang::Class> p1, jni::ref<java::lang::invoke::MethodHandle> p2) { return call_static_method<"asInterfaceInstance", jni::ref<java::lang::Object>>(p1, p2); }
	static jboolean isWrapperInstance(jni::ref<java::lang::Object> p1) { return call_static_method<"isWrapperInstance", jboolean>(p1); }
	static jni::ref<java::lang::invoke::MethodHandle> wrapperInstanceTarget(jni::ref<java::lang::Object> p1) { return call_static_method<"wrapperInstanceTarget", jni::ref<java::lang::invoke::MethodHandle>>(p1); }
	static jni::ref<java::lang::Class> wrapperInstanceType(jni::ref<java::lang::Object> p1) { return call_static_method<"wrapperInstanceType", jni::ref<java::lang::Class>>(p1); }

protected:

	MethodHandleProxies(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_METHODHANDLEPROXIES
