// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/spi/CharsetProvider.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class StandardCharsets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::StandardCharsets>
{
	static constexpr fixed_string class_name = "sun/nio/cs/StandardCharsets";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::spi::CharsetProvider>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS)
#define SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/Iterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::StandardCharsets : public jni::object_base<"sun/nio/cs/StandardCharsets",
	java::nio::charset::spi::CharsetProvider>
{
public:

	static jni::ref<sun::nio::cs::StandardCharsets> new_object() { return base_::new_object(); }
	jni::ref<java::nio::charset::Charset> charsetForName(jni::ref<java::lang::String> charsetName) { return call_method<"charsetForName", jni::ref<java::nio::charset::Charset>>(charsetName); }
	jni::ref<java::util::Iterator> charsets() { return call_method<"charsets", jni::ref<java::util::Iterator>>(); }

protected:

	StandardCharsets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_STANDARDCHARSETS
