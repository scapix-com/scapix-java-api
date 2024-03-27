// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/java2d/DisposerRecord.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::opengl { class WGLGraphicsConfig_WGLGCDisposerRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::opengl::WGLGraphicsConfig_WGLGCDisposerRecord>
{
	static constexpr fixed_string class_name = "sun/java2d/opengl/WGLGraphicsConfig$WGLGCDisposerRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::java2d::DisposerRecord>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD)
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::java2d::opengl::WGLGraphicsConfig_WGLGCDisposerRecord : public jni::object_base<"sun/java2d/opengl/WGLGraphicsConfig$WGLGCDisposerRecord",
	java::lang::Object,
	sun::java2d::DisposerRecord>
{
public:

	static jni::ref<sun::java2d::opengl::WGLGraphicsConfig_WGLGCDisposerRecord> new_object(jlong p1, jint p2) { return base_::new_object(p1, p2); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	WGLGraphicsConfig_WGLGCDisposerRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLGRAPHICSCONFIG_WGLGCDISPOSERRECORD