// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class HandshakeConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::HandshakeConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/HandshakeConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::HandshakeConsumer : public jni::object_base<"sun/security/ssl/HandshakeConsumer",
	java::lang::Object>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> p1, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> p2) { return call_method<"consume", void>(p1, p2); }

protected:

	HandshakeConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_HANDSHAKECONSUMER
