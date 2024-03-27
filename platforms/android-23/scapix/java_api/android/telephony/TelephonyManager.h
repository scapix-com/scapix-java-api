// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class TelephonyManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::TelephonyManager>
{
	static constexpr fixed_string class_name = "android/telephony/TelephonyManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/CellLocation.h>
#include <scapix/java_api/android/telephony/IccOpenLogicalChannelResponse.h>
#include <scapix/java_api/android/telephony/PhoneStateListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::TelephonyManager : public jni::object_base<"android/telephony/TelephonyManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_CONFIGURE_VOICEMAIL() { return get_static_field<"ACTION_CONFIGURE_VOICEMAIL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PHONE_STATE_CHANGED() { return get_static_field<"ACTION_PHONE_STATE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_RESPOND_VIA_MESSAGE() { return get_static_field<"ACTION_RESPOND_VIA_MESSAGE", jni::ref<java::lang::String>>(); }
	static jint CALL_STATE_IDLE() { return get_static_field<"CALL_STATE_IDLE", jint>(); }
	static jint CALL_STATE_OFFHOOK() { return get_static_field<"CALL_STATE_OFFHOOK", jint>(); }
	static jint CALL_STATE_RINGING() { return get_static_field<"CALL_STATE_RINGING", jint>(); }
	static jint DATA_ACTIVITY_DORMANT() { return get_static_field<"DATA_ACTIVITY_DORMANT", jint>(); }
	static jint DATA_ACTIVITY_IN() { return get_static_field<"DATA_ACTIVITY_IN", jint>(); }
	static jint DATA_ACTIVITY_INOUT() { return get_static_field<"DATA_ACTIVITY_INOUT", jint>(); }
	static jint DATA_ACTIVITY_NONE() { return get_static_field<"DATA_ACTIVITY_NONE", jint>(); }
	static jint DATA_ACTIVITY_OUT() { return get_static_field<"DATA_ACTIVITY_OUT", jint>(); }
	static jint DATA_CONNECTED() { return get_static_field<"DATA_CONNECTED", jint>(); }
	static jint DATA_CONNECTING() { return get_static_field<"DATA_CONNECTING", jint>(); }
	static jint DATA_DISCONNECTED() { return get_static_field<"DATA_DISCONNECTED", jint>(); }
	static jint DATA_SUSPENDED() { return get_static_field<"DATA_SUSPENDED", jint>(); }
	static jni::ref<java::lang::String> EXTRA_INCOMING_NUMBER() { return get_static_field<"EXTRA_INCOMING_NUMBER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE() { return get_static_field<"EXTRA_STATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE_IDLE() { return get_static_field<"EXTRA_STATE_IDLE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE_OFFHOOK() { return get_static_field<"EXTRA_STATE_OFFHOOK", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_STATE_RINGING() { return get_static_field<"EXTRA_STATE_RINGING", jni::ref<java::lang::String>>(); }
	static jint NETWORK_TYPE_1xRTT() { return get_static_field<"NETWORK_TYPE_1xRTT", jint>(); }
	static jint NETWORK_TYPE_CDMA() { return get_static_field<"NETWORK_TYPE_CDMA", jint>(); }
	static jint NETWORK_TYPE_EDGE() { return get_static_field<"NETWORK_TYPE_EDGE", jint>(); }
	static jint NETWORK_TYPE_EHRPD() { return get_static_field<"NETWORK_TYPE_EHRPD", jint>(); }
	static jint NETWORK_TYPE_EVDO_0() { return get_static_field<"NETWORK_TYPE_EVDO_0", jint>(); }
	static jint NETWORK_TYPE_EVDO_A() { return get_static_field<"NETWORK_TYPE_EVDO_A", jint>(); }
	static jint NETWORK_TYPE_EVDO_B() { return get_static_field<"NETWORK_TYPE_EVDO_B", jint>(); }
	static jint NETWORK_TYPE_GPRS() { return get_static_field<"NETWORK_TYPE_GPRS", jint>(); }
	static jint NETWORK_TYPE_HSDPA() { return get_static_field<"NETWORK_TYPE_HSDPA", jint>(); }
	static jint NETWORK_TYPE_HSPA() { return get_static_field<"NETWORK_TYPE_HSPA", jint>(); }
	static jint NETWORK_TYPE_HSPAP() { return get_static_field<"NETWORK_TYPE_HSPAP", jint>(); }
	static jint NETWORK_TYPE_HSUPA() { return get_static_field<"NETWORK_TYPE_HSUPA", jint>(); }
	static jint NETWORK_TYPE_IDEN() { return get_static_field<"NETWORK_TYPE_IDEN", jint>(); }
	static jint NETWORK_TYPE_LTE() { return get_static_field<"NETWORK_TYPE_LTE", jint>(); }
	static jint NETWORK_TYPE_UMTS() { return get_static_field<"NETWORK_TYPE_UMTS", jint>(); }
	static jint NETWORK_TYPE_UNKNOWN() { return get_static_field<"NETWORK_TYPE_UNKNOWN", jint>(); }
	static jint PHONE_TYPE_CDMA() { return get_static_field<"PHONE_TYPE_CDMA", jint>(); }
	static jint PHONE_TYPE_GSM() { return get_static_field<"PHONE_TYPE_GSM", jint>(); }
	static jint PHONE_TYPE_NONE() { return get_static_field<"PHONE_TYPE_NONE", jint>(); }
	static jint PHONE_TYPE_SIP() { return get_static_field<"PHONE_TYPE_SIP", jint>(); }
	static jint SIM_STATE_ABSENT() { return get_static_field<"SIM_STATE_ABSENT", jint>(); }
	static jint SIM_STATE_NETWORK_LOCKED() { return get_static_field<"SIM_STATE_NETWORK_LOCKED", jint>(); }
	static jint SIM_STATE_PIN_REQUIRED() { return get_static_field<"SIM_STATE_PIN_REQUIRED", jint>(); }
	static jint SIM_STATE_PUK_REQUIRED() { return get_static_field<"SIM_STATE_PUK_REQUIRED", jint>(); }
	static jint SIM_STATE_READY() { return get_static_field<"SIM_STATE_READY", jint>(); }
	static jint SIM_STATE_UNKNOWN() { return get_static_field<"SIM_STATE_UNKNOWN", jint>(); }
	static jni::ref<java::lang::String> VVM_TYPE_CVVM() { return get_static_field<"VVM_TYPE_CVVM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VVM_TYPE_OMTP() { return get_static_field<"VVM_TYPE_OMTP", jni::ref<java::lang::String>>(); }

	jint getPhoneCount() { return call_method<"getPhoneCount", jint>(); }
	jni::ref<java::lang::String> getDeviceSoftwareVersion() { return call_method<"getDeviceSoftwareVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDeviceId() { return call_method<"getDeviceId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDeviceId(jint slotId) { return call_method<"getDeviceId", jni::ref<java::lang::String>>(slotId); }
	jni::ref<android::telephony::CellLocation> getCellLocation() { return call_method<"getCellLocation", jni::ref<android::telephony::CellLocation>>(); }
	jni::ref<java::util::List> getNeighboringCellInfo() { return call_method<"getNeighboringCellInfo", jni::ref<java::util::List>>(); }
	jint getPhoneType() { return call_method<"getPhoneType", jint>(); }
	jni::ref<java::lang::String> getNetworkOperatorName() { return call_method<"getNetworkOperatorName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNetworkOperator() { return call_method<"getNetworkOperator", jni::ref<java::lang::String>>(); }
	jboolean isNetworkRoaming() { return call_method<"isNetworkRoaming", jboolean>(); }
	jni::ref<java::lang::String> getNetworkCountryIso() { return call_method<"getNetworkCountryIso", jni::ref<java::lang::String>>(); }
	jint getNetworkType() { return call_method<"getNetworkType", jint>(); }
	jboolean hasIccCard() { return call_method<"hasIccCard", jboolean>(); }
	jint getSimState() { return call_method<"getSimState", jint>(); }
	jni::ref<java::lang::String> getSimOperator() { return call_method<"getSimOperator", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSimOperatorName() { return call_method<"getSimOperatorName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSimCountryIso() { return call_method<"getSimCountryIso", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSimSerialNumber() { return call_method<"getSimSerialNumber", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSubscriberId() { return call_method<"getSubscriberId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getGroupIdLevel1() { return call_method<"getGroupIdLevel1", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLine1Number() { return call_method<"getLine1Number", jni::ref<java::lang::String>>(); }
	jboolean setLine1NumberForDisplay(jni::ref<java::lang::String> alphaTag, jni::ref<java::lang::String> number) { return call_method<"setLine1NumberForDisplay", jboolean>(alphaTag, number); }
	jni::ref<java::lang::String> getVoiceMailNumber() { return call_method<"getVoiceMailNumber", jni::ref<java::lang::String>>(); }
	jboolean setVoiceMailNumber(jni::ref<java::lang::String> alphaTag, jni::ref<java::lang::String> number) { return call_method<"setVoiceMailNumber", jboolean>(alphaTag, number); }
	jni::ref<java::lang::String> getVoiceMailAlphaTag() { return call_method<"getVoiceMailAlphaTag", jni::ref<java::lang::String>>(); }
	jint getCallState() { return call_method<"getCallState", jint>(); }
	jint getDataActivity() { return call_method<"getDataActivity", jint>(); }
	jint getDataState() { return call_method<"getDataState", jint>(); }
	void listen(jni::ref<android::telephony::PhoneStateListener> listener, jint events) { return call_method<"listen", void>(listener, events); }
	jboolean isVoiceCapable() { return call_method<"isVoiceCapable", jboolean>(); }
	jboolean isSmsCapable() { return call_method<"isSmsCapable", jboolean>(); }
	jni::ref<java::util::List> getAllCellInfo() { return call_method<"getAllCellInfo", jni::ref<java::util::List>>(); }
	jni::ref<java::lang::String> getMmsUserAgent() { return call_method<"getMmsUserAgent", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getMmsUAProfUrl() { return call_method<"getMmsUAProfUrl", jni::ref<java::lang::String>>(); }
	jni::ref<android::telephony::IccOpenLogicalChannelResponse> iccOpenLogicalChannel(jni::ref<java::lang::String> AID) { return call_method<"iccOpenLogicalChannel", jni::ref<android::telephony::IccOpenLogicalChannelResponse>>(AID); }
	jboolean iccCloseLogicalChannel(jint channel) { return call_method<"iccCloseLogicalChannel", jboolean>(channel); }
	jni::ref<java::lang::String> iccTransmitApduLogicalChannel(jint channel, jint cla, jint instruction, jint p1, jint p2, jint p3, jni::ref<java::lang::String> data) { return call_method<"iccTransmitApduLogicalChannel", jni::ref<java::lang::String>>(channel, cla, instruction, p1, p2, p3, data); }
	jni::ref<java::lang::String> iccTransmitApduBasicChannel(jint cla, jint instruction, jint p1, jint p2, jint p3, jni::ref<java::lang::String> data) { return call_method<"iccTransmitApduBasicChannel", jni::ref<java::lang::String>>(cla, instruction, p1, p2, p3, data); }
	jni::ref<jni::array<jbyte>> iccExchangeSimIO(jint fileID, jint command, jint p1, jint p2, jint p3, jni::ref<java::lang::String> filePath) { return call_method<"iccExchangeSimIO", jni::ref<jni::array<jbyte>>>(fileID, command, p1, p2, p3, filePath); }
	jni::ref<java::lang::String> sendEnvelopeWithStatus(jni::ref<java::lang::String> content) { return call_method<"sendEnvelopeWithStatus", jni::ref<java::lang::String>>(content); }
	jboolean setPreferredNetworkTypeToGlobal() { return call_method<"setPreferredNetworkTypeToGlobal", jboolean>(); }
	jboolean hasCarrierPrivileges() { return call_method<"hasCarrierPrivileges", jboolean>(); }
	jboolean setOperatorBrandOverride(jni::ref<java::lang::String> brand) { return call_method<"setOperatorBrandOverride", jboolean>(brand); }
	jboolean canChangeDtmfToneLength() { return call_method<"canChangeDtmfToneLength", jboolean>(); }
	jboolean isWorldPhone() { return call_method<"isWorldPhone", jboolean>(); }
	jboolean isTtyModeSupported() { return call_method<"isTtyModeSupported", jboolean>(); }
	jboolean isHearingAidCompatibilitySupported() { return call_method<"isHearingAidCompatibilitySupported", jboolean>(); }

protected:

	TelephonyManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_TELEPHONYMANAGER
