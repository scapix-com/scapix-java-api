// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLPossessionGenerator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLPossessionGenerator>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLPossessionGenerator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/sun/security/ssl/HandshakeContext.h>
#include <scapix/java_api/sun/security/ssl/SSLPossession.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLPossessionGenerator : public jni::object_base<"sun/security/ssl/SSLPossessionGenerator",
	java::lang::Object>
{
public:

	jni::ref<sun::security::ssl::SSLPossession> createPossession(jni::ref<sun::security::ssl::HandshakeContext> p1) { return call_method<"createPossession", jni::ref<sun::security::ssl::SSLPossession>>(p1); }

protected:

	SSLPossessionGenerator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLPOSSESSIONGENERATOR
