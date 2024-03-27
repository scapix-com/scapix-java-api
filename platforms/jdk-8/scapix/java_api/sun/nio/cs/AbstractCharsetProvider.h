// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/spi/CharsetProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class AbstractCharsetProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::AbstractCharsetProvider>
{
	static constexpr fixed_string class_name = "sun/nio/cs/AbstractCharsetProvider";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::spi::CharsetProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER)
#define SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::AbstractCharsetProvider : public jni::object_base<"sun/nio/cs/AbstractCharsetProvider",
	java::nio::charset::spi::CharsetProvider>
{
public:

	jni::ref<java::nio::charset::Charset> charsetForName(jni::ref<java::lang::String> p1) { return call_method<"charsetForName", jni::ref<java::nio::charset::Charset>>(p1); }
	jni::ref<java::util::Iterator> charsets() { return call_method<"charsets", jni::ref<java::util::Iterator>>(); }
	jni::ref<jni::array<java::lang::String>> aliases(jni::ref<java::lang::String> p1) { return call_method<"aliases", jni::ref<jni::array<java::lang::String>>>(p1); }

protected:

	AbstractCharsetProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_ABSTRACTCHARSETPROVIDER
