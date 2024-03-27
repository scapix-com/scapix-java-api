// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaCodecList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaCodecList>
{
	static constexpr fixed_string class_name = "android/media/MediaCodecList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaCodecInfo.h>
#include <scapix/java_api/android/media/MediaFormat.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaCodecList : public jni::object_base<"android/media/MediaCodecList",
	java::lang::Object>
{
public:

	static jint ALL_CODECS() { return get_static_field<"ALL_CODECS", jint>(); }
	static jint REGULAR_CODECS() { return get_static_field<"REGULAR_CODECS", jint>(); }

	static jni::ref<android::media::MediaCodecList> new_object(jint kind) { return base_::new_object(kind); }
	static jint getCodecCount() { return call_static_method<"getCodecCount", jint>(); }
	static jni::ref<android::media::MediaCodecInfo> getCodecInfoAt(jint index) { return call_static_method<"getCodecInfoAt", jni::ref<android::media::MediaCodecInfo>>(index); }
	jni::ref<jni::array<android::media::MediaCodecInfo>> getCodecInfos() { return call_method<"getCodecInfos", jni::ref<jni::array<android::media::MediaCodecInfo>>>(); }
	jni::ref<java::lang::String> findDecoderForFormat(jni::ref<android::media::MediaFormat> format) { return call_method<"findDecoderForFormat", jni::ref<java::lang::String>>(format); }
	jni::ref<java::lang::String> findEncoderForFormat(jni::ref<android::media::MediaFormat> format) { return call_method<"findEncoderForFormat", jni::ref<java::lang::String>>(format); }

protected:

	MediaCodecList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIACODECLIST