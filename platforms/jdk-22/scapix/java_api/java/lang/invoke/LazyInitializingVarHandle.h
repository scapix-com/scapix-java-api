// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class LazyInitializingVarHandle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::LazyInitializingVarHandle>
{
	static constexpr fixed_string class_name = "java/lang/invoke/LazyInitializingVarHandle";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#include <scapix/java_api/java/util/Optional.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::LazyInitializingVarHandle : public jni::object_base<"java/lang/invoke/LazyInitializingVarHandle",
	java::lang::invoke::VarHandle>
{
public:

	jni::ref<java::lang::invoke::VarHandle> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandle>>(); }
	jni::ref<java::lang::invoke::VarHandle> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandle>>(); }
	jni::ref<java::util::Optional> describeConstable() { return call_method<"describeConstable", jni::ref<java::util::Optional>>(); }
	jni::ref<java::lang::invoke::MethodHandle> getMethodHandleUncached(jint accessMode) { return call_method<"getMethodHandleUncached", jni::ref<java::lang::invoke::MethodHandle>>(accessMode); }

protected:

	LazyInitializingVarHandle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_LAZYINITIALIZINGVARHANDLE