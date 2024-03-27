// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class StreamingService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::StreamingService>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/StreamingService";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/telephony/mbms/StreamingServiceInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::StreamingService : public jni::object_base<"android/telephony/mbms/StreamingService",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jint BROADCAST_METHOD() { return get_static_field<"BROADCAST_METHOD", jint>(); }
	static jint REASON_BY_USER_REQUEST() { return get_static_field<"REASON_BY_USER_REQUEST", jint>(); }
	static jint REASON_END_OF_SESSION() { return get_static_field<"REASON_END_OF_SESSION", jint>(); }
	static jint REASON_FREQUENCY_CONFLICT() { return get_static_field<"REASON_FREQUENCY_CONFLICT", jint>(); }
	static jint REASON_LEFT_MBMS_BROADCAST_AREA() { return get_static_field<"REASON_LEFT_MBMS_BROADCAST_AREA", jint>(); }
	static jint REASON_NONE() { return get_static_field<"REASON_NONE", jint>(); }
	static jint REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE() { return get_static_field<"REASON_NOT_CONNECTED_TO_HOMECARRIER_LTE", jint>(); }
	static jint REASON_OUT_OF_MEMORY() { return get_static_field<"REASON_OUT_OF_MEMORY", jint>(); }
	static jint STATE_STALLED() { return get_static_field<"STATE_STALLED", jint>(); }
	static jint STATE_STARTED() { return get_static_field<"STATE_STARTED", jint>(); }
	static jint STATE_STOPPED() { return get_static_field<"STATE_STOPPED", jint>(); }
	static jint UNICAST_METHOD() { return get_static_field<"UNICAST_METHOD", jint>(); }

	jni::ref<android::net::Uri> getPlaybackUri() { return call_method<"getPlaybackUri", jni::ref<android::net::Uri>>(); }
	jni::ref<android::telephony::mbms::StreamingServiceInfo> getInfo() { return call_method<"getInfo", jni::ref<android::telephony::mbms::StreamingServiceInfo>>(); }
	void close() { return call_method<"close", void>(); }

protected:

	StreamingService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_STREAMINGSERVICE
