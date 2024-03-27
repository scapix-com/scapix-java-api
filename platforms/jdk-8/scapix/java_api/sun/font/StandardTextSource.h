// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/font/TextSource.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE_FWD
#define SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class StandardTextSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::StandardTextSource>
{
	static constexpr fixed_string class_name = "sun/font/StandardTextSource";
	using base_classes = std::tuple<scapix::java_api::sun::font::TextSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE)
#define SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/font/CoreMetrics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::font::StandardTextSource : public jni::object_base<"sun/font/StandardTextSource",
	sun::font::TextSource>
{
public:

	jni::ref<jni::array<jchar>> getChars() { return call_method<"getChars", jni::ref<jni::array<jchar>>>(); }
	jint getStart() { return call_method<"getStart", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jint getContextStart() { return call_method<"getContextStart", jint>(); }
	jint getContextLength() { return call_method<"getContextLength", jint>(); }
	jint getLayoutFlags() { return call_method<"getLayoutFlags", jint>(); }
	jint getBidiLevel() { return call_method<"getBidiLevel", jint>(); }
	jni::ref<java::awt::Font> getFont() { return call_method<"getFont", jni::ref<java::awt::Font>>(); }
	jni::ref<java::awt::font::FontRenderContext> getFRC() { return call_method<"getFRC", jni::ref<java::awt::font::FontRenderContext>>(); }
	jni::ref<sun::font::CoreMetrics> getCoreMetrics() { return call_method<"getCoreMetrics", jni::ref<sun::font::CoreMetrics>>(); }
	jni::ref<sun::font::TextSource> getSubSource(jint p1, jint p2, jint p3) { return call_method<"getSubSource", jni::ref<sun::font::TextSource>>(p1, p2, p3); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	StandardTextSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_STANDARDTEXTSOURCE
