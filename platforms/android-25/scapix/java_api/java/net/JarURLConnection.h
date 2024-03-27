// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/net/URLConnection.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION_FWD
#define SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class JarURLConnection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::JarURLConnection>
{
	static constexpr fixed_string class_name = "java/net/JarURLConnection";
	using base_classes = std::tuple<scapix::java_api::java::net::URLConnection>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION)
#define SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/jar/Attributes.h>
#include <scapix/java_api/java/util/jar/JarEntry.h>
#include <scapix/java_api/java/util/jar/JarFile.h>
#include <scapix/java_api/java/util/jar/Manifest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::JarURLConnection : public jni::object_base<"java/net/JarURLConnection",
	java::net::URLConnection>
{
public:

	jni::ref<java::net::URL> getJarFileURL() { return call_method<"getJarFileURL", jni::ref<java::net::URL>>(); }
	jni::ref<java::lang::String> getEntryName() { return call_method<"getEntryName", jni::ref<java::lang::String>>(); }
	jni::ref<java::util::jar::JarFile> getJarFile() { return call_method<"getJarFile", jni::ref<java::util::jar::JarFile>>(); }
	jni::ref<java::util::jar::Manifest> getManifest() { return call_method<"getManifest", jni::ref<java::util::jar::Manifest>>(); }
	jni::ref<java::util::jar::JarEntry> getJarEntry() { return call_method<"getJarEntry", jni::ref<java::util::jar::JarEntry>>(); }
	jni::ref<java::util::jar::Attributes> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::jar::Attributes>>(); }
	jni::ref<java::util::jar::Attributes> getMainAttributes() { return call_method<"getMainAttributes", jni::ref<java::util::jar::Attributes>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getCertificates() { return call_method<"getCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }

protected:

	JarURLConnection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_JARURLCONNECTION
