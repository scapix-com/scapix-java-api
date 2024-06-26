// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::java2d { class DestSurfaceProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::java2d::DestSurfaceProvider>
{
	static constexpr fixed_string class_name = "sun/java2d/DestSurfaceProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER)
#define SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/java2d/Surface.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::java2d::DestSurfaceProvider : public jni::object_base<"sun/java2d/DestSurfaceProvider",
	java::lang::Object>
{
public:

	jni::ref<sun::java2d::Surface> getDestSurface() { return call_method<"getDestSurface", jni::ref<sun::java2d::Surface>>(); }

protected:

	DestSurfaceProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_JAVA2D_DESTSURFACEPROVIDER
