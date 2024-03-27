// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/MaskFill.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class MaskFill_General; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::MaskFill_General>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/MaskFill$General";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::MaskFill>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/loops/CompositeType.h>
#include <scapix/java_api/sun/java2d/loops/SurfaceType.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::MaskFill_General : public jni::object_base<"sun/java2d/loops/MaskFill$General",
	sun::java2d::loops::MaskFill>
{
public:

	static jni::ref<sun::java2d::loops::MaskFill_General> new_object(jni::ref<sun::java2d::loops::SurfaceType> p1, jni::ref<sun::java2d::loops::CompositeType> p2, jni::ref<sun::java2d::loops::SurfaceType> p3) { return base_::new_object(p1, p2, p3); }
	void MaskFill(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jint p4, jint p5, jint p6, jint p7, jni::ref<jni::array<jbyte>> p8, jint p9, jint p10) { return call_method<"MaskFill", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }

protected:

	MaskFill_General(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_MASKFILL_GENERAL
