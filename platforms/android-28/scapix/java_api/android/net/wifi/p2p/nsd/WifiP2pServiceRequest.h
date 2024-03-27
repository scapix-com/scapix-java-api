// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::p2p::nsd { class WifiP2pServiceRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::p2p::nsd::WifiP2pServiceRequest>
{
	static constexpr fixed_string class_name = "android/net/wifi/p2p/nsd/WifiP2pServiceRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::p2p::nsd::WifiP2pServiceRequest : public jni::object_base<"android/net/wifi/p2p/nsd/WifiP2pServiceRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> newInstance(jint protocolType, jni::ref<java::lang::String> queryData) { return call_static_method<"newInstance", jni::ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest>>(protocolType, queryData); }
	static jni::ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest> newInstance(jint protocolType) { return call_static_method<"newInstance", jni::ref<android::net::wifi::p2p::nsd::WifiP2pServiceRequest>>(protocolType); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	WifiP2pServiceRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_P2P_NSD_WIFIP2PSERVICEREQUEST