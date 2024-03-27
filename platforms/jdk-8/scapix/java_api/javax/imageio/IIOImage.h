// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio { class IIOImage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::IIOImage>
{
	static constexpr fixed_string class_name = "javax/imageio/IIOImage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/awt/image/RenderedImage.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::IIOImage : public jni::object_base<"javax/imageio/IIOImage",
	java::lang::Object>
{
public:

	static jni::ref<javax::imageio::IIOImage> new_object(jni::ref<java::awt::image::RenderedImage> p1, jni::ref<java::util::List> p2, jni::ref<javax::imageio::metadata::IIOMetadata> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<javax::imageio::IIOImage> new_object(jni::ref<java::awt::image::Raster> p1, jni::ref<java::util::List> p2, jni::ref<javax::imageio::metadata::IIOMetadata> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::awt::image::RenderedImage> getRenderedImage() { return call_method<"getRenderedImage", jni::ref<java::awt::image::RenderedImage>>(); }
	void setRenderedImage(jni::ref<java::awt::image::RenderedImage> p1) { return call_method<"setRenderedImage", void>(p1); }
	jboolean hasRaster() { return call_method<"hasRaster", jboolean>(); }
	jni::ref<java::awt::image::Raster> getRaster() { return call_method<"getRaster", jni::ref<java::awt::image::Raster>>(); }
	void setRaster(jni::ref<java::awt::image::Raster> p1) { return call_method<"setRaster", void>(p1); }
	jint getNumThumbnails() { return call_method<"getNumThumbnails", jint>(); }
	jni::ref<java::awt::image::BufferedImage> getThumbnail(jint p1) { return call_method<"getThumbnail", jni::ref<java::awt::image::BufferedImage>>(p1); }
	jni::ref<java::util::List> getThumbnails() { return call_method<"getThumbnails", jni::ref<java::util::List>>(); }
	void setThumbnails(jni::ref<java::util::List> p1) { return call_method<"setThumbnails", void>(p1); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getMetadata() { return call_method<"getMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(); }
	void setMetadata(jni::ref<javax::imageio::metadata::IIOMetadata> p1) { return call_method<"setMetadata", void>(p1); }

protected:

	IIOImage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IIOIMAGE