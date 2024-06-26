// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/MemoryAccessVarHandleBase.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class MemoryAccessVarHandleShortHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::MemoryAccessVarHandleShortHelper>
{
	static constexpr fixed_string class_name = "java/lang/invoke/MemoryAccessVarHandleShortHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::MemoryAccessVarHandleBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::MemoryAccessVarHandleShortHelper : public jni::object_base<"java/lang/invoke/MemoryAccessVarHandleShortHelper",
	java::lang::invoke::MemoryAccessVarHandleBase>
{
public:

	jni::ref<java::lang::invoke::MemoryAccessVarHandleShortHelper> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::MemoryAccessVarHandleShortHelper>>(); }
	jni::ref<java::lang::invoke::MemoryAccessVarHandleShortHelper> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::MemoryAccessVarHandleShortHelper>>(); }

protected:

	MemoryAccessVarHandleShortHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_MEMORYACCESSVARHANDLESHORTHELPER
