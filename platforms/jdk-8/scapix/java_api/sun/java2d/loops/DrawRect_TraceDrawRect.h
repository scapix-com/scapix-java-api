// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/DrawRect.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class DrawRect_TraceDrawRect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::DrawRect_TraceDrawRect>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/DrawRect$TraceDrawRect";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::DrawRect>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/GraphicsPrimitive.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::DrawRect_TraceDrawRect : public jni::object_base<"sun/java2d/loops/DrawRect$TraceDrawRect",
	sun::java2d::loops::DrawRect>
{
public:

	static jni::ref<sun::java2d::loops::DrawRect_TraceDrawRect> new_object(jni::ref<sun::java2d::loops::DrawRect> p1) { return base_::new_object(p1); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> traceWrap() { return call_method<"traceWrap", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(); }
	void DrawRect(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"DrawRect", void>(p1, p2, p3, p4, p5, p6); }

protected:

	DrawRect_TraceDrawRect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_DRAWRECT_TRACEDRAWRECT