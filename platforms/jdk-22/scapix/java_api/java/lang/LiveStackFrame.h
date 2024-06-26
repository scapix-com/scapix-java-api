// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/StackWalker_StackFrame.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class LiveStackFrame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::LiveStackFrame>
{
	static constexpr fixed_string class_name = "java/lang/LiveStackFrame";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::StackWalker_StackFrame>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME)
#define SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/StackWalker.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/jdk/internal/vm/Continuation.h>
#include <scapix/java_api/jdk/internal/vm/ContinuationScope.h>
#include <scapix/java_api/java/lang/LiveStackFrame_PrimitiveSlot.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::LiveStackFrame : public jni::object_base<"java/lang/LiveStackFrame",
	java::lang::Object,
	java::lang::StackWalker_StackFrame>
{
public:

	using PrimitiveSlot = LiveStackFrame_PrimitiveSlot;

	jni::ref<jni::array<java::lang::Object>> getMonitors() { return call_method<"getMonitors", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> getLocals() { return call_method<"getLocals", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> getStack() { return call_method<"getStack", jni::ref<jni::array<java::lang::Object>>>(); }
	static jni::ref<java::lang::StackWalker> getStackWalker() { return call_static_method<"getStackWalker", jni::ref<java::lang::StackWalker>>(); }
	static jni::ref<java::lang::StackWalker> getStackWalker(jni::ref<java::util::Set> options) { return call_static_method<"getStackWalker", jni::ref<java::lang::StackWalker>>(options); }
	static jni::ref<java::lang::StackWalker> getStackWalker(jni::ref<java::util::Set> options, jni::ref<jdk::internal::vm::ContinuationScope> contScope) { return call_static_method<"getStackWalker", jni::ref<java::lang::StackWalker>>(options, contScope); }
	static jni::ref<java::lang::StackWalker> getStackWalker(jni::ref<jdk::internal::vm::Continuation> continuation) { return call_static_method<"getStackWalker", jni::ref<java::lang::StackWalker>>(continuation); }
	static jni::ref<java::lang::StackWalker> getStackWalker(jni::ref<java::util::Set> options, jni::ref<jdk::internal::vm::ContinuationScope> contScope, jni::ref<jdk::internal::vm::Continuation> continuation) { return call_static_method<"getStackWalker", jni::ref<java::lang::StackWalker>>(options, contScope, continuation); }

protected:

	LiveStackFrame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_LIVESTACKFRAME
