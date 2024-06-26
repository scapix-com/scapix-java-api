// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/ImageReader.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::png { class PNGImageReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::png::PNGImageReader>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/png/PNGImageReader";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::ImageReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>
#include <scapix/java_api/javax/imageio/ImageReadParam.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#include <scapix/java_api/javax/imageio/metadata/IIOMetadata.h>
#include <scapix/java_api/javax/imageio/spi/ImageReaderSpi.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::png::PNGImageReader : public jni::object_base<"com/sun/imageio/plugins/png/PNGImageReader",
	javax::imageio::ImageReader>
{
public:

	static jni::ref<com::sun::imageio::plugins::png::PNGImageReader> new_object(jni::ref<javax::imageio::spi::ImageReaderSpi> p1) { return base_::new_object(p1); }
	void setInput(jni::ref<java::lang::Object> p1, jboolean p2, jboolean p3) { return call_method<"setInput", void>(p1, p2, p3); }
	jint getNumImages(jboolean p1) { return call_method<"getNumImages", jint>(p1); }
	jint getWidth(jint p1) { return call_method<"getWidth", jint>(p1); }
	jint getHeight(jint p1) { return call_method<"getHeight", jint>(p1); }
	jni::ref<java::util::Iterator> getImageTypes(jint p1) { return call_method<"getImageTypes", jni::ref<java::util::Iterator>>(p1); }
	jni::ref<javax::imageio::ImageTypeSpecifier> getRawImageType(jint p1) { return call_method<"getRawImageType", jni::ref<javax::imageio::ImageTypeSpecifier>>(p1); }
	jni::ref<javax::imageio::ImageReadParam> getDefaultReadParam() { return call_method<"getDefaultReadParam", jni::ref<javax::imageio::ImageReadParam>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getStreamMetadata() { return call_method<"getStreamMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(); }
	jni::ref<javax::imageio::metadata::IIOMetadata> getImageMetadata(jint p1) { return call_method<"getImageMetadata", jni::ref<javax::imageio::metadata::IIOMetadata>>(p1); }
	jni::ref<java::awt::image::BufferedImage> read(jint p1, jni::ref<javax::imageio::ImageReadParam> p2) { return call_method<"read", jni::ref<java::awt::image::BufferedImage>>(p1, p2); }
	void reset() { return call_method<"reset", void>(); }

protected:

	PNGImageReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADER
