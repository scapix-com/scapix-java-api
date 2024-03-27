// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/image/WritableRaster.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE_FWD
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::image { class WritableRasterNative; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::image::WritableRasterNative>
{
	static constexpr fixed_string class_name = "sun/awt/image/WritableRasterNative";
	using base_classes = std::tuple<scapix::java_api::java::awt::image::WritableRaster>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE)
#define SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/ColorModel.h>
#include <scapix/java_api/java/awt/image/DataBuffer.h>
#include <scapix/java_api/java/awt/image/SampleModel.h>
#include <scapix/java_api/sun/java2d/SurfaceData.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::image::WritableRasterNative : public jni::object_base<"sun/awt/image/WritableRasterNative",
	java::awt::image::WritableRaster>
{
public:

	static jni::ref<sun::awt::image::WritableRasterNative> createNativeRaster(jni::ref<java::awt::image::SampleModel> p1, jni::ref<java::awt::image::DataBuffer> p2) { return call_static_method<"createNativeRaster", jni::ref<sun::awt::image::WritableRasterNative>>(p1, p2); }
	static jni::ref<sun::awt::image::WritableRasterNative> createNativeRaster(jni::ref<java::awt::image::ColorModel> p1, jni::ref<sun::java2d::SurfaceData> p2, jint p3, jint p4) { return call_static_method<"createNativeRaster", jni::ref<sun::awt::image::WritableRasterNative>>(p1, p2, p3, p4); }

protected:

	WritableRasterNative(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_IMAGE_WRITABLERASTERNATIVE