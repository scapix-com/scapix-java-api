// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::ims { class ImsStateCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::ims::ImsStateCallback>
{
	static constexpr fixed_string class_name = "android/telephony/ims/ImsStateCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::ims::ImsStateCallback : public jni::object_base<"android/telephony/ims/ImsStateCallback",
	java::lang::Object>
{
public:

	static jint REASON_IMS_SERVICE_DISCONNECTED() { return get_static_field<"REASON_IMS_SERVICE_DISCONNECTED", jint>(); }
	static jint REASON_IMS_SERVICE_NOT_READY() { return get_static_field<"REASON_IMS_SERVICE_NOT_READY", jint>(); }
	static jint REASON_NO_IMS_SERVICE_CONFIGURED() { return get_static_field<"REASON_NO_IMS_SERVICE_CONFIGURED", jint>(); }
	static jint REASON_SUBSCRIPTION_INACTIVE() { return get_static_field<"REASON_SUBSCRIPTION_INACTIVE", jint>(); }
	static jint REASON_UNKNOWN_PERMANENT_ERROR() { return get_static_field<"REASON_UNKNOWN_PERMANENT_ERROR", jint>(); }
	static jint REASON_UNKNOWN_TEMPORARY_ERROR() { return get_static_field<"REASON_UNKNOWN_TEMPORARY_ERROR", jint>(); }

	static jni::ref<android::telephony::ims::ImsStateCallback> new_object() { return base_::new_object(); }
	void onUnavailable(jint p1) { return call_method<"onUnavailable", void>(p1); }
	void onAvailable() { return call_method<"onAvailable", void>(); }
	void onError() { return call_method<"onError", void>(); }

protected:

	ImsStateCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_IMS_IMSSTATECALLBACK
