// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST_FWD
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class GlyphList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::GlyphList>
{
	static constexpr fixed_string class_name = "sun/font/GlyphList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST)
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/font/GlyphVector.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/java2d/loops/FontInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::GlyphList : public jni::object_base<"sun/font/GlyphList",
	java::lang::Object>
{
public:

	static jni::ref<sun::font::GlyphList> getInstance() { return call_static_method<"getInstance", jni::ref<sun::font::GlyphList>>(); }
	jboolean setFromString(jni::ref<sun::java2d::loops::FontInfo> p1, jni::ref<java::lang::String> p2, jfloat p3, jfloat p4) { return call_method<"setFromString", jboolean>(p1, p2, p3, p4); }
	jboolean setFromChars(jni::ref<sun::java2d::loops::FontInfo> p1, jni::ref<jni::array<jchar>> p2, jint p3, jint p4, jfloat p5, jfloat p6) { return call_method<"setFromChars", jboolean>(p1, p2, p3, p4, p5, p6); }
	void setFromGlyphVector(jni::ref<sun::java2d::loops::FontInfo> p1, jni::ref<java::awt::font::GlyphVector> p2, jfloat p3, jfloat p4) { return call_method<"setFromGlyphVector", void>(p1, p2, p3, p4); }
	jni::ref<jni::array<jint>> getBounds() { return call_method<"getBounds", jni::ref<jni::array<jint>>>(); }
	void setGlyphIndex(jint p1) { return call_method<"setGlyphIndex", void>(p1); }
	jni::ref<jni::array<jint>> getMetrics() { return call_method<"getMetrics", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jbyte>> getGrayBits() { return call_method<"getGrayBits", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jlong>> getImages() { return call_method<"getImages", jni::ref<jni::array<jlong>>>(); }
	jboolean usePositions() { return call_method<"usePositions", jboolean>(); }
	jni::ref<jni::array<jfloat>> getPositions() { return call_method<"getPositions", jni::ref<jni::array<jfloat>>>(); }
	jfloat getX() { return call_method<"getX", jfloat>(); }
	jfloat getY() { return call_method<"getY", jfloat>(); }
	jni::ref<java::lang::Object> getStrike() { return call_method<"getStrike", jni::ref<java::lang::Object>>(); }
	jboolean isSubPixPos() { return call_method<"isSubPixPos", jboolean>(); }
	jboolean isRGBOrder() { return call_method<"isRGBOrder", jboolean>(); }
	void dispose() { return call_method<"dispose", void>(); }
	jint getNumGlyphs() { return call_method<"getNumGlyphs", jint>(); }

protected:

	GlyphList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLIST