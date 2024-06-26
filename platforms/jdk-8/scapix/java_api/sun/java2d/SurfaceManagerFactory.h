// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class SurfaceManagerFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::SurfaceManagerFactory>
{
	static constexpr fixed_string class_name = "sun/java2d/SurfaceManagerFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY)
#define SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/awt/image/SunVolatileImage.h>
#include <scapix/java_api/sun/awt/image/VolatileSurfaceManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::SurfaceManagerFactory : public jni::object_base<"sun/java2d/SurfaceManagerFactory",
	java::lang::Object>
{
public:

	static jni::ref<sun::java2d::SurfaceManagerFactory> new_object() { return base_::new_object(); }
	static jni::ref<sun::java2d::SurfaceManagerFactory> getInstance() { return call_static_method<"getInstance", jni::ref<sun::java2d::SurfaceManagerFactory>>(); }
	static void setInstance(jni::ref<sun::java2d::SurfaceManagerFactory> p1) { return call_static_method<"setInstance", void>(p1); }
	jni::ref<sun::awt::image::VolatileSurfaceManager> createVolatileManager(jni::ref<sun::awt::image::SunVolatileImage> p1, jni::ref<java::lang::Object> p2) { return call_method<"createVolatileManager", jni::ref<sun::awt::image::VolatileSurfaceManager>>(p1, p2); }

protected:

	SurfaceManagerFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_SURFACEMANAGERFACTORY
