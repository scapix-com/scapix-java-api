// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www { class MeteredStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::MeteredStream>
{
	static constexpr fixed_string class_name = "sun/net/www/MeteredStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM)
#define SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/sun/net/ProgressSource.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::MeteredStream : public jni::object_base<"sun/net/www/MeteredStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<sun::net::www::MeteredStream> new_object(jni::ref<java::io::InputStream> is, jni::ref<sun::net::ProgressSource> pi, jlong expected) { return base_::new_object(is, pi, expected); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	jlong skip(jlong n) { return call_method<"skip", jlong>(n); }
	void close() { return call_method<"close", void>(); }
	jint available() { return call_method<"available", jint>(); }
	void mark(jint readLimit) { return call_method<"mark", void>(readLimit); }
	void reset() { return call_method<"reset", void>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }
	void lock() { return call_method<"lock", void>(); }
	void unlock() { return call_method<"unlock", void>(); }
	jboolean isLockHeldByCurrentThread() { return call_method<"isLockHeldByCurrentThread", jboolean>(); }

protected:

	MeteredStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_METEREDSTREAM
