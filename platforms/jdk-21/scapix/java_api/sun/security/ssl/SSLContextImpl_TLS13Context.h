// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/ssl/SSLContextImpl_AbstractTLSContext.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLContextImpl_TLS13Context; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLContextImpl_TLS13Context>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLContextImpl$TLS13Context";
	using base_classes = std::tuple<scapix::java_api::sun::security::ssl::SSLContextImpl_AbstractTLSContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::ssl::SSLContextImpl_TLS13Context : public jni::object_base<"sun/security/ssl/SSLContextImpl$TLS13Context",
	sun::security::ssl::SSLContextImpl_AbstractTLSContext>
{
public:

	static jni::ref<sun::security::ssl::SSLContextImpl_TLS13Context> new_object() { return base_::new_object(); }

protected:

	SSLContextImpl_TLS13Context(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_TLS13CONTEXT
