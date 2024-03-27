// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class InCallService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::InCallService>
{
	static constexpr fixed_string class_name = "android/telecom/InCallService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/telecom/Call.h>
#include <scapix/java_api/android/telecom/CallAudioState.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/telecom/InCallService_VideoCall.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::InCallService : public jni::object_base<"android/telecom/InCallService",
	android::app::Service>
{
public:

	using VideoCall = InCallService_VideoCall;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::telecom::InCallService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	jboolean onUnbind(jni::ref<android::content::Intent> intent) { return call_method<"onUnbind", jboolean>(intent); }
	jni::ref<java::util::List> getCalls() { return call_method<"getCalls", jni::ref<java::util::List>>(); }
	jboolean canAddCall() { return call_method<"canAddCall", jboolean>(); }
	jni::ref<android::telecom::CallAudioState> getCallAudioState() { return call_method<"getCallAudioState", jni::ref<android::telecom::CallAudioState>>(); }
	void setMuted(jboolean state) { return call_method<"setMuted", void>(state); }
	void setAudioRoute(jint route) { return call_method<"setAudioRoute", void>(route); }
	void onCallAudioStateChanged(jni::ref<android::telecom::CallAudioState> audioState) { return call_method<"onCallAudioStateChanged", void>(audioState); }
	void onBringToForeground(jboolean showDialpad) { return call_method<"onBringToForeground", void>(showDialpad); }
	void onCallAdded(jni::ref<android::telecom::Call> call) { return call_method<"onCallAdded", void>(call); }
	void onCallRemoved(jni::ref<android::telecom::Call> call) { return call_method<"onCallRemoved", void>(call); }
	void onCanAddCallChanged(jboolean canAddCall) { return call_method<"onCanAddCallChanged", void>(canAddCall); }
	void onSilenceRinger() { return call_method<"onSilenceRinger", void>(); }

protected:

	InCallService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_INCALLSERVICE