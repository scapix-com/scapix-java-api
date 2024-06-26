// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER_FWD
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::opengl { class GLSurfaceView_Renderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::opengl::GLSurfaceView_Renderer>
{
	static constexpr fixed_string class_name = "android/opengl/GLSurfaceView$Renderer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER)
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/microedition/khronos/egl/EGLConfig.h>
#include <scapix/java_api/javax/microedition/khronos/opengles/GL10.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::opengl::GLSurfaceView_Renderer : public jni::object_base<"android/opengl/GLSurfaceView$Renderer",
	java::lang::Object>
{
public:

	void onSurfaceCreated(jni::ref<javax::microedition::khronos::opengles::GL10> p1, jni::ref<javax::microedition::khronos::egl::EGLConfig> p2) { return call_method<"onSurfaceCreated", void>(p1, p2); }
	void onSurfaceChanged(jni::ref<javax::microedition::khronos::opengles::GL10> p1, jint p2, jint p3) { return call_method<"onSurfaceChanged", void>(p1, p2, p3); }
	void onDrawFrame(jni::ref<javax::microedition::khronos::opengles::GL10> p1) { return call_method<"onDrawFrame", void>(p1); }

protected:

	GLSurfaceView_Renderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_RENDERER
