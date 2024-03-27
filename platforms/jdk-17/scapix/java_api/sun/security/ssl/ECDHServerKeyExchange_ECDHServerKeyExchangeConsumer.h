// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class ECDHServerKeyExchange_ECDHServerKeyExchangeConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::ECDHServerKeyExchange_ECDHServerKeyExchangeConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::ECDHServerKeyExchange_ECDHServerKeyExchangeConsumer : public jni::object_base<"sun/security/ssl/ECDHServerKeyExchange$ECDHServerKeyExchangeConsumer",
	java::lang::Object,
	sun::security::ssl::SSLConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<java::nio::ByteBuffer> message) { return call_method<"consume", void>(context, message); }

protected:

	ECDHServerKeyExchange_ECDHServerKeyExchangeConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ECDHSERVERKEYEXCHANGE_ECDHSERVERKEYEXCHANGECONSUMER
