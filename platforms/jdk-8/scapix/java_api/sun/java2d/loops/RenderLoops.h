// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class RenderLoops; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::RenderLoops>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/RenderLoops";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/loops/DrawGlyphList.h>
#include <scapix/java_api/sun/java2d/loops/DrawGlyphListAA.h>
#include <scapix/java_api/sun/java2d/loops/DrawGlyphListLCD.h>
#include <scapix/java_api/sun/java2d/loops/DrawLine.h>
#include <scapix/java_api/sun/java2d/loops/DrawParallelogram.h>
#include <scapix/java_api/sun/java2d/loops/DrawPath.h>
#include <scapix/java_api/sun/java2d/loops/DrawPolygons.h>
#include <scapix/java_api/sun/java2d/loops/DrawRect.h>
#include <scapix/java_api/sun/java2d/loops/FillParallelogram.h>
#include <scapix/java_api/sun/java2d/loops/FillPath.h>
#include <scapix/java_api/sun/java2d/loops/FillRect.h>
#include <scapix/java_api/sun/java2d/loops/FillSpans.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::RenderLoops : public jni::object_base<"sun/java2d/loops/RenderLoops",
	java::lang::Object>
{
public:

	static jint primTypeID() { return get_static_field<"primTypeID", jint>(); }
	jni::ref<sun::java2d::loops::DrawLine> drawLineLoop() { return get_field<"drawLineLoop", jni::ref<sun::java2d::loops::DrawLine>>(); }
	void drawLineLoop(jni::ref<sun::java2d::loops::DrawLine> v) { set_field<"drawLineLoop", jni::ref<sun::java2d::loops::DrawLine>>(v); }
	jni::ref<sun::java2d::loops::FillRect> fillRectLoop() { return get_field<"fillRectLoop", jni::ref<sun::java2d::loops::FillRect>>(); }
	void fillRectLoop(jni::ref<sun::java2d::loops::FillRect> v) { set_field<"fillRectLoop", jni::ref<sun::java2d::loops::FillRect>>(v); }
	jni::ref<sun::java2d::loops::DrawRect> drawRectLoop() { return get_field<"drawRectLoop", jni::ref<sun::java2d::loops::DrawRect>>(); }
	void drawRectLoop(jni::ref<sun::java2d::loops::DrawRect> v) { set_field<"drawRectLoop", jni::ref<sun::java2d::loops::DrawRect>>(v); }
	jni::ref<sun::java2d::loops::DrawPolygons> drawPolygonsLoop() { return get_field<"drawPolygonsLoop", jni::ref<sun::java2d::loops::DrawPolygons>>(); }
	void drawPolygonsLoop(jni::ref<sun::java2d::loops::DrawPolygons> v) { set_field<"drawPolygonsLoop", jni::ref<sun::java2d::loops::DrawPolygons>>(v); }
	jni::ref<sun::java2d::loops::DrawPath> drawPathLoop() { return get_field<"drawPathLoop", jni::ref<sun::java2d::loops::DrawPath>>(); }
	void drawPathLoop(jni::ref<sun::java2d::loops::DrawPath> v) { set_field<"drawPathLoop", jni::ref<sun::java2d::loops::DrawPath>>(v); }
	jni::ref<sun::java2d::loops::FillPath> fillPathLoop() { return get_field<"fillPathLoop", jni::ref<sun::java2d::loops::FillPath>>(); }
	void fillPathLoop(jni::ref<sun::java2d::loops::FillPath> v) { set_field<"fillPathLoop", jni::ref<sun::java2d::loops::FillPath>>(v); }
	jni::ref<sun::java2d::loops::FillSpans> fillSpansLoop() { return get_field<"fillSpansLoop", jni::ref<sun::java2d::loops::FillSpans>>(); }
	void fillSpansLoop(jni::ref<sun::java2d::loops::FillSpans> v) { set_field<"fillSpansLoop", jni::ref<sun::java2d::loops::FillSpans>>(v); }
	jni::ref<sun::java2d::loops::FillParallelogram> fillParallelogramLoop() { return get_field<"fillParallelogramLoop", jni::ref<sun::java2d::loops::FillParallelogram>>(); }
	void fillParallelogramLoop(jni::ref<sun::java2d::loops::FillParallelogram> v) { set_field<"fillParallelogramLoop", jni::ref<sun::java2d::loops::FillParallelogram>>(v); }
	jni::ref<sun::java2d::loops::DrawParallelogram> drawParallelogramLoop() { return get_field<"drawParallelogramLoop", jni::ref<sun::java2d::loops::DrawParallelogram>>(); }
	void drawParallelogramLoop(jni::ref<sun::java2d::loops::DrawParallelogram> v) { set_field<"drawParallelogramLoop", jni::ref<sun::java2d::loops::DrawParallelogram>>(v); }
	jni::ref<sun::java2d::loops::DrawGlyphList> drawGlyphListLoop() { return get_field<"drawGlyphListLoop", jni::ref<sun::java2d::loops::DrawGlyphList>>(); }
	void drawGlyphListLoop(jni::ref<sun::java2d::loops::DrawGlyphList> v) { set_field<"drawGlyphListLoop", jni::ref<sun::java2d::loops::DrawGlyphList>>(v); }
	jni::ref<sun::java2d::loops::DrawGlyphListAA> drawGlyphListAALoop() { return get_field<"drawGlyphListAALoop", jni::ref<sun::java2d::loops::DrawGlyphListAA>>(); }
	void drawGlyphListAALoop(jni::ref<sun::java2d::loops::DrawGlyphListAA> v) { set_field<"drawGlyphListAALoop", jni::ref<sun::java2d::loops::DrawGlyphListAA>>(v); }
	jni::ref<sun::java2d::loops::DrawGlyphListLCD> drawGlyphListLCDLoop() { return get_field<"drawGlyphListLCDLoop", jni::ref<sun::java2d::loops::DrawGlyphListLCD>>(); }
	void drawGlyphListLCDLoop(jni::ref<sun::java2d::loops::DrawGlyphListLCD> v) { set_field<"drawGlyphListLCDLoop", jni::ref<sun::java2d::loops::DrawGlyphListLCD>>(v); }

	static jni::ref<sun::java2d::loops::RenderLoops> new_object() { return base_::new_object(); }

protected:

	RenderLoops(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_RENDERLOOPS
