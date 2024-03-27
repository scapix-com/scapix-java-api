// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeProducer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ServerHello_T13HelloRetryRequestReproducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ServerHello_T13HelloRetryRequestReproducer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ServerHello$T13HelloRetryRequestReproducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ServerHello_T13HelloRetryRequestReproducer : public jni::object_base<"sun/security/ssl/ServerHello$T13HelloRetryRequestReproducer",
	java::lang::Object,
	sun::security::ssl::HandshakeProducer>
{
public:

	jni::ref<jni::array<jbyte>> produce(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message) { return call_method<"produce", jni::ref<jni::array<jbyte>>>(context, message); }

protected:

	ServerHello_T13HelloRetryRequestReproducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SERVERHELLO_T13HELLORETRYREQUESTREPRODUCER
