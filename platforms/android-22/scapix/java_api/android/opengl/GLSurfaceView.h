// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/SurfaceView.h>
#include <scapix/java_api/android/view/SurfaceHolder_Callback.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_FWD
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::opengl { class GLSurfaceView; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::opengl::GLSurfaceView>
{
	static constexpr fixed_string class_name = "android/opengl/GLSurfaceView";
	using base_classes = std::tuple<scapix::java_api::android::view::SurfaceView, scapix::java_api::android::view::SurfaceHolder_Callback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW)
#define SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/opengl/GLSurfaceView_EGLConfigChooser.h>
#include <scapix/java_api/android/opengl/GLSurfaceView_EGLContextFactory.h>
#include <scapix/java_api/android/opengl/GLSurfaceView_EGLWindowSurfaceFactory.h>
#include <scapix/java_api/android/opengl/GLSurfaceView_GLWrapper.h>
#include <scapix/java_api/android/opengl/GLSurfaceView_Renderer.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/SurfaceHolder.h>
#include <scapix/java_api/java/lang/Runnable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::opengl::GLSurfaceView : public jni::object_base<"android/opengl/GLSurfaceView",
	android::view::SurfaceView,
	android::view::SurfaceHolder_Callback>
{
public:

	using EGLConfigChooser = GLSurfaceView_EGLConfigChooser;
	using EGLWindowSurfaceFactory = GLSurfaceView_EGLWindowSurfaceFactory;
	using EGLContextFactory = GLSurfaceView_EGLContextFactory;
	using Renderer = GLSurfaceView_Renderer;
	using GLWrapper = GLSurfaceView_GLWrapper;

	static jint DEBUG_CHECK_GL_ERROR() { return get_static_field<"DEBUG_CHECK_GL_ERROR", jint>(); }
	static jint DEBUG_LOG_GL_CALLS() { return get_static_field<"DEBUG_LOG_GL_CALLS", jint>(); }
	static jint RENDERMODE_CONTINUOUSLY() { return get_static_field<"RENDERMODE_CONTINUOUSLY", jint>(); }
	static jint RENDERMODE_WHEN_DIRTY() { return get_static_field<"RENDERMODE_WHEN_DIRTY", jint>(); }

	static jni::ref<android::opengl::GLSurfaceView> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::opengl::GLSurfaceView> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	void setGLWrapper(jni::ref<android::opengl::GLSurfaceView_GLWrapper> glWrapper) { return call_method<"setGLWrapper", void>(glWrapper); }
	void setDebugFlags(jint debugFlags) { return call_method<"setDebugFlags", void>(debugFlags); }
	jint getDebugFlags() { return call_method<"getDebugFlags", jint>(); }
	void setPreserveEGLContextOnPause(jboolean preserveOnPause) { return call_method<"setPreserveEGLContextOnPause", void>(preserveOnPause); }
	jboolean getPreserveEGLContextOnPause() { return call_method<"getPreserveEGLContextOnPause", jboolean>(); }
	void setRenderer(jni::ref<android::opengl::GLSurfaceView_Renderer> renderer) { return call_method<"setRenderer", void>(renderer); }
	void setEGLContextFactory(jni::ref<android::opengl::GLSurfaceView_EGLContextFactory> factory) { return call_method<"setEGLContextFactory", void>(factory); }
	void setEGLWindowSurfaceFactory(jni::ref<android::opengl::GLSurfaceView_EGLWindowSurfaceFactory> factory) { return call_method<"setEGLWindowSurfaceFactory", void>(factory); }
	void setEGLConfigChooser(jni::ref<android::opengl::GLSurfaceView_EGLConfigChooser> configChooser) { return call_method<"setEGLConfigChooser", void>(configChooser); }
	void setEGLConfigChooser(jboolean needDepth) { return call_method<"setEGLConfigChooser", void>(needDepth); }
	void setEGLConfigChooser(jint redSize, jint greenSize, jint blueSize, jint alphaSize, jint depthSize, jint stencilSize) { return call_method<"setEGLConfigChooser", void>(redSize, greenSize, blueSize, alphaSize, depthSize, stencilSize); }
	void setEGLContextClientVersion(jint version) { return call_method<"setEGLContextClientVersion", void>(version); }
	void setRenderMode(jint renderMode) { return call_method<"setRenderMode", void>(renderMode); }
	jint getRenderMode() { return call_method<"getRenderMode", jint>(); }
	void requestRender() { return call_method<"requestRender", void>(); }
	void surfaceCreated(jni::ref<android::view::SurfaceHolder> holder) { return call_method<"surfaceCreated", void>(holder); }
	void surfaceDestroyed(jni::ref<android::view::SurfaceHolder> holder) { return call_method<"surfaceDestroyed", void>(holder); }
	void surfaceChanged(jni::ref<android::view::SurfaceHolder> holder, jint format, jint w, jint h) { return call_method<"surfaceChanged", void>(holder, format, w, h); }
	void onPause() { return call_method<"onPause", void>(); }
	void onResume() { return call_method<"onResume", void>(); }
	void queueEvent(jni::ref<java::lang::Runnable> r) { return call_method<"queueEvent", void>(r); }

protected:

	GLSurfaceView(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OPENGL_GLSURFACEVIEW
