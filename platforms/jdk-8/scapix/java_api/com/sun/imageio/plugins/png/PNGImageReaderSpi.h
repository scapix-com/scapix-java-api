// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/ImageReaderSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::png { class PNGImageReaderSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::png::PNGImageReaderSpi>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/png/PNGImageReaderSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::ImageReaderSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/javax/imageio/ImageReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::png::PNGImageReaderSpi : public jni::object_base<"com/sun/imageio/plugins/png/PNGImageReaderSpi",
	javax::imageio::spi::ImageReaderSpi>
{
public:

	static jni::ref<com::sun::imageio::plugins::png::PNGImageReaderSpi> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getDescription(jni::ref<java::util::Locale> p1) { return call_method<"getDescription", jni::ref<java::lang::String>>(p1); }
	jboolean canDecodeInput(jni::ref<java::lang::Object> p1) { return call_method<"canDecodeInput", jboolean>(p1); }
	jni::ref<javax::imageio::ImageReader> createReaderInstance(jni::ref<java::lang::Object> p1) { return call_method<"createReaderInstance", jni::ref<javax::imageio::ImageReader>>(p1); }

protected:

	PNGImageReaderSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_PNG_PNGIMAGEREADERSPI
