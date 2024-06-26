// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/GraphicsPrimitive.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class ScaledBlit; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::ScaledBlit>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/ScaledBlit";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::GraphicsPrimitive>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::loops::ScaledBlit : public jni::object_base<"sun/java2d/loops/ScaledBlit",
	sun::java2d::loops::GraphicsPrimitive>
{
public:

	static jni::ref<java::lang::String> methodSignature() { return get_static_field<"methodSignature", jni::ref<java::lang::String>>(); }
	static jint primTypeID() { return get_static_field<"primTypeID", jint>(); }

	static jni::ref<sun::java2d::loops::ScaledBlit> locate(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"locate", jni::ref<sun::java2d::loops::ScaledBlit>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::ScaledBlit> getFromCache(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_static_method<"getFromCache", jni::ref<sun::java2d::loops::ScaledBlit>>(p1, p2, p3); }
	static jni::ref<sun::java2d::loops::ScaledBlit> new_object(jlong p1, jni::ref<sun::java2d::loops::SurfaceType> p2, jni::ref<sun::java2d::loops::CompositeType> p3, jni::ref<sun::java2d::loops::SurfaceType> p4) { return base_::new_object(p1, p2, p3, p4); }
	void Scale(jni::ref<sun::java2d::SurfaceData> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jni::ref<sun::java2d::pipe::Region> p4, jint p5, jint p6, jint p7, jint p8, jdouble p9, jdouble p10, jdouble p11, jdouble p12) { return call_method<"Scale", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> makePrimitive(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return call_method<"makePrimitive", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(p1, p2, p3); }
	jni::ref<sun::java2d::loops::GraphicsPrimitive> traceWrap() { return call_method<"traceWrap", jni::ref<sun::java2d::loops::GraphicsPrimitive>>(); }

protected:

	ScaledBlit(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_SCALEDBLIT
