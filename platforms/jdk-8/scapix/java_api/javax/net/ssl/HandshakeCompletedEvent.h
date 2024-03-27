// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/EventObject.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net::ssl { class HandshakeCompletedEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::ssl::HandshakeCompletedEvent>
{
	static constexpr fixed_string class_name = "javax/net/ssl/HandshakeCompletedEvent";
	using base_classes = std::tuple<scapix::java_api::java::util::EventObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT)
#define SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/javax/net/ssl/SSLSession.h>
#include <scapix/java_api/javax/net/ssl/SSLSocket.h>
#include <scapix/java_api/javax/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::ssl::HandshakeCompletedEvent : public jni::object_base<"javax/net/ssl/HandshakeCompletedEvent",
	java::util::EventObject>
{
public:

	static jni::ref<javax::net::ssl::HandshakeCompletedEvent> new_object(jni::ref<javax::net::ssl::SSLSocket> p1, jni::ref<javax::net::ssl::SSLSession> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::net::ssl::SSLSession> getSession() { return call_method<"getSession", jni::ref<javax::net::ssl::SSLSession>>(); }
	jni::ref<java::lang::String> getCipherSuite() { return call_method<"getCipherSuite", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getLocalCertificates() { return call_method<"getLocalCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<jni::array<java::security::cert::Certificate>> getPeerCertificates() { return call_method<"getPeerCertificates", jni::ref<jni::array<java::security::cert::Certificate>>>(); }
	jni::ref<jni::array<javax::security::cert::X509Certificate>> getPeerCertificateChain() { return call_method<"getPeerCertificateChain", jni::ref<jni::array<javax::security::cert::X509Certificate>>>(); }
	jni::ref<java::security::Principal> getPeerPrincipal() { return call_method<"getPeerPrincipal", jni::ref<java::security::Principal>>(); }
	jni::ref<java::security::Principal> getLocalPrincipal() { return call_method<"getLocalPrincipal", jni::ref<java::security::Principal>>(); }
	jni::ref<javax::net::ssl::SSLSocket> getSocket() { return call_method<"getSocket", jni::ref<javax::net::ssl::SSLSocket>>(); }

protected:

	HandshakeCompletedEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SSL_HANDSHAKECOMPLETEDEVENT
