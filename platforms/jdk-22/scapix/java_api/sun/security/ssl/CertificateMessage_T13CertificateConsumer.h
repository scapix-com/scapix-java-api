// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CertificateMessage_T13CertificateConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CertificateMessage_T13CertificateConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CertificateMessage$T13CertificateConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CertificateMessage_T13CertificateConsumer : public jni::object_base<"sun/security/ssl/CertificateMessage$T13CertificateConsumer",
	java::lang::Object,
	sun::security::ssl::SSLConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<java::nio::ByteBuffer> message) { return call_method<"consume", void>(context, message); }

protected:

	CertificateMessage_T13CertificateConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATEMESSAGE_T13CERTIFICATECONSUMER
