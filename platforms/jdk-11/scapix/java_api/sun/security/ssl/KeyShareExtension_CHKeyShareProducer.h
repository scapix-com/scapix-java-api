// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/HandshakeProducer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class KeyShareExtension_CHKeyShareProducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::KeyShareExtension_CHKeyShareProducer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/KeyShareExtension$CHKeyShareProducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::HandshakeProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::KeyShareExtension_CHKeyShareProducer : public jni::object_base<"sun/security/ssl/KeyShareExtension$CHKeyShareProducer",
	java::lang::Object,
	sun::security::ssl::HandshakeProducer>
{
public:

	jni::ref<jni::array<jbyte>> produce(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message) { return call_method<"produce", jni::ref<jni::array<jbyte>>>(context, message); }

protected:

	KeyShareExtension_CHKeyShareProducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_CHKEYSHAREPRODUCER
