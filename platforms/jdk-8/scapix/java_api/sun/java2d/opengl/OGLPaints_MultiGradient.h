// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/opengl/OGLPaints.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::opengl { class OGLPaints_MultiGradient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::opengl::OGLPaints_MultiGradient>
{
	static constexpr fixed_string class_name = "sun/java2d/opengl/OGLPaints$MultiGradient";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::opengl::OGLPaints>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT)
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::opengl::OGLPaints_MultiGradient : public jni::object_base<"sun/java2d/opengl/OGLPaints$MultiGradient",
	sun::java2d::opengl::OGLPaints>
{
public:


protected:

	OGLPaints_MultiGradient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLPAINTS_MULTIGRADIENT
