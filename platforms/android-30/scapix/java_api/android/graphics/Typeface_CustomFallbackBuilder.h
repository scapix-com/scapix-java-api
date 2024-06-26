// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Typeface_CustomFallbackBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Typeface_CustomFallbackBuilder>
{
	static constexpr fixed_string class_name = "android/graphics/Typeface$CustomFallbackBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Typeface.h>
#include <scapix/java_api/android/graphics/fonts/FontFamily.h>
#include <scapix/java_api/android/graphics/fonts/FontStyle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Typeface_CustomFallbackBuilder : public jni::object_base<"android/graphics/Typeface$CustomFallbackBuilder",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::Typeface_CustomFallbackBuilder> new_object(jni::ref<android::graphics::fonts::FontFamily> family) { return base_::new_object(family); }
	static jint getMaxCustomFallbackCount() { return call_static_method<"getMaxCustomFallbackCount", jint>(); }
	jni::ref<android::graphics::Typeface_CustomFallbackBuilder> setSystemFallback(jni::ref<java::lang::String> familyName) { return call_method<"setSystemFallback", jni::ref<android::graphics::Typeface_CustomFallbackBuilder>>(familyName); }
	jni::ref<android::graphics::Typeface_CustomFallbackBuilder> setStyle(jni::ref<android::graphics::fonts::FontStyle> style) { return call_method<"setStyle", jni::ref<android::graphics::Typeface_CustomFallbackBuilder>>(style); }
	jni::ref<android::graphics::Typeface_CustomFallbackBuilder> addCustomFallback(jni::ref<android::graphics::fonts::FontFamily> family) { return call_method<"addCustomFallback", jni::ref<android::graphics::Typeface_CustomFallbackBuilder>>(family); }
	jni::ref<android::graphics::Typeface> build() { return call_method<"build", jni::ref<android::graphics::Typeface>>(); }

protected:

	Typeface_CustomFallbackBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_CUSTOMFALLBACKBUILDER
