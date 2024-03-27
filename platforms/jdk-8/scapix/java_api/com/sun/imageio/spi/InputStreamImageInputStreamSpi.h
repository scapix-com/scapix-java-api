// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/imageio/spi/ImageInputStreamSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI_FWD
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::imageio::spi { class InputStreamImageInputStreamSpi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::imageio::spi::InputStreamImageInputStreamSpi>
{
	static constexpr fixed_string class_name = "com/sun/imageio/spi/InputStreamImageInputStreamSpi";
	using base_classes = std::tuple<scapix::java_api::javax::imageio::spi::ImageInputStreamSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI)
#define SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/javax/imageio/stream/ImageInputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::imageio::spi::InputStreamImageInputStreamSpi : public jni::object_base<"com/sun/imageio/spi/InputStreamImageInputStreamSpi",
	javax::imageio::spi::ImageInputStreamSpi>
{
public:

	static jni::ref<com::sun::imageio::spi::InputStreamImageInputStreamSpi> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getDescription(jni::ref<java::util::Locale> p1) { return call_method<"getDescription", jni::ref<java::lang::String>>(p1); }
	jboolean canUseCacheFile() { return call_method<"canUseCacheFile", jboolean>(); }
	jboolean needsCacheFile() { return call_method<"needsCacheFile", jboolean>(); }
	jni::ref<javax::imageio::stream::ImageInputStream> createInputStreamInstance(jni::ref<java::lang::Object> p1, jboolean p2, jni::ref<java::io::File> p3) { return call_method<"createInputStreamInstance", jni::ref<javax::imageio::stream::ImageInputStream>>(p1, p2, p3); }

protected:

	InputStreamImageInputStreamSpi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_IMAGEIO_SPI_INPUTSTREAMIMAGEINPUTSTREAMSPI
