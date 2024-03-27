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

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaTimestamp : public jni::object_base<"android/media/MediaTimestamp",
	java::lang::Object>
{
public:

	jlong getAnchorMediaTimeUs() { return call_method<"getAnchorMediaTimeUs", jlong>(); }
	jlong getAnchorSytemNanoTime() { return call_method<"getAnchorSytemNanoTime", jlong>(); }
	jfloat getMediaClockRate() { return call_method<"getMediaClockRate", jfloat>(); }

protected:

	MediaTimestamp(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIATIMESTAMP
