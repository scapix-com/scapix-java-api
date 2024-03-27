// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NewSessionTicket_T13NewSessionTicketConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NewSessionTicket_T13NewSessionTicketConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NewSessionTicket$T13NewSessionTicketConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NewSessionTicket_T13NewSessionTicketConsumer : public jni::object_base<"sun/security/ssl/NewSessionTicket$T13NewSessionTicketConsumer",
	java::lang::Object,
	sun::security::ssl::SSLConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<java::nio::ByteBuffer> message) { return call_method<"consume", void>(context, message); }

protected:

	NewSessionTicket_T13NewSessionTicketConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETCONSUMER