// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::service::controls::actions { class ControlAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::service::controls::actions::ControlAction>
{
	static constexpr fixed_string class_name = "android/service/controls/actions/ControlAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION)
#define SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::service::controls::actions::ControlAction : public jni::object_base<"android/service/controls/actions/ControlAction",
	java::lang::Object>
{
public:

	static jint RESPONSE_CHALLENGE_ACK() { return get_static_field<"RESPONSE_CHALLENGE_ACK", jint>(); }
	static jint RESPONSE_CHALLENGE_PASSPHRASE() { return get_static_field<"RESPONSE_CHALLENGE_PASSPHRASE", jint>(); }
	static jint RESPONSE_CHALLENGE_PIN() { return get_static_field<"RESPONSE_CHALLENGE_PIN", jint>(); }
	static jint RESPONSE_FAIL() { return get_static_field<"RESPONSE_FAIL", jint>(); }
	static jint RESPONSE_OK() { return get_static_field<"RESPONSE_OK", jint>(); }
	static jint RESPONSE_UNKNOWN() { return get_static_field<"RESPONSE_UNKNOWN", jint>(); }
	static jint TYPE_BOOLEAN() { return get_static_field<"TYPE_BOOLEAN", jint>(); }
	static jint TYPE_COMMAND() { return get_static_field<"TYPE_COMMAND", jint>(); }
	static jint TYPE_ERROR() { return get_static_field<"TYPE_ERROR", jint>(); }
	static jint TYPE_FLOAT() { return get_static_field<"TYPE_FLOAT", jint>(); }
	static jint TYPE_MODE() { return get_static_field<"TYPE_MODE", jint>(); }

	static jboolean isValidResponse(jint response) { return call_static_method<"isValidResponse", jboolean>(response); }
	jint getActionType() { return call_method<"getActionType", jint>(); }
	jni::ref<java::lang::String> getTemplateId() { return call_method<"getTemplateId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getChallengeValue() { return call_method<"getChallengeValue", jni::ref<java::lang::String>>(); }
	static jni::ref<android::service::controls::actions::ControlAction> getErrorAction() { return call_static_method<"getErrorAction", jni::ref<android::service::controls::actions::ControlAction>>(); }

protected:

	ControlAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SERVICE_CONTROLS_ACTIONS_CONTROLACTION
