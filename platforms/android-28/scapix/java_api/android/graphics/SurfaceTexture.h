// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class SurfaceTexture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::SurfaceTexture>
{
	static constexpr fixed_string class_name = "android/graphics/SurfaceTexture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/SurfaceTexture_OnFrameAvailableListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/graphics/SurfaceTexture_OutOfResourcesException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::SurfaceTexture : public jni::object_base<"android/graphics/SurfaceTexture",
	java::lang::Object>
{
public:

	using OutOfResourcesException = SurfaceTexture_OutOfResourcesException;
	using OnFrameAvailableListener = SurfaceTexture_OnFrameAvailableListener;

	static jni::ref<android::graphics::SurfaceTexture> new_object(jint texName) { return base_::new_object(texName); }
	static jni::ref<android::graphics::SurfaceTexture> new_object(jint texName, jboolean singleBufferMode) { return base_::new_object(texName, singleBufferMode); }
	static jni::ref<android::graphics::SurfaceTexture> new_object(jboolean singleBufferMode) { return base_::new_object(singleBufferMode); }
	void setOnFrameAvailableListener(jni::ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener) { return call_method<"setOnFrameAvailableListener", void>(listener); }
	void setOnFrameAvailableListener(jni::ref<android::graphics::SurfaceTexture_OnFrameAvailableListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setOnFrameAvailableListener", void>(listener, handler); }
	void setDefaultBufferSize(jint width, jint height) { return call_method<"setDefaultBufferSize", void>(width, height); }
	void updateTexImage() { return call_method<"updateTexImage", void>(); }
	void releaseTexImage() { return call_method<"releaseTexImage", void>(); }
	void detachFromGLContext() { return call_method<"detachFromGLContext", void>(); }
	void attachToGLContext(jint texName) { return call_method<"attachToGLContext", void>(texName); }
	void getTransformMatrix(jni::ref<jni::array<jfloat>> mtx) { return call_method<"getTransformMatrix", void>(mtx); }
	jlong getTimestamp() { return call_method<"getTimestamp", jlong>(); }
	void release() { return call_method<"release", void>(); }
	jboolean isReleased() { return call_method<"isReleased", jboolean>(); }

protected:

	SurfaceTexture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_SURFACETEXTURE
