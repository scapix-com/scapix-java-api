// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaFeature_HdrType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaFeature_HdrType>
{
	static constexpr fixed_string class_name = "android/media/MediaFeature$HdrType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaFeature_HdrType : public jni::object_base<"android/media/MediaFeature$HdrType",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> DOLBY_VISION() { return get_static_field<"DOLBY_VISION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HDR10() { return get_static_field<"HDR10", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HDR10_PLUS() { return get_static_field<"HDR10_PLUS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HLG() { return get_static_field<"HLG", jni::ref<java::lang::String>>(); }


protected:

	MediaFeature_HdrType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIAFEATURE_HDRTYPE