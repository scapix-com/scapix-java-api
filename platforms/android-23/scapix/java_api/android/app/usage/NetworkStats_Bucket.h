// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::usage { class NetworkStats_Bucket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::usage::NetworkStats_Bucket>
{
	static constexpr fixed_string class_name = "android/app/usage/NetworkStats$Bucket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET)
#define SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::usage::NetworkStats_Bucket : public jni::object_base<"android/app/usage/NetworkStats$Bucket",
	java::lang::Object>
{
public:

	static jint STATE_ALL() { return get_static_field<"STATE_ALL", jint>(); }
	static jint STATE_DEFAULT() { return get_static_field<"STATE_DEFAULT", jint>(); }
	static jint STATE_FOREGROUND() { return get_static_field<"STATE_FOREGROUND", jint>(); }
	static jint UID_ALL() { return get_static_field<"UID_ALL", jint>(); }
	static jint UID_REMOVED() { return get_static_field<"UID_REMOVED", jint>(); }
	static jint UID_TETHERING() { return get_static_field<"UID_TETHERING", jint>(); }

	static jni::ref<android::app::usage::NetworkStats_Bucket> new_object() { return base_::new_object(); }
	jint getUid() { return call_method<"getUid", jint>(); }
	jint getState() { return call_method<"getState", jint>(); }
	jlong getStartTimeStamp() { return call_method<"getStartTimeStamp", jlong>(); }
	jlong getEndTimeStamp() { return call_method<"getEndTimeStamp", jlong>(); }
	jlong getRxBytes() { return call_method<"getRxBytes", jlong>(); }
	jlong getTxBytes() { return call_method<"getTxBytes", jlong>(); }
	jlong getRxPackets() { return call_method<"getRxPackets", jlong>(); }
	jlong getTxPackets() { return call_method<"getTxPackets", jlong>(); }

protected:

	NetworkStats_Bucket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_USAGE_NETWORKSTATS_BUCKET
