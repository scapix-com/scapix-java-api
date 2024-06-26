// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class SSLSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::SSLSession>
{
	static constexpr fixed_string class_name = "javax/net/ssl/SSLSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/javax/net/ssl/SSLSessionContext.h>
#include <scapix/java_api/javax/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::SSLSession : public jni::object_base<"javax/net/ssl/SSLSession",
	java::lang::Object>
{
public:

	jint getApplicationBufferSize() { return call_method<"getApplicationBufferSize", jint>(); }
	jni::ref<java::lang::String> getCipherSuite() { return call_method<"getCipherSuite", jni::ref<java::lang::String>>(); }
	jlong getCreationTime() { return call_method<"getCreationTime", jlong>(); }
	jni::ref<jni::array<jbyte>> getId() { return call_method<"getId", jni::ref<jni::array<jbyte>>>(); }
	jlong getLastAccessedTime() { return call_method<"getLastAccessedTime", jlong>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getLocalCertificates() { return call_method<"getLocalCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<java::security::Principal> getLocalPrincipal() { return call_method<"getLocalPrincipal", jni::ref<java::security::Principal>>(); }
	jint getPacketBufferSize() { return call_method<"getPacketBufferSize", jint>(); }
	jni::ref<jni::array<javax::security::cert::X509Certificate>> getPeerCertificateChain() { return call_method<"getPeerCertificateChain", jni::ref<jni::array<javax::security::cert::X509Certificate>>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getPeerCertificates() { return call_method<"getPeerCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<java::lang::String> getPeerHost() { return call_method<"getPeerHost", jni::ref<java::lang::String>>(); }
	jint getPeerPort() { return call_method<"getPeerPort", jint>(); }
	jni::ref<java::security::Principal> getPeerPrincipal() { return call_method<"getPeerPrincipal", jni::ref<java::security::Principal>>(); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<javax::net::ssl::SSLSessionContext> getSessionContext() { return call_method<"getSessionContext", jni::ref<javax::net::ssl::SSLSessionContext>>(); }
	jni::ref<java::lang::Object> getValue(jni::ref<java::lang::String> p1) { return call_method<"getValue", jni::ref<java::lang::Object>>(p1); }
	jni::ref<jni::array<java::lang::String>> getValueNames() { return call_method<"getValueNames", jni::ref<jni::array<java::lang::String>>>(); }
	void invalidate() { return call_method<"invalidate", void>(); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	void putValue(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"putValue", void>(p1, p2); }
	void removeValue(jni::ref<java::lang::String> p1) { return call_method<"removeValue", void>(p1); }

protected:

	SSLSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_SSLSESSION
