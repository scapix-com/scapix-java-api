// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/java2d/opengl/WGLSurfaceData.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d::opengl { class WGLSurfaceData_WGLOffScreenSurfaceData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::opengl::WGLSurfaceData_WGLOffScreenSurfaceData>
{
	static constexpr fixed_string class_name = "sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData";
	using base_classes = std::tuple<scapix::java_api::sun::java2d::opengl::WGLSurfaceData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA)
#define SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/awt/windows/WComponentPeer.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#include <scapix/java_api/sun/java2d/opengl/WGLGraphicsConfig.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::opengl::WGLSurfaceData_WGLOffScreenSurfaceData : public jni::object_base<"sun/java2d/opengl/WGLSurfaceData$WGLOffScreenSurfaceData",
	sun::java2d::opengl::WGLSurfaceData>
{
public:

	static jni::ref<sun::java2d::opengl::WGLSurfaceData_WGLOffScreenSurfaceData> new_object(jni::ref<sun::awt::windows::WComponentPeer> p1, jni::ref<sun::java2d::opengl::WGLGraphicsConfig> p2, jint p3, jint p4, jni::ref<java::awt::Image> p5, jni::ref<java::awt::image::ColorModel> p6, jint p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<sun::java2d::SurfaceData> getReplacement() { return call_method<"getReplacement", jni::ref<sun::java2d::SurfaceData>>(); }
	jni::ref<java::awt::Rectangle> getBounds() { return call_method<"getBounds", jni::ref<java::awt::Rectangle>>(); }
	jni::ref<java::lang::Object> getDestination() { return call_method<"getDestination", jni::ref<java::lang::Object>>(); }

protected:

	WGLSurfaceData_WGLOffScreenSurfaceData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_OPENGL_WGLSURFACEDATA_WGLOFFSCREENSURFACEDATA
