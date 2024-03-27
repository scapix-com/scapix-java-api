// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::hotspot2 { class PasspointConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::hotspot2::PasspointConfiguration>
{
	static constexpr fixed_string class_name = "android/net/wifi/hotspot2/PasspointConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/wifi/hotspot2/pps/Credential.h>
#include <scapix/java_api/android/net/wifi/hotspot2/pps/HomeSp.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::hotspot2::PasspointConfiguration : public jni::object_base<"android/net/wifi/hotspot2/PasspointConfiguration",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> new_object() { return base_::new_object(); }
	static jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> new_object(jni::ref<android::net::wifi::hotspot2::PasspointConfiguration> source) { return base_::new_object(source); }
	void setHomeSp(jni::ref<android::net::wifi::hotspot2::pps::HomeSp> homeSp) { return call_method<"setHomeSp", void>(homeSp); }
	jni::ref<android::net::wifi::hotspot2::pps::HomeSp> getHomeSp() { return call_method<"getHomeSp", jni::ref<android::net::wifi::hotspot2::pps::HomeSp>>(); }
	void setCredential(jni::ref<android::net::wifi::hotspot2::pps::Credential> credential) { return call_method<"setCredential", void>(credential); }
	jni::ref<android::net::wifi::hotspot2::pps::Credential> getCredential() { return call_method<"getCredential", jni::ref<android::net::wifi::hotspot2::pps::Credential>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> thatObject) { return call_method<"equals", jboolean>(thatObject); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PasspointConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PASSPOINTCONFIGURATION
