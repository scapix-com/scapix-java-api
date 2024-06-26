// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/image/RenderedImage.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::image { class WritableRenderedImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::image::WritableRenderedImage>
{
	static constexpr fixed_string class_name = "java/awt/image/WritableRenderedImage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::image::RenderedImage>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE)
#define SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/awt/image/TileObserver.h>
#include <scapix/java_api/java/awt/image/WritableRaster.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::image::WritableRenderedImage : public jni::object_base<"java/awt/image/WritableRenderedImage",
	java::lang::Object,
	java::awt::image::RenderedImage>
{
public:

	void addTileObserver(jni::ref<java::awt::image::TileObserver> p1) { return call_method<"addTileObserver", void>(p1); }
	void removeTileObserver(jni::ref<java::awt::image::TileObserver> p1) { return call_method<"removeTileObserver", void>(p1); }
	jni::ref<java::awt::image::WritableRaster> getWritableTile(jint p1, jint p2) { return call_method<"getWritableTile", jni::ref<java::awt::image::WritableRaster>>(p1, p2); }
	void releaseWritableTile(jint p1, jint p2) { return call_method<"releaseWritableTile", void>(p1, p2); }
	jboolean isTileWritable(jint p1, jint p2) { return call_method<"isTileWritable", jboolean>(p1, p2); }
	jni::ref<jni::array<java::awt::Point>> getWritableTileIndices() { return call_method<"getWritableTileIndices", jni::ref<jni::array<java::awt::Point>>>(); }
	jboolean hasTileWriters() { return call_method<"hasTileWriters", jboolean>(); }
	void setData(jni::ref<java::awt::image::Raster> p1) { return call_method<"setData", void>(p1); }

protected:

	WritableRenderedImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_IMAGE_WRITABLERENDEREDIMAGE
