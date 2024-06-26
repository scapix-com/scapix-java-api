// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC_FWD
#define SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class FontStrikeDesc; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::FontStrikeDesc>
{
	static constexpr fixed_string class_name = "sun/font/FontStrikeDesc";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC)
#define SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/font/Font2D.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::FontStrikeDesc : public jni::object_base<"sun/font/FontStrikeDesc",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	static jint getAAHintIntVal(jni::ref<java::lang::Object> p1, jni::ref<sun::font::Font2D> p2, jint p3) { return call_static_method<"getAAHintIntVal", jint>(p1, p2, p3); }
	static jint getAAHintIntVal(jni::ref<sun::font::Font2D> p1, jni::ref<java::awt::Font> p2, jni::ref<java::awt::font::FontRenderContext> p3) { return call_static_method<"getAAHintIntVal", jint>(p1, p2, p3); }
	static jint getFMHintIntVal(jni::ref<java::lang::Object> p1) { return call_static_method<"getFMHintIntVal", jint>(p1); }
	static jni::ref<sun::font::FontStrikeDesc> new_object(jni::ref<java::awt::geom::AffineTransform> p1, jni::ref<java::awt::geom::AffineTransform> p2, jint p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FontStrikeDesc(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_FONTSTRIKEDESC
