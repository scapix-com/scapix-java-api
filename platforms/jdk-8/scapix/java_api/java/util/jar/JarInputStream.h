// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/zip/ZipInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class JarInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::JarInputStream>
{
	static constexpr fixed_string class_name = "java/util/jar/JarInputStream";
	using base_classes = std::tuple<scapix::java_api::java::util::zip::ZipInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::jar::JarInputStream : public jni::object_base<"java/util/jar/JarInputStream",
	java::util::zip::ZipInputStream>
{
public:

	static jni::ref<java::util::jar::JarInputStream> new_object(jni::ref<java::io::InputStream> p1) { return base_::new_object(p1); }
	static jni::ref<java::util::jar::JarInputStream> new_object(jni::ref<java::io::InputStream> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<java::util::jar::Manifest> getManifest() { return call_method<"getManifest", jni::ref<java::util::jar::Manifest>>(); }
	jni::ref<java::util::zip::ZipEntry> getNextEntry() { return call_method<"getNextEntry", jni::ref<java::util::zip::ZipEntry>>(); }
	jni::ref<java::util::jar::JarEntry> getNextJarEntry() { return call_method<"getNextJarEntry", jni::ref<java::util::jar::JarEntry>>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }

protected:

	JarInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARINPUTSTREAM
