// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/VarHandleSegmentViewBase.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class VarHandleSegmentAsShorts; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::VarHandleSegmentAsShorts>
{
	static constexpr fixed_string class_name = "java/lang/invoke/VarHandleSegmentAsShorts";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::VarHandleSegmentViewBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::VarHandleSegmentAsShorts : public jni::object_base<"java/lang/invoke/VarHandleSegmentAsShorts",
	java::lang::invoke::VarHandleSegmentViewBase>
{
public:

	jni::ref<java::lang::invoke::VarHandleSegmentAsShorts> withInvokeExactBehavior() { return call_method<"withInvokeExactBehavior", jni::ref<java::lang::invoke::VarHandleSegmentAsShorts>>(); }
	jni::ref<java::lang::invoke::VarHandleSegmentAsShorts> withInvokeBehavior() { return call_method<"withInvokeBehavior", jni::ref<java::lang::invoke::VarHandleSegmentAsShorts>>(); }

protected:

	VarHandleSegmentAsShorts(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_VARHANDLESEGMENTASSHORTS
