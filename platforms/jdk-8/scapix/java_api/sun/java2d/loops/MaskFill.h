// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/GraphicsPrimitive.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class MaskFill; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::MaskFill>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/MaskFill";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::GraphicsPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::MaskFill : public jni::object_base<"sun/java2d/loops/MaskFill",
	sun::java2d::loops::GraphicsPrimitive>
{
public:

	static jni::ref<java::lang::String> methodSignature() { return get_static_field<"methodSignature", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> fillPgramSignature() { return get_static_field<"fillPgramSignature", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> drawPgramSignature() { return get_static_field<"drawPgramSignature", jni::ref<java::lang::String>>(); }
	static jint primTypeID() { return get_static_field<"primTypeID", jint>(); }

	static jni::ref<sun::java2d::loops::MaskFill> locate(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"locate", jni::ref<sun::java2d::loops::MaskFill>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::MaskFill> locatePrim(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"locatePrim", jni::ref<sun::java2d::loops::MaskFill>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::MaskFill> getFromCache(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"getFromCache", jni::ref<sun::java2d::loops::MaskFill>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::MaskFill> new_object(jlong p1, jni::ref<sun::java2d::loops::SurfaceType> p2, jni::ref<sun::java2d::loops::CompositeType> p3, jni::ref<sun::java2d::loops::SurfaceType> p4) { return base_::new_object(p1, p2, p3, p4); }
	void MaskFill(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jint p4, jint p5, jint p6, jint p7, jni::ref<jni::array<jbyte>> p8, jint p9, jint p10) { return call_method<"MaskFill", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	void FillAAPgram(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9) { return call_method<"FillAAPgram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	void DrawAAPgram(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jdouble p4, jdouble p5, jdouble p6, jdouble p7, jdouble p8, jdouble p9, jdouble p10, jdouble p11) { return call_method<"DrawAAPgram", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	jboolean canDoParallelograms() { return call_method<"canDoParallelograms", jboolean>(); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> makePrimitive(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_method<"makePrimitive", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(p1, p2, p3); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> traceWrap() { return call_method<"traceWrap", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(); }

protected:

	MaskFill(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL
