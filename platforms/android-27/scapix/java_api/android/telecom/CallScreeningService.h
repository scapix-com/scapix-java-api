// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class CallScreeningService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::CallScreeningService>
{
	static constexpr fixed_string class_name = "android/telecom/CallScreeningService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/telecom/Call_Details.h>
#include <scapix/java_api/android/telecom/CallScreeningService_CallResponse.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::CallScreeningService : public jni::object_base<"android/telecom/CallScreeningService",
	android::app::Service>
{
public:

	using CallResponse = CallScreeningService_CallResponse;

	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }

	static jni::ref<android::telecom::CallScreeningService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	jboolean onUnbind(jni::ref<android::content::Intent> intent) { return call_method<"onUnbind", jboolean>(intent); }
	void onScreenCall(jni::ref<android::telecom::Call_Details> p1) { return call_method<"onScreenCall", void>(p1); }
	void respondToCall(jni::ref<android::telecom::Call_Details> callDetails, jni::ref<android::telecom::CallScreeningService_CallResponse> response) { return call_method<"respondToCall", void>(callDetails, response); }

protected:

	CallScreeningService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CALLSCREENINGSERVICE
