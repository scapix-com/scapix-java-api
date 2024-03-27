// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::hotspot2::pps { class HomeSp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::hotspot2::pps::HomeSp>
{
	static constexpr fixed_string class_name = "android/net/wifi/hotspot2/pps/HomeSp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::hotspot2::pps::HomeSp : public jni::object_base<"android/net/wifi/hotspot2/pps/HomeSp",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::net::wifi::hotspot2::pps::HomeSp> new_object() { return base_::new_object(); }
	static jni::ref<android::net::wifi::hotspot2::pps::HomeSp> new_object(jni::ref<android::net::wifi::hotspot2::pps::HomeSp> source) { return base_::new_object(source); }
	void setFqdn(jni::ref<java::lang::String> fqdn) { return call_method<"setFqdn", void>(fqdn); }
	jni::ref<java::lang::String> getFqdn() { return call_method<"getFqdn", jni::ref<java::lang::String>>(); }
	void setFriendlyName(jni::ref<java::lang::String> friendlyName) { return call_method<"setFriendlyName", void>(friendlyName); }
	jni::ref<java::lang::String> getFriendlyName() { return call_method<"getFriendlyName", jni::ref<java::lang::String>>(); }
	void setRoamingConsortiumOis(jni::ref<jni::array<jlong>> roamingConsortiumOis) { return call_method<"setRoamingConsortiumOis", void>(roamingConsortiumOis); }
	jni::ref<jni::array<jlong>> getRoamingConsortiumOis() { return call_method<"getRoamingConsortiumOis", jni::ref<jni::array<jlong>>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> thatObject) { return call_method<"equals", jboolean>(thatObject); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	HomeSp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_HOTSPOT2_PPS_HOMESP