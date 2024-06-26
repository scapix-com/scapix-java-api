// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLProducer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLProducer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLProducer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/ConnectionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLProducer : public jni::object_base<"sun/security/ssl/SSLProducer",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jbyte>> produce(jni::ref<sun::security::ssl::ConnectionContext> p1) { return call_method<"produce", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	SSLProducer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPRODUCER
