// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLContextImpl_AbstractTLSContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLContextImpl_CustomizedTLSContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLContextImpl_CustomizedTLSContext>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLContextImpl$CustomizedTLSContext";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLContextImpl_AbstractTLSContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLContextImpl_CustomizedTLSContext : public jni::object_base<"sun/security/ssl/SSLContextImpl$CustomizedTLSContext",
	sun::security::ssl::SSLContextImpl_AbstractTLSContext>
{
public:


protected:

	SSLContextImpl_CustomizedTLSContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDTLSCONTEXT
