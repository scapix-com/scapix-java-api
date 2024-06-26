// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/ssl/X509HostnameVerifier.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::ssl { class AbstractVerifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::ssl::AbstractVerifier>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/ssl/AbstractVerifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::ssl::X509HostnameVerifier>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>
#include <scapix/java_api/javax/net/ssl/SSLSocket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::ssl::AbstractVerifier : public jni::object_base<"org/apache/http/conn/ssl/AbstractVerifier",
	java::lang::Object,
	org::apache::http::conn::ssl::X509HostnameVerifier>
{
public:

	static jni::ref<org::apache::http::conn::ssl::AbstractVerifier> new_object() { return base_::new_object(); }
	void verify(jni::ref<java::lang::String> host, jni::ref<javax::net::ssl::SSLSocket> ssl) { return call_method<"verify", void>(host, ssl); }
	jboolean verify(jni::ref<java::lang::String> host, jni::ref<javax::net::ssl::SSLSession> session) { return call_method<"verify", jboolean>(host, session); }
	void verify(jni::ref<java::lang::String> host, jni::ref<java::security::cert::X509Certificate> cert) { return call_method<"verify", void>(host, cert); }
	void verify(jni::ref<java::lang::String> host, jni::ref<jni::array<java::lang::String>> cns, jni::ref<jni::array<java::lang::String>> subjectAlts, jboolean strictWithSubDomains) { return call_method<"verify", void>(host, cns, subjectAlts, strictWithSubDomains); }
	static jboolean acceptableCountryWildcard(jni::ref<java::lang::String> cn) { return call_static_method<"acceptableCountryWildcard", jboolean>(cn); }
	static jni::ref<jni::array<java::lang::String>> getCNs(jni::ref<java::security::cert::X509Certificate> cert) { return call_static_method<"getCNs", jni::ref<jni::array<java::lang::String>>>(cert); }
	static jni::ref<jni::array<java::lang::String>> getDNSSubjectAlts(jni::ref<java::security::cert::X509Certificate> cert) { return call_static_method<"getDNSSubjectAlts", jni::ref<jni::array<java::lang::String>>>(cert); }
	static jint countDots(jni::ref<java::lang::String> s) { return call_static_method<"countDots", jint>(s); }

protected:

	AbstractVerifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SSL_ABSTRACTVERIFIER
