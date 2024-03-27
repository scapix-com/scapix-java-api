// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::access { class JavaUtilZipFileAccess; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::access::JavaUtilZipFileAccess>
{
	static constexpr fixed_string class_name = "jdk/internal/access/JavaUtilZipFileAccess";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>
#include <scapix/java_api/java/util/zip/ZipFile.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::access::JavaUtilZipFileAccess : public jni::object_base<"jdk/internal/access/JavaUtilZipFileAccess",
	java::lang::Object>
{
public:

	jboolean startsWithLocHeader(jni::ref<java::util::zip::ZipFile> p1) { return call_method<"startsWithLocHeader", jboolean>(p1); }
	jni::ref<java::util::List> getManifestAndSignatureRelatedFiles(jni::ref<java::util::jar::JarFile> p1) { return call_method<"getManifestAndSignatureRelatedFiles", jni::ref<java::util::List>>(p1); }
	jni::ref<java::lang::String> getManifestName(jni::ref<java::util::jar::JarFile> p1, jboolean p2) { return call_method<"getManifestName", jni::ref<java::lang::String>>(p1, p2); }
	jint getManifestNum(jni::ref<java::util::jar::JarFile> p1) { return call_method<"getManifestNum", jint>(p1); }
	jni::ref<jni::array<jint>> getMetaInfVersions(jni::ref<java::util::jar::JarFile> p1) { return call_method<"getMetaInfVersions", jni::ref<jni::array<jint>>>(p1); }
	jni::ref<java::util::Enumeration> entries(jni::ref<java::util::zip::ZipFile> p1) { return call_method<"entries", jni::ref<java::util::Enumeration>>(p1); }
	jni::ref<java::util::stream::Stream> stream(jni::ref<java::util::zip::ZipFile> p1) { return call_method<"stream", jni::ref<java::util::stream::Stream>>(p1); }
	jni::ref<java::util::stream::Stream> entryNameStream(jni::ref<java::util::zip::ZipFile> p1) { return call_method<"entryNameStream", jni::ref<java::util::stream::Stream>>(p1); }
	void setExtraAttributes(jni::ref<java::util::zip::ZipEntry> p1, jint p2) { return call_method<"setExtraAttributes", void>(p1, p2); }
	jint getExtraAttributes(jni::ref<java::util::zip::ZipEntry> p1) { return call_method<"getExtraAttributes", jint>(p1); }

protected:

	JavaUtilZipFileAccess(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ACCESS_JAVAUTILZIPFILEACCESS
