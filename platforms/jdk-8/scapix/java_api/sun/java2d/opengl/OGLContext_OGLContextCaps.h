// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/pipe/hw/ContextCapabilities.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::opengl { class OGLContext_OGLContextCaps; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::opengl::OGLContext_OGLContextCaps>
{
	static constexpr fixed_string class_name = "sun/java2d/opengl/OGLContext$OGLContextCaps";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::pipe::hw::ContextCapabilities>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS)
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::opengl::OGLContext_OGLContextCaps : public jni::object_base<"sun/java2d/opengl/OGLContext$OGLContextCaps",
	sun::java2d::pipe::hw::ContextCapabilities>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	OGLContext_OGLContextCaps(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_OGLCONTEXT_OGLCONTEXTCAPS
