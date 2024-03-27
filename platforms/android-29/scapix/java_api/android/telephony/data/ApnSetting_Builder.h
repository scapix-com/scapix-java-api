// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::data { class ApnSetting_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::data::ApnSetting_Builder>
{
	static constexpr fixed_string class_name = "android/telephony/data/ApnSetting$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/telephony/data/ApnSetting.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::data::ApnSetting_Builder : public jni::object_base<"android/telephony/data/ApnSetting$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::data::ApnSetting_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setEntryName(jni::ref<java::lang::String> entryName) { return call_method<"setEntryName", jni::ref<android::telephony::data::ApnSetting_Builder>>(entryName); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setApnName(jni::ref<java::lang::String> apnName) { return call_method<"setApnName", jni::ref<android::telephony::data::ApnSetting_Builder>>(apnName); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setProxyAddress(jni::ref<java::net::InetAddress> proxy) { return call_method<"setProxyAddress", jni::ref<android::telephony::data::ApnSetting_Builder>>(proxy); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setProxyAddress(jni::ref<java::lang::String> proxy) { return call_method<"setProxyAddress", jni::ref<android::telephony::data::ApnSetting_Builder>>(proxy); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setProxyPort(jint port) { return call_method<"setProxyPort", jni::ref<android::telephony::data::ApnSetting_Builder>>(port); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setMmsc(jni::ref<android::net::Uri> mmsc) { return call_method<"setMmsc", jni::ref<android::telephony::data::ApnSetting_Builder>>(mmsc); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setMmsProxyAddress(jni::ref<java::net::InetAddress> mmsProxy) { return call_method<"setMmsProxyAddress", jni::ref<android::telephony::data::ApnSetting_Builder>>(mmsProxy); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setMmsProxyAddress(jni::ref<java::lang::String> mmsProxy) { return call_method<"setMmsProxyAddress", jni::ref<android::telephony::data::ApnSetting_Builder>>(mmsProxy); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setMmsProxyPort(jint mmsPort) { return call_method<"setMmsProxyPort", jni::ref<android::telephony::data::ApnSetting_Builder>>(mmsPort); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setUser(jni::ref<java::lang::String> user) { return call_method<"setUser", jni::ref<android::telephony::data::ApnSetting_Builder>>(user); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setPassword(jni::ref<java::lang::String> password) { return call_method<"setPassword", jni::ref<android::telephony::data::ApnSetting_Builder>>(password); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setAuthType(jint authType) { return call_method<"setAuthType", jni::ref<android::telephony::data::ApnSetting_Builder>>(authType); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setApnTypeBitmask(jint apnTypeBitmask) { return call_method<"setApnTypeBitmask", jni::ref<android::telephony::data::ApnSetting_Builder>>(apnTypeBitmask); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setOperatorNumeric(jni::ref<java::lang::String> operatorNumeric) { return call_method<"setOperatorNumeric", jni::ref<android::telephony::data::ApnSetting_Builder>>(operatorNumeric); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setProtocol(jint protocol) { return call_method<"setProtocol", jni::ref<android::telephony::data::ApnSetting_Builder>>(protocol); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setRoamingProtocol(jint roamingProtocol) { return call_method<"setRoamingProtocol", jni::ref<android::telephony::data::ApnSetting_Builder>>(roamingProtocol); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setCarrierEnabled(jboolean carrierEnabled) { return call_method<"setCarrierEnabled", jni::ref<android::telephony::data::ApnSetting_Builder>>(carrierEnabled); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setNetworkTypeBitmask(jint networkTypeBitmask) { return call_method<"setNetworkTypeBitmask", jni::ref<android::telephony::data::ApnSetting_Builder>>(networkTypeBitmask); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setMvnoType(jint mvnoType) { return call_method<"setMvnoType", jni::ref<android::telephony::data::ApnSetting_Builder>>(mvnoType); }
	jni::ref<android::telephony::data::ApnSetting_Builder> setCarrierId(jint carrierId) { return call_method<"setCarrierId", jni::ref<android::telephony::data::ApnSetting_Builder>>(carrierId); }
	jni::ref<android::telephony::data::ApnSetting> build() { return call_method<"build", jni::ref<android::telephony::data::ApnSetting>>(); }

protected:

	ApnSetting_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_DATA_APNSETTING_BUILDER