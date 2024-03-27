// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLProducer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class NewSessionTicket_T13NewSessionTicketProducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::NewSessionTicket_T13NewSessionTicketProducer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/NewSessionTicket$T13NewSessionTicketProducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLProducer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::NewSessionTicket_T13NewSessionTicketProducer : public jni::object_base<"sun/security/ssl/NewSessionTicket$T13NewSessionTicketProducer",
	java::lang::Object,
	sun::security::ssl::SSLProducer>
{
public:

	jni::ref<jni::array<jbyte>> produce(jni::ref<sun::security::ssl::ConnectionContext> context) { return call_method<"produce", jni::ref<jni::array<jbyte>>>(context); }

protected:

	NewSessionTicket_T13NewSessionTicketProducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_NEWSESSIONTICKET_T13NEWSESSIONTICKETPRODUCER
