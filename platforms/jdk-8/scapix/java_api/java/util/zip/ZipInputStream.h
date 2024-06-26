// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/InflaterInputStream.h>
#include <scapix/java_api/java/util/zip/ZipConstants.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::zip { class ZipInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::zip::ZipInputStream>
{
	static constexpr fixed_string class_name = "java/util/zip/ZipInputStream";
	using base_classes = std::tuple<scapix::java_api::java::util::zip::InflaterInputStream, scapix::java_api::java::util::zip::ZipConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/nio/charset/Charset.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::zip::ZipInputStream : public jni::object_base<"java/util/zip/ZipInputStream",
	java::util::zip::InflaterInputStream,
	java::util::zip::ZipConstants>
{
public:

	static jni::ref<java::util::zip::ZipInputStream> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::zip::ZipInputStream> new_object(jni::ref<java::io::InputStream> p1, jni::ref<java::nio::charset::Charset> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::zip::ZipEntry> getNextEntry() { return call_method<"getNextEntry", jni::ref<java::util::zip::ZipEntry>>(); }
	void closeEntry() { return call_method<"closeEntry", void>(); }
	jint available() { return call_method<"available", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	jlong skip(jlong p1) { return call_method<"skip", jlong>(p1); }
	void close() { return call_method<"close", void>(); }

protected:

	ZipInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ZIP_ZIPINPUTSTREAM
