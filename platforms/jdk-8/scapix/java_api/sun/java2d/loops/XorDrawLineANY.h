// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/loops/DrawLine.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::loops { class XorDrawLineANY; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::loops::XorDrawLineANY>
{
	static constexpr fixed_string class_name = "sun/java2d/loops/XorDrawLineANY";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::loops::DrawLine>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY)
#define SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/SunGraphics2D.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::loops::XorDrawLineANY : public jni::object_base<"sun/java2d/loops/XorDrawLineANY",
	sun::java2d::loops::DrawLine>
{
public:

	void DrawLine(jni::ref<sun::java2d::SunGraphics2D> p1, jni::ref<sun::java2d::SurfaceData> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"DrawLine", void>(p1, p2, p3, p4, p5, p6); }

protected:

	XorDrawLineANY(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_LOOPS_XORDRAWLINEANY
