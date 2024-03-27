// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA_FWD
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::font { class GlyphLayout_GVData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::font::GlyphLayout_GVData>
{
	static constexpr fixed_string class_name = "sun/font/GlyphLayout$GVData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA)
#define SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/font/FontRenderContext.h>
#include <scapix/java_api/java/awt/geom/AffineTransform.h>
#include <scapix/java_api/sun/font/StandardGlyphVector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::font::GlyphLayout_GVData : public jni::object_base<"sun/font/GlyphLayout$GVData",
	java::lang::Object>
{
public:

	jint _count() { return get_field<"_count", jint>(); }
	void _count(jint v) { set_field<"_count", jint>(v); }
	jint _flags() { return get_field<"_flags", jint>(); }
	void _flags(jint v) { set_field<"_flags", jint>(v); }
	jni::ref<jni::array<jint>> _glyphs() { return get_field<"_glyphs", jni::ref<jni::array<jint>>>(); }
	void _glyphs(jni::ref<jni::array<jint>> v) { set_field<"_glyphs", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<jfloat>> _positions() { return get_field<"_positions", jni::ref<jni::array<jfloat>>>(); }
	void _positions(jni::ref<jni::array<jfloat>> v) { set_field<"_positions", jni::ref<jni::array<jfloat>>>(v); }
	jni::ref<jni::array<jint>> _indices() { return get_field<"_indices", jni::ref<jni::array<jint>>>(); }
	void _indices(jni::ref<jni::array<jint>> v) { set_field<"_indices", jni::ref<jni::array<jint>>>(v); }

	static jni::ref<sun::font::GlyphLayout_GVData> new_object() { return base_::new_object(); }
	void init(jint p1) { return call_method<"init", void>(p1); }
	void grow() { return call_method<"grow", void>(); }
	void grow(jint p1) { return call_method<"grow", void>(p1); }
	void adjustPositions(jni::ref<java::awt::geom::AffineTransform> p1) { return call_method<"adjustPositions", void>(p1); }
	jni::ref<sun::font::StandardGlyphVector> createGlyphVector(jni::ref<java::awt::Font> p1, jni::ref<java::awt::font::FontRenderContext> p2, jni::ref<sun::font::StandardGlyphVector> p3) { return call_method<"createGlyphVector", jni::ref<sun::font::StandardGlyphVector>>(p1, p2, p3); }

protected:

	GlyphLayout_GVData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_FONT_GLYPHLAYOUT_GVDATA
