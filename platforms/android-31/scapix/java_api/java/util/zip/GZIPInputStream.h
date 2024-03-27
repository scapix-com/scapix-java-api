// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/InflaterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class GZIPInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::GZIPInputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/GZIPInputStream";
	using base_classes = std::tuple<scapix::java_api::java::util::zip::InflaterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::GZIPInputStream : public jni::object_base<"java/util/zip/GZIPInputStream",
	java::util::zip::InflaterInputStream>
{
public:

	static jint GZIP_MAGIC() { return get_static_field<"GZIP_MAGIC", jint>(); }

	static jni::ref<java::util::zip::GZIPInputStream> new_object(jni::ref<java::io::InputStream> in, jint size) { return base_::new_object(in, size); }
	static jni::ref<java::util::zip::GZIPInputStream> new_object(jni::ref<java::io::InputStream> in) { return base_::new_object(in); }
	jint read(jni::ref<jni::array<jbyte>> buf, jint off, jint len) { return call_method<"read", jint>(buf, off, len); }
	void close() { return call_method<"close", void>(); }

protected:

	GZIPInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPINPUTSTREAM
