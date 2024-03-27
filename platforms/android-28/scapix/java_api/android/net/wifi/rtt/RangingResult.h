// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi::rtt { class RangingResult; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::rtt::RangingResult>
{
	static constexpr fixed_string class_name = "android/net/wifi/rtt/RangingResult";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/MacAddress.h>
#include <scapix/java_api/android/net/wifi/aware/PeerHandle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::rtt::RangingResult : public jni::object_base<"android/net/wifi/rtt/RangingResult",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STATUS_FAIL() { return get_static_field<"STATUS_FAIL", jint>(); }
	static jint STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC() { return get_static_field<"STATUS_RESPONDER_DOES_NOT_SUPPORT_IEEE80211MC", jint>(); }
	static jint STATUS_SUCCESS() { return get_static_field<"STATUS_SUCCESS", jint>(); }

	jint getStatus() { return call_method<"getStatus", jint>(); }
	jni::ref<android::net::MacAddress> getMacAddress() { return call_method<"getMacAddress", jni::ref<android::net::MacAddress>>(); }
	jni::ref<android::net::wifi::aware::PeerHandle> getPeerHandle() { return call_method<"getPeerHandle", jni::ref<android::net::wifi::aware::PeerHandle>>(); }
	jint getDistanceMm() { return call_method<"getDistanceMm", jint>(); }
	jint getDistanceStdDevMm() { return call_method<"getDistanceStdDevMm", jint>(); }
	jint getRssi() { return call_method<"getRssi", jint>(); }
	jint getNumAttemptedMeasurements() { return call_method<"getNumAttemptedMeasurements", jint>(); }
	jint getNumSuccessfulMeasurements() { return call_method<"getNumSuccessfulMeasurements", jint>(); }
	jlong getRangingTimestampMillis() { return call_method<"getRangingTimestampMillis", jlong>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	RangingResult(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_RTT_RANGINGRESULT
