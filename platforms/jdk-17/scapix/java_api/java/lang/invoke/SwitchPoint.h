// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class SwitchPoint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::SwitchPoint>
{
	static constexpr fixed_string class_name = "java/lang/invoke/SwitchPoint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodHandle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::invoke::SwitchPoint : public jni::object_base<"java/lang/invoke/SwitchPoint",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::invoke::SwitchPoint> new_object() { return base_::new_object(); }
	jboolean hasBeenInvalidated() { return call_method<"hasBeenInvalidated", jboolean>(); }
	jni::ref<java::lang::invoke::MethodHandle> guardWithTest(jni::ref<java::lang::invoke::MethodHandle> target, jni::ref<java::lang::invoke::MethodHandle> fallback) { return call_method<"guardWithTest", jni::ref<java::lang::invoke::MethodHandle>>(target, fallback); }
	static void invalidateAll(jni::ref<jni::array<java::lang::invoke::SwitchPoint>> switchPoints) { return call_static_method<"invalidateAll", void>(switchPoints); }

protected:

	SwitchPoint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_SWITCHPOINT