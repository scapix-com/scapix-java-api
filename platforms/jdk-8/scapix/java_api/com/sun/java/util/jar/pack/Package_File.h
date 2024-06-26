// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Package_File; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Package_File>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Package$File";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Class.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::util::jar::pack::Package_File : public jni::object_base<"com/sun/java/util/jar/pack/Package$File",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	jboolean isDirectory() { return call_method<"isDirectory", jboolean>(); }
	jboolean isClassStub() { return call_method<"isClassStub", jboolean>(); }
	jni::ref<com::sun::java::util::jar::pack::Package_Class> getStubClass() { return call_method<"getStubClass", jni::ref<com::sun::java::util::jar::pack::Package_Class>>(); }
	jboolean isTrivialClassStub() { return call_method<"isTrivialClassStub", jboolean>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<com::sun::java::util::jar::pack::Package_File> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::io::File> getFileName() { return call_method<"getFileName", jni::ref<java::io::File>>(); }
	jni::ref<java::io::File> getFileName(jni::ref<java::io::File> p1) { return call_method<"getFileName", jni::ref<java::io::File>>(p1); }
	void addBytes(jni::ref<jni::array<jbyte>> p1) { return call_method<"addBytes", void>(p1); }
	void addBytes(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"addBytes", void>(p1, p2, p3); }
	jlong getFileLength() { return call_method<"getFileLength", jlong>(); }
	void writeTo(jni::ref<java::io::OutputStream> p1) { return call_method<"writeTo", void>(p1); }
	void readFrom(jni::ref<java::io::InputStream> p1) { return call_method<"readFrom", void>(p1); }
	jni::ref<java::io::InputStream> getInputStream() { return call_method<"getInputStream", jni::ref<java::io::InputStream>>(); }

protected:

	Package_File(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_PACKAGE_FILE
