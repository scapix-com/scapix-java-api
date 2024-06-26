// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p::nsd { class WifiP2pServiceInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::nsd::WifiP2pServiceInfo>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/nsd/WifiP2pServiceInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::nsd::WifiP2pServiceInfo : public jni::object_base<"android/net/wifi/p2p/nsd/WifiP2pServiceInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint SERVICE_TYPE_ALL() { return get_static_field<"SERVICE_TYPE_ALL", jint>(); }
	static jint SERVICE_TYPE_BONJOUR() { return get_static_field<"SERVICE_TYPE_BONJOUR", jint>(); }
	static jint SERVICE_TYPE_UPNP() { return get_static_field<"SERVICE_TYPE_UPNP", jint>(); }
	static jint SERVICE_TYPE_VENDOR_SPECIFIC() { return get_static_field<"SERVICE_TYPE_VENDOR_SPECIFIC", jint>(); }

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	WifiP2pServiceInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEINFO
