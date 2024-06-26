// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback_CallStateListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback_CallStateListener>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback$CallStateListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback_CallStateListener : public jni::object_base<"android/telephony/TelephonyCallback$CallStateListener",
	java::lang::Object>
{
public:

	void onCallStateChanged(jint p1) { return call_method<"onCallStateChanged", void>(p1); }

protected:

	TelephonyCallback_CallStateListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CALLSTATELISTENER
