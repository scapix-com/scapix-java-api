// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/telephony/TelephonyManager_NetworkSlicingException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyManager_TimeoutException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyManager_TimeoutException>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyManager$TimeoutException";
	using base_classes = std::tuple<scapix::java_api::android::telephony::TelephonyManager_NetworkSlicingException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyManager_TimeoutException : public jni::object_base<"android/telephony/TelephonyManager$TimeoutException",
	android::telephony::TelephonyManager_NetworkSlicingException>
{
public:


protected:

	TelephonyManager_TimeoutException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_TIMEOUTEXCEPTION
