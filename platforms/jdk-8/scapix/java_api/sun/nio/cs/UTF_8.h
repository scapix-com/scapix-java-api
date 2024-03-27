// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/nio/cs/Unicode.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::cs { class UTF_8; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::cs::UTF_8>
{
	static constexpr fixed_string class_name = "sun/nio/cs/UTF_8";
	using base_classes = std::tuple<scapix::java_api::sun::nio::cs::Unicode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8)
#define SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::nio::cs::UTF_8 : public jni::object_base<"sun/nio/cs/UTF_8",
	sun::nio::cs::Unicode>
{
public:

	static jni::ref<sun::nio::cs::UTF_8> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> historicalName() { return call_method<"historicalName", jni::ref<java::lang::String>>(); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }

protected:

	UTF_8(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CS_UTF_8
