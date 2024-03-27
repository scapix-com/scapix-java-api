// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::charset { class Charset; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::charset::Charset>
{
	static constexpr fixed_string class_name = "java/nio/charset/Charset";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET)
#define SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/nio/CharBuffer.h>
#include <scapix/java_api/java/nio/charset/CharsetDecoder.h>
#include <scapix/java_api/java/nio/charset/CharsetEncoder.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/SortedMap.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::charset::Charset : public jni::object_base<"java/nio/charset/Charset",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jboolean isSupported(jni::ref<java::lang::String> p1) { return call_static_method<"isSupported", jboolean>(p1); }
	static jni::ref<java::nio::charset::Charset> forName(jni::ref<java::lang::String> p1) { return call_static_method<"forName", jni::ref<java::nio::charset::Charset>>(p1); }
	static jni::ref<java::util::SortedMap> availableCharsets() { return call_static_method<"availableCharsets", jni::ref<java::util::SortedMap>>(); }
	static jni::ref<java::nio::charset::Charset> defaultCharset() { return call_static_method<"defaultCharset", jni::ref<java::nio::charset::Charset>>(); }
	jni::ref<java::lang::String> name() { return call_method<"name", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::Set> aliases() { return call_method<"aliases", jni::ref<java::util::Set>>(); }
	jni::ref<java::lang::String> displayName() { return call_method<"displayName", jni::ref<java::lang::String>>(); }
	jboolean isRegistered() { return call_method<"isRegistered", jboolean>(); }
	jni::ref<java::lang::String> displayName(jni::ref<java::util::Locale> p1) { return call_method<"displayName", jni::ref<java::lang::String>>(p1); }
	jboolean contains(jni::ref<java::nio::charset::Charset> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::nio::charset::CharsetDecoder> newDecoder() { return call_method<"newDecoder", jni::ref<java::nio::charset::CharsetDecoder>>(); }
	jni::ref<java::nio::charset::CharsetEncoder> newEncoder() { return call_method<"newEncoder", jni::ref<java::nio::charset::CharsetEncoder>>(); }
	jboolean canEncode() { return call_method<"canEncode", jboolean>(); }
	jni::ref<java::nio::CharBuffer> decode(jni::ref<java::nio::ByteBuffer> p1) { return call_method<"decode", jni::ref<java::nio::CharBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> encode(jni::ref<java::nio::CharBuffer> p1) { return call_method<"encode", jni::ref<java::nio::ByteBuffer>>(p1); }
	jni::ref<java::nio::ByteBuffer> encode(jni::ref<java::lang::String> p1) { return call_method<"encode", jni::ref<java::nio::ByteBuffer>>(p1); }
	jint compareTo(jni::ref<java::nio::charset::Charset> p1) { return call_method<"compareTo", jint>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Charset(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_CHARSET_CHARSET
