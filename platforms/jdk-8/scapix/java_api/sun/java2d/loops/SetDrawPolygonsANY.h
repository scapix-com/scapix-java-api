// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/DrawPolygons.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class SetDrawPolygonsANY; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::SetDrawPolygonsANY>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/SetDrawPolygonsANY";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::DrawPolygons>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::SetDrawPolygonsANY : public jni::object_base<"sun/java2d/loops/SetDrawPolygonsANY",
	sun::java2d::loops::DrawPolygons>
{
public:

	void DrawPolygons(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<jni::array<jint>> p3, jni::ref<jni::array<jint>> p4, jni::ref<jni::array<jint>> p5, jint p6, jint p7, jint p8, jboolean p9) { return call_method<"DrawPolygons", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }

protected:

	SetDrawPolygonsANY(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SETDRAWPOLYGONSANY
