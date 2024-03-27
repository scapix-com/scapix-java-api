// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/service/controls/actions/ControlAction.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::controls::actions { class FloatAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::controls::actions::FloatAction>
{
	static constexpr fixed_string class_name = "android/service/controls/actions/FloatAction";
	using base_classes = std::tuple<scapix::java_api::android::service::controls::actions::ControlAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::controls::actions::FloatAction : public jni::object_base<"android/service/controls/actions/FloatAction",
	android::service::controls::actions::ControlAction>
{
public:

	static jni::ref<android::service::controls::actions::FloatAction> new_object(jni::ref<java::lang::String> templateId, jfloat newValue) { return base_::new_object(templateId, newValue); }
	static jni::ref<android::service::controls::actions::FloatAction> new_object(jni::ref<java::lang::String> templateId, jfloat newValue, jni::ref<java::lang::String> challengeValue) { return base_::new_object(templateId, newValue, challengeValue); }
	jfloat getNewValue() { return call_method<"getNewValue", jfloat>(); }
	jint getActionType() { return call_method<"getActionType", jint>(); }

protected:

	FloatAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_FLOATACTION
