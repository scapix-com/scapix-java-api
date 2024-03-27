// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/ImageReaderWriterSpi.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::spi { class ImageReaderSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::spi::ImageReaderSpi>
{
	static constexpr fixed_string class_name = "javax/imageio/spi/ImageReaderSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::ImageReaderWriterSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/imageio/ImageReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::spi::ImageReaderSpi : public jni::object_base<"javax/imageio/spi/ImageReaderSpi",
	javax::imageio::spi::ImageReaderWriterSpi>
{
public:

	static jni::ref<jni::array<java::lang::Class>> STANDARD_INPUT_TYPE() { return get_static_field<"STANDARD_INPUT_TYPE", jni::ref<jni::array<java::lang::Class>>>(); }

	static jni::ref<javax::imageio::spi::ImageReaderSpi> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<jni::array<java::lang::String>> p5, jni::ref<java::lang::String> p6, jni::ref<jni::array<java::lang::Class>> p7, jni::ref<jni::array<java::lang::String>> p8, jboolean p9, jni::ref<java::lang::String> p10, jni::ref<java::lang::String> p11, jni::ref<jni::array<java::lang::String>> p12, jni::ref<jni::array<java::lang::String>> p13, jboolean p14, jni::ref<java::lang::String> p15, jni::ref<java::lang::String> p16, jni::ref<jni::array<java::lang::String>> p17, jni::ref<jni::array<java::lang::String>> p18) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18); }
	jni::ref<jni::array<java::lang::Class>> getInputTypes() { return call_method<"getInputTypes", jni::ref<jni::array<java::lang::Class>>>(); }
	jboolean canDecodeInput(jni::ref<java::lang::Object> p1) { return call_method<"canDecodeInput", jboolean>(p1); }
	jni::ref<javax::imageio::ImageReader> createReaderInstance() { return call_method<"createReaderInstance", jni::ref<javax::imageio::ImageReader>>(); }
	jni::ref<javax::imageio::ImageReader> createReaderInstance(jni::ref<java::lang::Object> p1) { return call_method<"createReaderInstance", jni::ref<javax::imageio::ImageReader>>(p1); }
	jboolean isOwnReader(jni::ref<javax::imageio::ImageReader> p1) { return call_method<"isOwnReader", jboolean>(p1); }
	jni::ref<jni::array<java::lang::String>> getImageWriterSpiNames() { return call_method<"getImageWriterSpiNames", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	ImageReaderSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGEREADERSPI