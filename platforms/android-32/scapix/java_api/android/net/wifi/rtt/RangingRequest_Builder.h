// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::rtt { class RangingRequest_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::rtt::RangingRequest_Builder>
{
	static constexpr fixed_string class_name = "android/net/wifi/rtt/RangingRequest$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/wifi/ScanResult.h>
#include <scapix/java_api/android/net/wifi/aware/PeerHandle.h>
#include <scapix/java_api/android/net/wifi/rtt/RangingRequest.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::rtt::RangingRequest_Builder : public jni::object_base<"android/net/wifi/rtt/RangingRequest$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::net::wifi::rtt::RangingRequest_Builder> new_object() { return base_::new_object(); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> setRttBurstSize(jint rttBurstSize) { return call_method<"setRttBurstSize", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(rttBurstSize); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addAccessPoint(jni::ref<android::net::wifi::ScanResult> apInfo) { return call_method<"addAccessPoint", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(apInfo); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addAccessPoints(jni::ref<java::util::List> apInfos) { return call_method<"addAccessPoints", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(apInfos); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addNon80211mcCapableAccessPoint(jni::ref<android::net::wifi::ScanResult> apInfo) { return call_method<"addNon80211mcCapableAccessPoint", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(apInfo); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addNon80211mcCapableAccessPoints(jni::ref<java::util::List> apInfos) { return call_method<"addNon80211mcCapableAccessPoints", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(apInfos); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addWifiAwarePeer(jni::ref<android::net::MacAddress> peerMacAddress) { return call_method<"addWifiAwarePeer", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(peerMacAddress); }
	jni::ref<android::net::wifi::rtt::RangingRequest_Builder> addWifiAwarePeer(jni::ref<android::net::wifi::aware::PeerHandle> peerHandle) { return call_method<"addWifiAwarePeer", jni::ref<android::net::wifi::rtt::RangingRequest_Builder>>(peerHandle); }
	jni::ref<android::net::wifi::rtt::RangingRequest> build() { return call_method<"build", jni::ref<android::net::wifi::rtt::RangingRequest>>(); }

protected:

	RangingRequest_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGREQUEST_BUILDER
