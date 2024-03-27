// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvTrackInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvTrackInfo>
{
	static constexpr fixed_string class_name = "android/media/tv/TvTrackInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/tv/TvTrackInfo_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvTrackInfo : public jni::object_base<"android/media/tv/TvTrackInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = TvTrackInfo_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_AUDIO() { return get_static_field<"TYPE_AUDIO", jint>(); }
	static jint TYPE_SUBTITLE() { return get_static_field<"TYPE_SUBTITLE", jint>(); }
	static jint TYPE_VIDEO() { return get_static_field<"TYPE_VIDEO", jint>(); }

	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getLanguage() { return call_method<"getLanguage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getDescription() { return call_method<"getDescription", jni::ref<java::lang::CharSequence>>(); }
	jint getAudioChannelCount() { return call_method<"getAudioChannelCount", jint>(); }
	jint getAudioSampleRate() { return call_method<"getAudioSampleRate", jint>(); }
	jint getVideoWidth() { return call_method<"getVideoWidth", jint>(); }
	jint getVideoHeight() { return call_method<"getVideoHeight", jint>(); }
	jfloat getVideoFrameRate() { return call_method<"getVideoFrameRate", jfloat>(); }
	jfloat getVideoPixelAspectRatio() { return call_method<"getVideoPixelAspectRatio", jfloat>(); }
	jbyte getVideoActiveFormatDescription() { return call_method<"getVideoActiveFormatDescription", jbyte>(); }
	jni::ref<android::os::Bundle> getExtra() { return call_method<"getExtra", jni::ref<android::os::Bundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	TvTrackInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVTRACKINFO
