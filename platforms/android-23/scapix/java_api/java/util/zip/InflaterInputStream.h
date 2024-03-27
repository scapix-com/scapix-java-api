// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class InflaterInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::InflaterInputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/InflaterInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/util/zip/Inflater.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::InflaterInputStream : public jni::object_base<"java/util/zip/InflaterInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<java::util::zip::InflaterInputStream> new_object(jni::ref<java::io::InputStream> is) { return base_::new_object(is); }
	static jni::ref<java::util::zip::InflaterInputStream> new_object(jni::ref<java::io::InputStream> is, jni::ref<java::util::zip::Inflater> inflater) { return base_::new_object(is, inflater); }
	static jni::ref<java::util::zip::InflaterInputStream> new_object(jni::ref<java::io::InputStream> is, jni::ref<java::util::zip::Inflater> inflater, jint bufferSize) { return base_::new_object(is, inflater, bufferSize); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> buffer, jint byteOffset, jint byteCount) { return call_method<"read", jint>(buffer, byteOffset, byteCount); }
	jlong skip(jlong byteCount) { return call_method<"skip", jlong>(byteCount); }
	jint available() { return call_method<"available", jint>(); }
	void close() { return call_method<"close", void>(); }
	void mark(jint readlimit) { return call_method<"mark", void>(readlimit); }
	void reset() { return call_method<"reset", void>(); }
	jboolean markSupported() { return call_method<"markSupported", jboolean>(); }

protected:

	InflaterInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATERINPUTSTREAM