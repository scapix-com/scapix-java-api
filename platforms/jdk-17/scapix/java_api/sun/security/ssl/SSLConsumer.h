// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLConsumer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLConsumer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLConsumer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLConsumer : public jni::object_base<"sun/security/ssl/SSLConsumer",
	java::lang::Object>
{
public:

	void consume(jni::ref<sun::security::ssl::ConnectionContext> p1, jni::ref<java::nio::ByteBuffer> p2) { return call_method<"consume", void>(p1, p2); }

protected:

	SSLConsumer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONSUMER
