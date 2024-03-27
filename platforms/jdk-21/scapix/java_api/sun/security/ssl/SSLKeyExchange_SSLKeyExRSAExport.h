// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLKeyExchange_SSLKeyExRSAExport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLKeyExchange_SSLKeyExRSAExport>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLKeyExchange$SSLKeyExRSAExport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLKeyExchange_SSLKeyExRSAExport : public jni::object_base<"sun/security/ssl/SSLKeyExchange$SSLKeyExRSAExport",
	java::lang::Object>
{
public:


protected:

	SSLKeyExchange_SSLKeyExRSAExport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLKEYEXCHANGE_SSLKEYEXRSAEXPORT