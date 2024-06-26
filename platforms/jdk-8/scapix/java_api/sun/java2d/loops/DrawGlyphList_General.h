// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/DrawGlyphList.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class DrawGlyphList_General; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::DrawGlyphList_General>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/DrawGlyphList$General";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::DrawGlyphList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/font/GlyphList.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::DrawGlyphList_General : public jni::object_base<"sun/java2d/loops/DrawGlyphList$General",
	sun::java2d::loops::DrawGlyphList>
{
public:

	static jni::ref<sun::java2d::loops::DrawGlyphList_General> new_object(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return base_::new_object(p1, p2, p3); }
	void DrawGlyphList(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<sun::font::GlyphList> p3) { return call_method<"DrawGlyphList", void>(p1, p2, p3); }

protected:

	DrawGlyphList_General(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWGLYPHLIST_GENERAL
