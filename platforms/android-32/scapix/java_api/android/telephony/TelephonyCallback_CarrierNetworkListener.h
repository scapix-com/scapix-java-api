// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback_CarrierNetworkListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback_CarrierNetworkListener>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback$CarrierNetworkListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback_CarrierNetworkListener : public jni::object_base<"android/telephony/TelephonyCallback$CarrierNetworkListener",
	java::lang::Object>
{
public:

	void onCarrierNetworkChange(jboolean p1) { return call_method<"onCarrierNetworkChange", void>(p1); }

protected:

	TelephonyCallback_CarrierNetworkListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_CARRIERNETWORKLISTENER