// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/jar/JarEntry.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::jar { class URLJarFile_URLJarFileEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::jar::URLJarFile_URLJarFileEntry>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/jar/URLJarFile$URLJarFileEntry";
	using base_classes = std::tuple<scapix::java_api::java::util::jar::JarEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/CodeSigner.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/jar/Attributes.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::jar::URLJarFile_URLJarFileEntry : public jni::object_base<"sun/net/www/protocol/jar/URLJarFile$URLJarFileEntry",
	java::util::jar::JarEntry>
{
public:

	jni::ref<java::util::jar::Attributes> getAttributes() { return call_method<"getAttributes", jni::ref<java::util::jar::Attributes>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getCertificates() { return call_method<"getCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<jni::array<java::security::CodeSigner>> getCodeSigners() { return call_method<"getCodeSigners", jni::ref<jni::array<java::security::CodeSigner>>>(); }

protected:

	URLJarFile_URLJarFileEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_JAR_URLJARFILE_URLJARFILEENTRY
