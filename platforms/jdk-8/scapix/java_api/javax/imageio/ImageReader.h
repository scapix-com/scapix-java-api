// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio { class ImageReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::ImageReader>
{
	static constexpr fixed_string class_name = "javax/imageio/ImageReader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/awt/image/Raster.h>
#include <scapix/java_api/java/awt/image/RenderedImage.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/javax/imageio/IIOImage.h>
#include <scapix/java_api/javax/imageio/ImageReadParam.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#include <scapix/java_api/javax/imageio/event/IIOReadProgressListener.h>
#include <scapix/java_api/javax/imageio/event/IIOReadUpdateListener.h>
#include <scapix/java_api/javax/imageio/event/IIOReadWarningListener.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>
#include <scapix/java_api/javax/imageio/spi/ImageReaderSpi.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::ImageReader : public jni::object_base<"javax/imageio/ImageReader",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> getFormatName() { return call_method<"getFormatName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::imageio::spi::ImageReaderSpi> getOriginatingProvider() { return call_method<"getOriginatingProvider", jni::ref<javax::imageio::spi::ImageReaderSpi>>(); }
	void setInput(jni::ref<java::lang::Object> p1, jboolean p2, jboolean p3) { return call_method<"setInput", void>(p1, p2, p3); }
	void setInput(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"setInput", void>(p1, p2); }
	void setInput(jni::ref<java::lang::Object> p1) { return call_method<"setInput", void>(p1); }
	jni::ref<java::lang::Object> getInput() { return call_method<"getInput", jni::ref<java::lang::Object>>(); }
	jboolean isSeekForwardOnly() { return call_method<"isSeekForwardOnly", jboolean>(); }
	jboolean isIgnoringMetadata() { return call_method<"isIgnoringMetadata", jboolean>(); }
	jint getMinIndex() { return call_method<"getMinIndex", jint>(); }
	jni::ref<jni::array<java::util::Locale>> getAvailableLocales() { return call_method<"getAvailableLocales", jni::ref<jni::array<java::util::Locale>>>(); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	jint getNumImages(jboolean p1) { return call_method<"getNumImages", jint>(p1); }
	jint getWidth(jint p1) { return call_method<"getWidth", jint>(p1); }
	jint getHeight(jint p1) { return call_method<"getHeight", jint>(p1); }
	jboolean isRandomAccessEasy(jint p1) { return call_method<"isRandomAccessEasy", jboolean>(p1); }
	jfloat getAspectRatio(jint p1) { return call_method<"getAspectRatio", jfloat>(p1); }
	jni::ref<javax::imageio::ImageTypeSpecifier> getRawImageType(jint p1) { return call_method<"getRawImageType", jni::ref<javax::imageio::ImageTypeSpecifier>>(p1); }
	jni::ref<java::util::Iterator> getImageTypes(jint p1) { return call_method<"getImageTypes", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<javax::imageio::ImageReadParam> getDefaultReadParam() { return call_method<"getDefaultReadParam", jni::ref<javax::imageio::ImageReadParam>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getStreamMetadata() { return call_method<"getStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getStreamMetadata(jni::ref<java::lang::String> p1, jni::ref<java::util::Set> p2) { return call_method<"getStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1, p2); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getImageMetadata(jint p1) { return call_method<"getImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getImageMetadata(jint p1, jni::ref<java::lang::String> p2, jni::ref<java::util::Set> p3) { return call_method<"getImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1, p2, p3); }
	jni::ref<java::awt::image::BufferedImage> read(jint p1) { return call_method<"read", jni::ref<java::awt::image::BufferedImage>>(p1); }
	jni::ref<java::awt::image::BufferedImage> read(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"read", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	jni::ref<javax::imageio::IIOImage> readAll(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"readAll", jni::ref<javax::imageio::IIOImage>>(p1, p2); }
	jni::ref<java::util::Iterator> readAll(jni::ref<java::util::Iterator> p1) { return call_method<"readAll", jni::ref<java::util::Iterator>>(p1); }
	jboolean canReadRaster() { return call_method<"canReadRaster", jboolean>(); }
	jni::ref<java::awt::image::Raster> readRaster(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"readRaster", jni::ref<java::awt::image::Raster>>(p1, p2); }
	jboolean isImageTiled(jint p1) { return call_method<"isImageTiled", jboolean>(p1); }
	jint getTileWidth(jint p1) { return call_method<"getTileWidth", jint>(p1); }
	jint getTileHeight(jint p1) { return call_method<"getTileHeight", jint>(p1); }
	jint getTileGridXOffset(jint p1) { return call_method<"getTileGridXOffset", jint>(p1); }
	jint getTileGridYOffset(jint p1) { return call_method<"getTileGridYOffset", jint>(p1); }
	jni::ref<java::awt::image::BufferedImage> readTile(jint p1, jint p2, jint p3) { return call_method<"readTile", jni::ref<java::awt::image::BufferedImage>>(p1, p2, p3); }
	jni::ref<java::awt::image::Raster> readTileRaster(jint p1, jint p2, jint p3) { return call_method<"readTileRaster", jni::ref<java::awt::image::Raster>>(p1, p2, p3); }
	jni::ref<java::awt::image::RenderedImage> readAsRenderedImage(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"readAsRenderedImage", jni::ref<java::awt::image::RenderedImage>>(p1, p2); }
	jboolean readerSupportsThumbnails() { return call_method<"readerSupportsThumbnails", jboolean>(); }
	jboolean hasThumbnails(jint p1) { return call_method<"hasThumbnails", jboolean>(p1); }
	jint getNumThumbnails(jint p1) { return call_method<"getNumThumbnails", jint>(p1); }
	jint getThumbnailWidth(jint p1, jint p2) { return call_method<"getThumbnailWidth", jint>(p1, p2); }
	jint getThumbnailHeight(jint p1, jint p2) { return call_method<"getThumbnailHeight", jint>(p1, p2); }
	jni::ref<java::awt::image::BufferedImage> readThumbnail(jint p1, jint p2) { return call_method<"readThumbnail", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	void abort() { return call_method<"abort", void>(); }
	void addIIOReadWarningListener(jni::ref<javax::imageio::event::IIOReadWarningListener> p1) { return call_method<"addIIOReadWarningListener", void>(p1); }
	void removeIIOReadWarningListener(jni::ref<javax::imageio::event::IIOReadWarningListener> p1) { return call_method<"removeIIOReadWarningListener", void>(p1); }
	void removeAllIIOReadWarningListeners() { return call_method<"removeAllIIOReadWarningListeners", void>(); }
	void addIIOReadProgressListener(jni::ref<javax::imageio::event::IIOReadProgressListener> p1) { return call_method<"addIIOReadProgressListener", void>(p1); }
	void removeIIOReadProgressListener(jni::ref<javax::imageio::event::IIOReadProgressListener> p1) { return call_method<"removeIIOReadProgressListener", void>(p1); }
	void removeAllIIOReadProgressListeners() { return call_method<"removeAllIIOReadProgressListeners", void>(); }
	void addIIOReadUpdateListener(jni::ref<javax::imageio::event::IIOReadUpdateListener> p1) { return call_method<"addIIOReadUpdateListener", void>(p1); }
	void removeIIOReadUpdateListener(jni::ref<javax::imageio::event::IIOReadUpdateListener> p1) { return call_method<"removeIIOReadUpdateListener", void>(p1); }
	void removeAllIIOReadUpdateListeners() { return call_method<"removeAllIIOReadUpdateListeners", void>(); }
	void reset() { return call_method<"reset", void>(); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	ImageReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_IMAGEREADER
