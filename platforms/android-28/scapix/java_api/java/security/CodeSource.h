// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class CodeSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::CodeSource>
{
	static constexpr fixed_string class_name = "java/security/CodeSource";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/security/CodeSigner.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::CodeSource : public jni::object_base<"java/security/CodeSource",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::security::CodeSource> new_object(jni::ref<java::net::URL> url, jni::ref<jni::array<java::security::cert::Certificate>> certs) { return base_::new_object(url, certs); }
	static jni::ref<java::security::CodeSource> new_object(jni::ref<java::net::URL> url, jni::ref<jni::array<java::security::CodeSigner>> signers) { return base_::new_object(url, signers); }
	jni::ref<java::net::URL> getLocation() { return call_method<"getLocation", jni::ref<java::net::URL>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getCertificates() { return call_method<"getCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<jni::array<java::security::CodeSigner>> getCodeSigners() { return call_method<"getCodeSigners", jni::ref<jni::array<java::security::CodeSigner>>>(); }
	jboolean implies(jni::ref<java::security::CodeSource> codesource) { return call_method<"implies", jboolean>(codesource); }

protected:

	CodeSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CODESOURCE