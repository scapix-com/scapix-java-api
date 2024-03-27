// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLContextImpl_AbstractDTLSContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLContextImpl_CustomizedDTLSContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLContextImpl_CustomizedDTLSContext>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLContextImpl$CustomizedDTLSContext";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLContextImpl_AbstractDTLSContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLContextImpl_CustomizedDTLSContext : public jni::object_base<"sun/security/ssl/SSLContextImpl$CustomizedDTLSContext",
	sun::security::ssl::SSLContextImpl_AbstractDTLSContext>
{
public:


protected:

	SSLContextImpl_CustomizedDTLSContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_CUSTOMIZEDDTLSCONTEXT
