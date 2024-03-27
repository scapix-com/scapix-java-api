// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class Typeface; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::Typeface>
{
	static constexpr fixed_string class_name = "android/graphics/Typeface";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/AssetManager.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/graphics/Typeface_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::Typeface : public jni::object_base<"android/graphics/Typeface",
	java::lang::Object>
{
public:

	using Builder = Typeface_Builder;

	static jint BOLD() { return get_static_field<"BOLD", jint>(); }
	static jint BOLD_ITALIC() { return get_static_field<"BOLD_ITALIC", jint>(); }
	static jni::ref<android::graphics::Typeface> DEFAULT() { return get_static_field<"DEFAULT", jni::ref<android::graphics::Typeface>>(); }
	static jni::ref<android::graphics::Typeface> DEFAULT_BOLD() { return get_static_field<"DEFAULT_BOLD", jni::ref<android::graphics::Typeface>>(); }
	static jint ITALIC() { return get_static_field<"ITALIC", jint>(); }
	static jni::ref<android::graphics::Typeface> MONOSPACE() { return get_static_field<"MONOSPACE", jni::ref<android::graphics::Typeface>>(); }
	static jint NORMAL() { return get_static_field<"NORMAL", jint>(); }
	static jni::ref<android::graphics::Typeface> SANS_SERIF() { return get_static_field<"SANS_SERIF", jni::ref<android::graphics::Typeface>>(); }
	static jni::ref<android::graphics::Typeface> SERIF() { return get_static_field<"SERIF", jni::ref<android::graphics::Typeface>>(); }

	jint getStyle() { return call_method<"getStyle", jint>(); }
	jboolean isBold() { return call_method<"isBold", jboolean>(); }
	jboolean isItalic() { return call_method<"isItalic", jboolean>(); }
	static jni::ref<android::graphics::Typeface> create(jni::ref<java::lang::String> familyName, jint style) { return call_static_method<"create", jni::ref<android::graphics::Typeface>>(familyName, style); }
	static jni::ref<android::graphics::Typeface> create(jni::ref<android::graphics::Typeface> family, jint style) { return call_static_method<"create", jni::ref<android::graphics::Typeface>>(family, style); }
	static jni::ref<android::graphics::Typeface> defaultFromStyle(jint style) { return call_static_method<"defaultFromStyle", jni::ref<android::graphics::Typeface>>(style); }
	static jni::ref<android::graphics::Typeface> createFromAsset(jni::ref<android::content::res::AssetManager> mgr, jni::ref<java::lang::String> path) { return call_static_method<"createFromAsset", jni::ref<android::graphics::Typeface>>(mgr, path); }
	static jni::ref<android::graphics::Typeface> createFromFile(jni::ref<java::io::File> path) { return call_static_method<"createFromFile", jni::ref<android::graphics::Typeface>>(path); }
	static jni::ref<android::graphics::Typeface> createFromFile(jni::ref<java::lang::String> path) { return call_static_method<"createFromFile", jni::ref<android::graphics::Typeface>>(path); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Typeface(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_TYPEFACE
