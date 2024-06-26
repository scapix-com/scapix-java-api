// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/IIOServiceProvider.h>

#ifndef SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI_FWD
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::imageio::spi { class ImageTranscoderSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::imageio::spi::ImageTranscoderSpi>
{
	static constexpr fixed_string class_name = "javax/imageio/spi/ImageTranscoderSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::IIOServiceProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI)
#define SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/imageio/ImageTranscoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::imageio::spi::ImageTranscoderSpi : public jni::object_base<"javax/imageio/spi/ImageTranscoderSpi",
	javax::imageio::spi::IIOServiceProvider>
{
public:

	static jni::ref<javax::imageio::spi::ImageTranscoderSpi> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::lang::String> getReaderServiceProviderName() { return call_method<"getReaderServiceProviderName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getWriterServiceProviderName() { return call_method<"getWriterServiceProviderName", jni::ref<java::lang::String>>(); }
	jni::ref<javax::imageio::ImageTranscoder> createTranscoderInstance() { return call_method<"createTranscoderInstance", jni::ref<javax::imageio::ImageTranscoder>>(); }

protected:

	ImageTranscoderSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_IMAGEIO_SPI_IMAGETRANSCODERSPI
