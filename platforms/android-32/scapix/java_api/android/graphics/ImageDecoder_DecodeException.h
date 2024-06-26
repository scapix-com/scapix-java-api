// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ImageDecoder_DecodeException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ImageDecoder_DecodeException>
{
	static constexpr fixed_string class_name = "android/graphics/ImageDecoder$DecodeException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/ImageDecoder_Source.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ImageDecoder_DecodeException : public jni::object_base<"android/graphics/ImageDecoder$DecodeException",
	java::io::IOException>
{
public:

	static jint SOURCE_EXCEPTION() { return get_static_field<"SOURCE_EXCEPTION", jint>(); }
	static jint SOURCE_INCOMPLETE() { return get_static_field<"SOURCE_INCOMPLETE", jint>(); }
	static jint SOURCE_MALFORMED_DATA() { return get_static_field<"SOURCE_MALFORMED_DATA", jint>(); }

	jint getError() { return call_method<"getError", jint>(); }
	jni::ref<android::graphics::ImageDecoder_Source> getSource() { return call_method<"getSource", jni::ref<android::graphics::ImageDecoder_Source>>(); }

protected:

	ImageDecoder_DecodeException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_IMAGEDECODER_DECODEEXCEPTION
