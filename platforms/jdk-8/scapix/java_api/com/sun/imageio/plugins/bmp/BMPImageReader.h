// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/ImageReader.h>
#include <scapix/java_api/com/sun/imageio/plugins/bmp/BMPConstants.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::bmp { class BMPImageReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::bmp::BMPImageReader>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/bmp/BMPImageReader";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::ImageReader, scapix::java_api::com::sun::imageio::plugins::bmp::BMPConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/javax/imageio/ImageReadParam.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>
#include <scapix/java_api/javax/imageio/spi/ImageReaderSpi.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::bmp::BMPImageReader : public jni::object_base<"com/sun/imageio/plugins/bmp/BMPImageReader",
	javax::imageio::ImageReader,
	com::sun::imageio::plugins::bmp::BMPConstants>
{
public:

	static jni::ref<com::sun::imageio::plugins::bmp::BMPImageReader> new_object(jni::ref<javax::imageio::spi::ImageReaderSpi> p1) { return base_::new_object(p1); }
	void setInput(jni::ref<java::lang::Object> p1, jboolean p2, jboolean p3) { return call_method<"setInput", void>(p1, p2, p3); }
	jint getNumImages(jboolean p1) { return call_method<"getNumImages", jint>(p1); }
	jint getWidth(jint p1) { return call_method<"getWidth", jint>(p1); }
	jint getHeight(jint p1) { return call_method<"getHeight", jint>(p1); }
	jni::ref<java::util::Iterator> getImageTypes(jint p1) { return call_method<"getImageTypes", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<javax::imageio::ImageReadParam> getDefaultReadParam() { return call_method<"getDefaultReadParam", jni::ref<javax::imageio::ImageReadParam>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getImageMetadata(jint p1) { return call_method<"getImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getStreamMetadata() { return call_method<"getStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(); }
	jboolean isRandomAccessEasy(jint p1) { return call_method<"isRandomAccessEasy", jboolean>(p1); }
	jni::ref<java::awt::image::BufferedImage> read(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"read", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	jboolean canReadRaster() { return call_method<"canReadRaster", jboolean>(); }
	jni::ref<java::awt::image::Raster> readRaster(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"readRaster", jni::ref<java::awt::image::Raster>>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }

protected:

	BMPImageReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEREADER
