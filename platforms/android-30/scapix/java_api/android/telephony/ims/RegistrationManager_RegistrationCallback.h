// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class RegistrationManager_RegistrationCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::RegistrationManager_RegistrationCallback>
{
	static constexpr fixed_string class_name = "android/telephony/ims/RegistrationManager$RegistrationCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ims/ImsReasonInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::RegistrationManager_RegistrationCallback : public jni::object_base<"android/telephony/ims/RegistrationManager$RegistrationCallback",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::ims::RegistrationManager_RegistrationCallback> new_object() { return base_::new_object(); }
	void onRegistered(jint imsTransportType) { return call_method<"onRegistered", void>(imsTransportType); }
	void onRegistering(jint imsTransportType) { return call_method<"onRegistering", void>(imsTransportType); }
	void onUnregistered(jni::ref<android::telephony::ims::ImsReasonInfo> info) { return call_method<"onUnregistered", void>(info); }
	void onTechnologyChangeFailed(jint imsTransportType, jni::ref<android::telephony::ims::ImsReasonInfo> info) { return call_method<"onTechnologyChangeFailed", void>(imsTransportType, info); }

protected:

	RegistrationManager_RegistrationCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_REGISTRATIONMANAGER_REGISTRATIONCALLBACK
