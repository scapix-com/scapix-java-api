// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class ThemeReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::ThemeReader>
{
	static constexpr fixed_string class_name = "sun/awt/windows/ThemeReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::windows::ThemeReader : public jni::object_base<"sun/awt/windows/ThemeReader",
	java::lang::Object>
{
public:

	static jni::ref<sun::awt::windows::ThemeReader> new_object() { return base_::new_object(); }
	static jboolean isThemed() { return call_static_method<"isThemed", jboolean>(); }
	static jboolean isXPStyleEnabled() { return call_static_method<"isXPStyleEnabled", jboolean>(); }
	static void paintBackground(jni::ref<jni::array<jint>> p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jint p5, jint p6, jint p7, jint p8, jint p9) { return call_static_method<"paintBackground", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	static jni::ref<java::awt::Insets> getThemeMargins(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getThemeMargins", jni::ref<java::awt::Insets>>(p1, p2, p3, p4); }
	static jboolean isThemePartDefined(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_static_method<"isThemePartDefined", jboolean>(p1, p2, p3); }
	static jni::ref<java::awt::Color> getColor(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getColor", jni::ref<java::awt::Color>>(p1, p2, p3, p4); }
	static jint getInt(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getInt", jint>(p1, p2, p3, p4); }
	static jint getEnum(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getEnum", jint>(p1, p2, p3, p4); }
	static jboolean getBoolean(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getBoolean", jboolean>(p1, p2, p3, p4); }
	static jboolean getSysBoolean(jni::ref<java::lang::String> p1, jint p2) { return call_static_method<"getSysBoolean", jboolean>(p1, p2); }
	static jni::ref<java::awt::Point> getPoint(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getPoint", jni::ref<java::awt::Point>>(p1, p2, p3, p4); }
	static jni::ref<java::awt::Dimension> getPosition(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4) { return call_static_method<"getPosition", jni::ref<java::awt::Dimension>>(p1, p2, p3, p4); }
	static jni::ref<java::awt::Dimension> getPartSize(jni::ref<java::lang::String> p1, jint p2, jint p3) { return call_static_method<"getPartSize", jni::ref<java::awt::Dimension>>(p1, p2, p3); }
	static jlong getThemeTransitionDuration(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4, jint p5) { return call_static_method<"getThemeTransitionDuration", jlong>(p1, p2, p3, p4, p5); }
	static jboolean isGetThemeTransitionDurationDefined() { return call_static_method<"isGetThemeTransitionDurationDefined", jboolean>(); }
	static jni::ref<java::awt::Insets> getThemeBackgroundContentMargins(jni::ref<java::lang::String> p1, jint p2, jint p3, jint p4, jint p5) { return call_static_method<"getThemeBackgroundContentMargins", jni::ref<java::awt::Insets>>(p1, p2, p3, p4, p5); }

protected:

	ThemeReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_THEMEREADER