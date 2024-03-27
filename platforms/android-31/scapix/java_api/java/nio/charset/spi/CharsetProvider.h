// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset::spi { class CharsetProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::spi::CharsetProvider>
{
	static constexpr fixed_string class_name = "java/nio/charset/spi/CharsetProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::spi::CharsetProvider : public jni::object_base<"java/nio/charset/spi/CharsetProvider",
	java::lang::Object>
{
public:

	jni::ref<java::util::Iterator> charsets() { return call_method<"charsets", jni::ref<java::util::Iterator>>(); }
	jni::ref<java::nio::charset::Charset> charsetForName(jni::ref<java::lang::String> p1) { return call_method<"charsetForName", jni::ref<java::nio::charset::Charset>>(p1); }

protected:

	CharsetProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER