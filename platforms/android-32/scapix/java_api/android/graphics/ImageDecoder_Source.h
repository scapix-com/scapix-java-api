// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ImageDecoder_Source; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ImageDecoder_Source>
{
	static constexpr fixed_string class_name = "android/graphics/ImageDecoder$Source";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ImageDecoder_Source : public jni::object_base<"android/graphics/ImageDecoder$Source",
	java::lang::Object>
{
public:


protected:

	ImageDecoder_Source(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_SOURCE
