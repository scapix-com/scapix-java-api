// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaTimestamp; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaTimestamp>
{
	static constexpr fixed_string class_name = "android/media/MediaTimestamp";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaTimestamp : public jni::object_base<"android/media/MediaTimestamp",
	java::lang::Object>
{
public:

	static jni::ref<android::media::MediaTimestamp> TIMESTAMP_UNKNOWN() { return get_static_field<"TIMESTAMP_UNKNOWN", jni::ref<android::media::MediaTimestamp>>(); }

	static jni::ref<android::media::MediaTimestamp> new_object(jlong mediaTimeUs, jlong p2, jfloat nanoTimeNs) { return base_::new_object(mediaTimeUs, p2, nanoTimeNs); }
	jlong getAnchorMediaTimeUs() { return call_method<"getAnchorMediaTimeUs", jlong>(); }
	jlong getAnchorSytemNanoTime() { return call_method<"getAnchorSytemNanoTime", jlong>(); }
	jlong getAnchorSystemNanoTime() { return call_method<"getAnchorSystemNanoTime", jlong>(); }
	jfloat getMediaClockRate() { return call_method<"getMediaClockRate", jfloat>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	MediaTimestamp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP