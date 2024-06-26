// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLConsumer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class CertificateStatus_CertificateStatusConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::CertificateStatus_CertificateStatusConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/CertificateStatus$CertificateStatusConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLConsumer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::CertificateStatus_CertificateStatusConsumer : public jni::object_base<"sun/security/ssl/CertificateStatus$CertificateStatusConsumer",
	java::lang::Object,
	sun::security::ssl::SSLConsumer>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> context, jni::ref<java::nio::ByteBuffer> message) { return call_method<"consume", void>(context, message); }

protected:

	CertificateStatus_CertificateStatusConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_CERTIFICATESTATUS_CERTIFICATESTATUSCONSUMER
