// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/Blit.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class OpaqueCopyAnyToArgb; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::OpaqueCopyAnyToArgb>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/OpaqueCopyAnyToArgb";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::Blit>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Composite.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/pipe/Region.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::OpaqueCopyAnyToArgb : public jni::object_base<"sun/java2d/loops/OpaqueCopyAnyToArgb",
	sun::java2d::loops::Blit>
{
public:

	void Blit(jni::ref<sun::java2d::SurfaceData> p1, jni::ref<sun::java2d::SurfaceData> p2, jni::ref<java::awt::Composite> p3, jni::ref<sun::java2d::pipe::Region> p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { return call_method<"Blit", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }

protected:

	OpaqueCopyAnyToArgb(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_OPAQUECOPYANYTOARGB
