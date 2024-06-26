// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLContextImpl_CustomizedTLSContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLContextImpl_TLSContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLContextImpl_TLSContext>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLContextImpl$TLSContext";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLContextImpl_CustomizedTLSContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::SSLContextImpl_TLSContext : public jni::object_base<"sun/security/ssl/SSLContextImpl$TLSContext",
	sun::security::ssl::SSLContextImpl_CustomizedTLSContext>
{
public:

	static jni::ref<sun::security::ssl::SSLContextImpl_TLSContext> new_object() { return base_::new_object(); }

protected:

	SSLContextImpl_TLSContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLSCONTEXT
