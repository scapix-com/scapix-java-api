// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class CheckedInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::CheckedInputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/CheckedInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/util/zip/Checksum.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::CheckedInputStream : public jni::object_base<"java/util/zip/CheckedInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<java::util::zip::CheckedInputStream> new_object(jni::ref<java::io::InputStream> is, jni::ref<java::util::zip::Checksum> csum) { return base_::new_object(is, csum); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> buffer, jint byteOffset, jint byteCount) { return call_method<"read", jint>(buffer, byteOffset, byteCount); }
	jni::ref<java::util::zip::Checksum> getChecksum() { return call_method<"getChecksum", jni::ref<java::util::zip::Checksum>>(); }
	jlong skip(jlong byteCount) { return call_method<"skip", jlong>(byteCount); }

protected:

	CheckedInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM
