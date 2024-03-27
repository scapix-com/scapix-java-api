// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback_ServiceStateListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback_ServiceStateListener>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback$ServiceStateListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/ServiceState.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback_ServiceStateListener : public jni::object_base<"android/telephony/TelephonyCallback$ServiceStateListener",
	java::lang::Object>
{
public:

	void onServiceStateChanged(jni::ref<android::telephony::ServiceState> p1) { return call_method<"onServiceStateChanged", void>(p1); }

protected:

	TelephonyCallback_ServiceStateListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_SERVICESTATELISTENER