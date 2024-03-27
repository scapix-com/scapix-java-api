// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/Shader.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class BitmapShader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::BitmapShader>
{
	static constexpr fixed_string class_name = "android/graphics/BitmapShader";
	using base_classes = std::tuple<scapix::java_api::android::graphics::Shader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/graphics/Shader_TileMode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::BitmapShader : public jni::object_base<"android/graphics/BitmapShader",
	android::graphics::Shader>
{
public:

	static jint FILTER_MODE_DEFAULT() { return get_static_field<"FILTER_MODE_DEFAULT", jint>(); }
	static jint FILTER_MODE_LINEAR() { return get_static_field<"FILTER_MODE_LINEAR", jint>(); }
	static jint FILTER_MODE_NEAREST() { return get_static_field<"FILTER_MODE_NEAREST", jint>(); }

	static jni::ref<android::graphics::BitmapShader> new_object(jni::ref<android::graphics::Bitmap> bitmap, jni::ref<android::graphics::Shader_TileMode> tileX, jni::ref<android::graphics::Shader_TileMode> tileY) { return base_::new_object(bitmap, tileX, tileY); }
	jint getFilterMode() { return call_method<"getFilterMode", jint>(); }
	void setFilterMode(jint mode) { return call_method<"setFilterMode", void>(mode); }
	void setMaxAnisotropy(jint maxAnisotropy) { return call_method<"setMaxAnisotropy", void>(maxAnisotropy); }
	jint getMaxAnisotropy() { return call_method<"getMaxAnisotropy", jint>(); }

protected:

	BitmapShader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_BITMAPSHADER