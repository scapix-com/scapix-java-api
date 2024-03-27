// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SSLContextImpl_DefaultManagersHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SSLContextImpl_DefaultManagersHolder>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SSLContextImpl$DefaultManagersHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SSLContextImpl_DefaultManagersHolder : public jni::object_base<"sun/security/ssl/SSLContextImpl$DefaultManagersHolder",
	java::lang::Object>
{
public:


protected:

	SSLContextImpl_DefaultManagersHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SSLCONTEXTIMPL_DEFAULTMANAGERSHOLDER
