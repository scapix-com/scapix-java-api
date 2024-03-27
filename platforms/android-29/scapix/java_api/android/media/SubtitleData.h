// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class SubtitleData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::SubtitleData>
{
	static constexpr fixed_string class_name = "android/media/SubtitleData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::SubtitleData : public jni::object_base<"android/media/SubtitleData",
	java::lang::Object>
{
public:

	static jni::ref<android::media::SubtitleData> new_object(jint trackIndex, jlong startTimeUs, jlong p3, jni::ref<jni::array<jbyte>> durationUs) { return base_::new_object(trackIndex, startTimeUs, p3, durationUs); }
	jint getTrackIndex() { return call_method<"getTrackIndex", jint>(); }
	jlong getStartTimeUs() { return call_method<"getStartTimeUs", jlong>(); }
	jlong getDurationUs() { return call_method<"getDurationUs", jlong>(); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }

protected:

	SubtitleData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SUBTITLEDATA