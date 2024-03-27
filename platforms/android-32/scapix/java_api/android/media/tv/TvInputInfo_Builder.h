// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputInfo_Builder>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/media/tv/TvInputInfo.h>
#include <scapix/java_api/android/os/Bundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputInfo_Builder : public jni::object_base<"android/media/tv/TvInputInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::media::tv::TvInputInfo_Builder> new_object(jni::ref<android::content::Context> context, jni::ref<android::content::ComponentName> component) { return base_::new_object(context, component); }
	jni::ref<android::media::tv::TvInputInfo_Builder> setTunerCount(jint tunerCount) { return call_method<"setTunerCount", jni::ref<android::media::tv::TvInputInfo_Builder>>(tunerCount); }
	jni::ref<android::media::tv::TvInputInfo_Builder> setCanRecord(jboolean canRecord) { return call_method<"setCanRecord", jni::ref<android::media::tv::TvInputInfo_Builder>>(canRecord); }
	jni::ref<android::media::tv::TvInputInfo_Builder> setCanPauseRecording(jboolean canPauseRecording) { return call_method<"setCanPauseRecording", jni::ref<android::media::tv::TvInputInfo_Builder>>(canPauseRecording); }
	jni::ref<android::media::tv::TvInputInfo_Builder> setExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setExtras", jni::ref<android::media::tv::TvInputInfo_Builder>>(extras); }
	jni::ref<android::media::tv::TvInputInfo> build() { return call_method<"build", jni::ref<android::media::tv::TvInputInfo>>(); }

protected:

	TvInputInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTINFO_BUILDER
