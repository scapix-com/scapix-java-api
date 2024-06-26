// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLExtension_ExtensionConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class KeyShareExtension_SHKeyShareConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::KeyShareExtension_SHKeyShareConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/KeyShareExtension$SHKeyShareConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLExtension_ExtensionConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#include <scapix/java_api/sun/security/ssl/SSLHandshake_HandshakeMessage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::KeyShareExtension_SHKeyShareConsumer : public jni::object_base<"sun/security/ssl/KeyShareExtension$SHKeyShareConsumer",
	java::lang::Object,
	sun::security::ssl::SSLExtension_ExtensionConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<sun::security::ssl::SSLHandshake_HandshakeMessage> message, jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"consume", void>(context, message, buffer); }

protected:

	KeyShareExtension_SHKeyShareConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_KEYSHAREEXTENSION_SHKEYSHARECONSUMER
