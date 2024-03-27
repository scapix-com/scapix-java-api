// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/media/AudioMetadataReadMap.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class AudioMetadataMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::AudioMetadataMap>
{
	static constexpr fixed_string class_name = "android/media/AudioMetadataMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::media::AudioMetadataReadMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioMetadata_Key.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::AudioMetadataMap : public jni::object_base<"android/media/AudioMetadataMap",
	java::lang::Object,
	android::media::AudioMetadataReadMap>
{
public:

	jni::ref<java::lang::Object> remove(jni::ref<android::media::AudioMetadata_Key> p1) { return call_method<"remove", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> set(jni::ref<android::media::AudioMetadata_Key> p1, jni::ref<java::lang::Object> p2) { return call_method<"set", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	AudioMetadataMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_AUDIOMETADATAMAP
