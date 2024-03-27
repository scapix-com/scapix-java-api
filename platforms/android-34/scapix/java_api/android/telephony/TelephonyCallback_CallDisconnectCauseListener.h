// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback_CallDisconnectCauseListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback_CallDisconnectCauseListener>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback$CallDisconnectCauseListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback_CallDisconnectCauseListener : public jni::object_base<"android/telephony/TelephonyCallback$CallDisconnectCauseListener",
	java::lang::Object>
{
public:

	void onCallDisconnectCauseChanged(jint p1, jint p2) { return call_method<"onCallDisconnectCauseChanged", void>(p1, p2); }

protected:

	TelephonyCallback_CallDisconnectCauseListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLDISCONNECTCAUSELISTENER