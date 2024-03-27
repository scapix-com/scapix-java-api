// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkCapabilities>
{
	static constexpr fixed_string class_name = "android/net/NetworkCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkCapabilities : public jni::object_base<"android/net/NetworkCapabilities",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint NET_CAPABILITY_CBS() { return get_static_field<"NET_CAPABILITY_CBS", jint>(); }
	static jint NET_CAPABILITY_DUN() { return get_static_field<"NET_CAPABILITY_DUN", jint>(); }
	static jint NET_CAPABILITY_EIMS() { return get_static_field<"NET_CAPABILITY_EIMS", jint>(); }
	static jint NET_CAPABILITY_FOTA() { return get_static_field<"NET_CAPABILITY_FOTA", jint>(); }
	static jint NET_CAPABILITY_IA() { return get_static_field<"NET_CAPABILITY_IA", jint>(); }
	static jint NET_CAPABILITY_IMS() { return get_static_field<"NET_CAPABILITY_IMS", jint>(); }
	static jint NET_CAPABILITY_INTERNET() { return get_static_field<"NET_CAPABILITY_INTERNET", jint>(); }
	static jint NET_CAPABILITY_MMS() { return get_static_field<"NET_CAPABILITY_MMS", jint>(); }
	static jint NET_CAPABILITY_NOT_METERED() { return get_static_field<"NET_CAPABILITY_NOT_METERED", jint>(); }
	static jint NET_CAPABILITY_NOT_RESTRICTED() { return get_static_field<"NET_CAPABILITY_NOT_RESTRICTED", jint>(); }
	static jint NET_CAPABILITY_NOT_VPN() { return get_static_field<"NET_CAPABILITY_NOT_VPN", jint>(); }
	static jint NET_CAPABILITY_RCS() { return get_static_field<"NET_CAPABILITY_RCS", jint>(); }
	static jint NET_CAPABILITY_SUPL() { return get_static_field<"NET_CAPABILITY_SUPL", jint>(); }
	static jint NET_CAPABILITY_TRUSTED() { return get_static_field<"NET_CAPABILITY_TRUSTED", jint>(); }
	static jint NET_CAPABILITY_WIFI_P2P() { return get_static_field<"NET_CAPABILITY_WIFI_P2P", jint>(); }
	static jint NET_CAPABILITY_XCAP() { return get_static_field<"NET_CAPABILITY_XCAP", jint>(); }
	static jint TRANSPORT_BLUETOOTH() { return get_static_field<"TRANSPORT_BLUETOOTH", jint>(); }
	static jint TRANSPORT_CELLULAR() { return get_static_field<"TRANSPORT_CELLULAR", jint>(); }
	static jint TRANSPORT_ETHERNET() { return get_static_field<"TRANSPORT_ETHERNET", jint>(); }
	static jint TRANSPORT_VPN() { return get_static_field<"TRANSPORT_VPN", jint>(); }
	static jint TRANSPORT_WIFI() { return get_static_field<"TRANSPORT_WIFI", jint>(); }

	static jni::ref<android::net::NetworkCapabilities> new_object(jni::ref<android::net::NetworkCapabilities> nc) { return base_::new_object(nc); }
	jboolean hasCapability(jint capability) { return call_method<"hasCapability", jboolean>(capability); }
	jboolean hasTransport(jint transportType) { return call_method<"hasTransport", jboolean>(transportType); }
	jint getLinkUpstreamBandwidthKbps() { return call_method<"getLinkUpstreamBandwidthKbps", jint>(); }
	jint getLinkDownstreamBandwidthKbps() { return call_method<"getLinkDownstreamBandwidthKbps", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NetworkCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKCAPABILITIES
