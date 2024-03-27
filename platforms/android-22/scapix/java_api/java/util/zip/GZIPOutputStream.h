// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/DeflaterOutputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class GZIPOutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::GZIPOutputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/GZIPOutputStream";
	using base_classes = std::tuple<scapix::java_api::java::util::zip::DeflaterOutputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::GZIPOutputStream : public jni::object_base<"java/util/zip/GZIPOutputStream",
	java::util::zip::DeflaterOutputStream>
{
public:

	static jni::ref<java::util::zip::GZIPOutputStream> new_object(jni::ref<java::io::OutputStream> os) { return base_::new_object(os); }
	static jni::ref<java::util::zip::GZIPOutputStream> new_object(jni::ref<java::io::OutputStream> os, jboolean syncFlush) { return base_::new_object(os, syncFlush); }
	static jni::ref<java::util::zip::GZIPOutputStream> new_object(jni::ref<java::io::OutputStream> os, jint bufferSize) { return base_::new_object(os, bufferSize); }
	static jni::ref<java::util::zip::GZIPOutputStream> new_object(jni::ref<java::io::OutputStream> os, jint bufferSize, jboolean syncFlush) { return base_::new_object(os, bufferSize, syncFlush); }
	void finish() { return call_method<"finish", void>(); }
	void write(jni::ref<jni::array<jbyte>> buffer, jint off, jint nbytes) { return call_method<"write", void>(buffer, off, nbytes); }

protected:

	GZIPOutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_GZIPOUTPUTSTREAM