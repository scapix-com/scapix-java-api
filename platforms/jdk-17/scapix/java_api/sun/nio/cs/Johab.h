// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/sun/nio/cs/HistoricallyNamedCharset.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class Johab; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::Johab>
{
	static constexpr fixed_string class_name = "sun/nio/cs/Johab";
	using base_classes = std::tuple<scapix::java_api::java::nio::charset::Charset, scapix::java_api::sun::nio::cs::HistoricallyNamedCharset>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB)
#define SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::cs::Johab : public jni::object_base<"sun/nio/cs/Johab",
	java::nio::charset::Charset,
	sun::nio::cs::HistoricallyNamedCharset>
{
public:

	static jni::ref<sun::nio::cs::Johab> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> historicalName() { return call_method<"historicalName", jni::ref<java::lang::String>>(); }
	jboolean contains(jni::ref<java::nio::charset::Charset> cs) { return call_method<"contains", jboolean>(cs); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }

protected:

	Johab(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_JOHAB
