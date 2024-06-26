// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterOutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class InflaterOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::InflaterOutputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/InflaterOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/util/zip/Inflater.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::InflaterOutputStream : public jni::object_base<"java/util/zip/InflaterOutputStream",
	java::io::FilterOutputStream>
{
public:

	static jni::ref<java::util::zip::InflaterOutputStream> new_object(jni::ref<java::io::OutputStream> out) { return base_::new_object(out); }
	static jni::ref<java::util::zip::InflaterOutputStream> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::util::zip::Inflater> inf) { return base_::new_object(out, inf); }
	static jni::ref<java::util::zip::InflaterOutputStream> new_object(jni::ref<java::io::OutputStream> out, jni::ref<java::util::zip::Inflater> inf, jint bufferSize) { return base_::new_object(out, inf, bufferSize); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void finish() { return call_method<"finish", void>(); }
	void write(jint b) { return call_method<"write", void>(b); }
	void write(jni::ref<jni::array<jbyte>> bytes, jint offset, jint byteCount) { return call_method<"write", void>(bytes, offset, byteCount); }

protected:

	InflaterOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_INFLATEROUTPUTSTREAM
