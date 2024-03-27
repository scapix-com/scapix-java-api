// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/jar/JarFile.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jar { class URLJarFile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jar::URLJarFile>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jar/URLJarFile";
	using base_classes = std::tuple<scapix::java_api::java::util::jar::JarFile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#include <scapix/java_api/java/util/zip/ZipEntry.h>
#include <scapix/java_api/sun/net/www/protocol/jar/URLJarFile_URLJarFileCloseController.h>
#include <scapix/java_api/sun/net/www/protocol/jar/URLJarFileCallBack.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::jar::URLJarFile : public jni::object_base<"sun/net/www/protocol/jar/URLJarFile",
	java::util::jar::JarFile>
{
public:

	using URLJarFileCloseController = URLJarFile_URLJarFileCloseController;

	static jni::ref<sun::net::www::protocol::jar::URLJarFile> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<sun::net::www::protocol::jar::URLJarFile> new_object(jni::ref<java::io::File> file, jni::ref<sun::net::www::protocol::jar::URLJarFile_URLJarFileCloseController> closeController) { return base_::new_object(file, closeController); }
	jni::ref<java::util::zip::ZipEntry> getEntry(jni::ref<java::lang::String> name) { return call_method<"getEntry", jni::ref<java::util::zip::ZipEntry>>(name); }
	jni::ref<java::util::jar::Manifest> getManifest() { return call_method<"getManifest", jni::ref<java::util::jar::Manifest>>(); }
	void close() { return call_method<"close", void>(); }
	static void setCallBack(jni::ref<sun::net::www::protocol::jar::URLJarFileCallBack> cb) { return call_static_method<"setCallBack", void>(cb); }

protected:

	URLJarFile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE
