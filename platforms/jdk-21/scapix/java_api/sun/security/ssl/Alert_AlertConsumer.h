// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class Alert_AlertConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::Alert_AlertConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/Alert$AlertConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::Alert_AlertConsumer : public jni::object_base<"sun/security/ssl/Alert$AlertConsumer",
	java::lang::Object,
	sun::security::ssl::SSLConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<java::nio::ByteBuffer> m) { return call_method<"consume", void>(context, m); }

protected:

	Alert_AlertConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_ALERTCONSUMER