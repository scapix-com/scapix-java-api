// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Shader_TileMode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Shader_TileMode>
{
	static constexpr fixed_string class_name = "android/graphics/Shader$TileMode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Shader_TileMode : public jni::object_base<"android/graphics/Shader$TileMode",
	java::lang::Enum>
{
public:

	static jni::ref<android::graphics::Shader_TileMode> CLAMP() { return get_static_field<"CLAMP", jni::ref<android::graphics::Shader_TileMode>>(); }
	static jni::ref<android::graphics::Shader_TileMode> MIRROR() { return get_static_field<"MIRROR", jni::ref<android::graphics::Shader_TileMode>>(); }
	static jni::ref<android::graphics::Shader_TileMode> REPEAT() { return get_static_field<"REPEAT", jni::ref<android::graphics::Shader_TileMode>>(); }

	static jni::ref<jni::array<android::graphics::Shader_TileMode>> values() { return call_static_method<"values", jni::ref<jni::array<android::graphics::Shader_TileMode>>>(); }
	static jni::ref<android::graphics::Shader_TileMode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::graphics::Shader_TileMode>>(name); }

protected:

	Shader_TileMode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_SHADER_TILEMODE