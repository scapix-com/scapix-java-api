// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/ImageReaderWriterSpi.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::spi { class ImageWriterSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::spi::ImageWriterSpi>
{
	static constexpr fixed_string class_name = "javax/imageio/spi/ImageWriterSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::ImageReaderWriterSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/image/RenderedImage.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#include <scapix/java_api/javax/imageio/ImageWriter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::spi::ImageWriterSpi : public jni::object_base<"javax/imageio/spi/ImageWriterSpi",
	javax::imageio::spi::ImageReaderWriterSpi>
{
public:

	static jni::ref<jni::array<java::lang::Class>> STANDARD_OUTPUT_TYPE() { return get_static_field<"STANDARD_OUTPUT_TYPE", jni::ref<jni::array<java::lang::Class>>>(); }

	static jni::ref<javax::imageio::spi::ImageWriterSpi> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<jni::array<java::lang::String>> p5, jni::ref<java::lang::String> p6, jni::ref<jni::array<java::lang::Class>> p7, jni::ref<jni::array<java::lang::String>> p8, jboolean p9, jni::ref<java::lang::String> p10, jni::ref<java::lang::String> p11, jni::ref<jni::array<java::lang::String>> p12, jni::ref<jni::array<java::lang::String>> p13, jboolean p14, jni::ref<java::lang::String> p15, jni::ref<java::lang::String> p16, jni::ref<jni::array<java::lang::String>> p17, jni::ref<jni::array<java::lang::String>> p18) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
	jboolean isFormatLossless() { return call_method<"isFormatLossless", jboolean>(); }
	jni::ref<jni::array<java::lang::Class>> getOutputTypes() { return call_method<"getOutputTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	jboolean canEncodeImage(jni::ref<javax::imageio::ImageTypeSpecifier> p1) { return call_method<"canEncodeImage", jboolean>(p1); }
	jboolean canEncodeImage(jni::ref<java::awt::image::RenderedImage> p1) { return call_method<"canEncodeImage", jboolean>(p1); }
	jni::ref<javax::imageio::ImageWriter> createWriterInstance() { return call_method<"createWriterInstance", jni::ref<javax::imageio::ImageWriter>>(); }
	jni::ref<javax::imageio::ImageWriter> createWriterInstance(jni::ref<java::lang::Object> p1) { return call_method<"createWriterInstance", jni::ref<javax::imageio::ImageWriter>>(p1); }
	jboolean isOwnWriter(jni::ref<javax::imageio::ImageWriter> p1) { return call_method<"isOwnWriter", jboolean>(p1); }
	jni::ref<jni::array<java::lang::String>> getImageReaderSpiNames() { return call_method<"getImageReaderSpiNames", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	ImageWriterSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEWRITERSPI