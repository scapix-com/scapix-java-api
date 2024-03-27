// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/GraphicsPrimitive.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class FillRect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::FillRect>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/FillRect";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::GraphicsPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#include <scapix/java_api/sun/java2d/loops/FillRect_General.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::FillRect : public jni::object_base<"sun/java2d/loops/FillRect",
	sun::java2d::loops::GraphicsPrimitive>
{
public:

	using General = FillRect_General;

	static jni::ref<java::lang::String> methodSignature() { return get_static_field<"methodSignature", jni::ref<java::lang::String>>(); }
	static jint primTypeID() { return get_static_field<"primTypeID", jint>(); }

	static jni::ref<sun::java2d::loops::FillRect> locate(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"locate", jni::ref<sun::java2d::loops::FillRect>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::FillRect> new_object(jlong p1, jni::ref<sun::java2d::loops::SurfaceType> p2, jni::ref<sun::java2d::loops::CompositeType> p3, jni::ref<sun::java2d::loops::SurfaceType> p4) { return base_::new_object(p1, p2, p3, p4); }
	void FillRect(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"FillRect", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> makePrimitive(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_method<"makePrimitive", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(p1, p2, p3); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> traceWrap() { return call_method<"traceWrap", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(); }

protected:

	FillRect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_FILLRECT
