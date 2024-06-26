// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/ImageWriterSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::plugins::bmp { class BMPImageWriterSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::plugins::bmp::BMPImageWriterSpi>
{
	static constexpr fixed_string class_name = "com/sun/imageio/plugins/bmp/BMPImageWriterSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::ImageWriterSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/javax/imageio/ImageTypeSpecifier.h>
#include <scapix/java_api/javax/imageio/ImageWriter.h>
#include <scapix/java_api/javax/imageio/spi/ServiceRegistry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::plugins::bmp::BMPImageWriterSpi : public jni::object_base<"com/sun/imageio/plugins/bmp/BMPImageWriterSpi",
	javax::imageio::spi::ImageWriterSpi>
{
public:

	static jni::ref<com::sun::imageio::plugins::bmp::BMPImageWriterSpi> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getDescription(jni::ref<java::util::Locale> p1) { return call_method<"getDescription", jni::ref<java::lang::String>>(p1); }
	void onRegistration(jni::ref<javax::imageio::spi::ServiceRegistry> p1, jni::ref<java::lang::Class> p2) { return call_method<"onRegistration", void>(p1, p2); }
	jboolean canEncodeImage(jni::ref<javax::imageio::ImageTypeSpecifier> p1) { return call_method<"canEncodeImage", jboolean>(p1); }
	jni::ref<javax::imageio::ImageWriter> createWriterInstance(jni::ref<java::lang::Object> p1) { return call_method<"createWriterInstance", jni::ref<javax::imageio::ImageWriter>>(p1); }

protected:

	BMPImageWriterSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_PLUGINS_BMP_BMPIMAGEWRITERSPI
