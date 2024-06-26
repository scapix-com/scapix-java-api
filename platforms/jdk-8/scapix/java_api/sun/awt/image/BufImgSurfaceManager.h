// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/image/SurfaceManager.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class BufImgSurfaceManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::BufImgSurfaceManager>
{
	static constexpr fixed_string class_name = "sun/awt/image/BufImgSurfaceManager";
	using base_classes = std::tuple<scapix::java_api::sun::awt::image::SurfaceManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::BufImgSurfaceManager : public jni::object_base<"sun/awt/image/BufImgSurfaceManager",
	sun::awt::image::SurfaceManager>
{
public:

	static jni::ref<sun::awt::image::BufImgSurfaceManager> new_object(jni::ref<java::awt::image::BufferedImage> p1) { return base_::new_object(p1); }
	jni::ref<sun::java2d::SurfaceData> getPrimarySurfaceData() { return call_method<"getPrimarySurfaceData", jni::ref<sun::java2d::SurfaceData>>(); }
	jni::ref<sun::java2d::SurfaceData> restoreContents() { return call_method<"restoreContents", jni::ref<sun::java2d::SurfaceData>>(); }

protected:

	BufImgSurfaceManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_BUFIMGSURFACEMANAGER
