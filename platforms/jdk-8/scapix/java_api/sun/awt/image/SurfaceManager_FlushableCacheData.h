// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class SurfaceManager_FlushableCacheData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::SurfaceManager_FlushableCacheData>
{
	static constexpr fixed_string class_name = "sun/awt/image/SurfaceManager$FlushableCacheData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::SurfaceManager_FlushableCacheData : public jni::object_base<"sun/awt/image/SurfaceManager$FlushableCacheData",
	java::lang::Object>
{
public:

	jboolean flush(jboolean p1) { return call_method<"flush", jboolean>(p1); }

protected:

	SurfaceManager_FlushableCacheData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_SURFACEMANAGER_FLUSHABLECACHEDATA