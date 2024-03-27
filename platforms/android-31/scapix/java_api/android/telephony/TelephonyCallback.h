// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyCallback>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/TelephonyCallback_UserMobileDataStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_SignalStrengthsListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_ServiceStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_RegistrationFailedListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_PreciseDataConnectionStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_PhysicalChannelConfigListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_MessageWaitingIndicatorListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_ImsCallDisconnectCauseListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_EmergencyNumberListListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_DisplayInfoListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_DataConnectionStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_DataActivityListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_DataActivationStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CellLocationListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CellInfoListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CarrierNetworkListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CallStateListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CallForwardingIndicatorListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_CallDisconnectCauseListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_BarringInfoListener.h>
#include <scapix/java_api/android/telephony/TelephonyCallback_ActiveDataSubscriptionIdListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyCallback : public jni::object_base<"android/telephony/TelephonyCallback",
	java::lang::Object>
{
public:

	using UserMobileDataStateListener = TelephonyCallback_UserMobileDataStateListener;
	using SignalStrengthsListener = TelephonyCallback_SignalStrengthsListener;
	using ServiceStateListener = TelephonyCallback_ServiceStateListener;
	using RegistrationFailedListener = TelephonyCallback_RegistrationFailedListener;
	using PreciseDataConnectionStateListener = TelephonyCallback_PreciseDataConnectionStateListener;
	using PhysicalChannelConfigListener = TelephonyCallback_PhysicalChannelConfigListener;
	using MessageWaitingIndicatorListener = TelephonyCallback_MessageWaitingIndicatorListener;
	using ImsCallDisconnectCauseListener = TelephonyCallback_ImsCallDisconnectCauseListener;
	using EmergencyNumberListListener = TelephonyCallback_EmergencyNumberListListener;
	using DisplayInfoListener = TelephonyCallback_DisplayInfoListener;
	using DataConnectionStateListener = TelephonyCallback_DataConnectionStateListener;
	using DataActivityListener = TelephonyCallback_DataActivityListener;
	using DataActivationStateListener = TelephonyCallback_DataActivationStateListener;
	using CellLocationListener = TelephonyCallback_CellLocationListener;
	using CellInfoListener = TelephonyCallback_CellInfoListener;
	using CarrierNetworkListener = TelephonyCallback_CarrierNetworkListener;
	using CallStateListener = TelephonyCallback_CallStateListener;
	using CallForwardingIndicatorListener = TelephonyCallback_CallForwardingIndicatorListener;
	using CallDisconnectCauseListener = TelephonyCallback_CallDisconnectCauseListener;
	using BarringInfoListener = TelephonyCallback_BarringInfoListener;
	using ActiveDataSubscriptionIdListener = TelephonyCallback_ActiveDataSubscriptionIdListener;

	static jni::ref<android::telephony::TelephonyCallback> new_object() { return base_::new_object(); }

protected:

	TelephonyCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYCALLBACK