// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/FillParallelogram.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class FillParallelogram_TraceFillParallelogram; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::FillParallelogram_TraceFillParallelogram>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/FillParallelogram$TraceFillParallelogram";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::FillParallelogram>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/GraphicsPrimitive.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::FillParallelogram_TraceFillParallelogram : public jni::object_base<"sun/java2d/loops/FillParallelogram$TraceFillParallelogram",
	sun::java2d::loops::FillParallelogram>
{
public:

	static jni::ref<sun::java2d::loops::FillParallelogram_TraceFillParallelogram> new_object(jni::ref<sun::java2d::loops::FillParallelogram> p1) { return base_::new_object(p1); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> traceWrap() { return call_method<"traceWrap", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(); }
	void FillParallelogram(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jdouble p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8) { return call_method<"FillParallelogram", void>(p1, p2, p3, p4, p5, p6, p7, p8); }

protected:

	FillParallelogram_TraceFillParallelogram(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLPARALLELOGRAM_TRACEFILLPARALLELOGRAM