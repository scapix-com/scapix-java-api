// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/net/ssl/SSLContextSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl { class SSLContextSpiWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::SSLContextSpiWrapper>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/SSLContextSpiWrapper";
	using base_classes = std::tuple<scapix::java_api::com::sun::net::ssl::SSLContextSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::net::ssl::SSLContextSpiWrapper : public jni::object_base<"com/sun/net/ssl/SSLContextSpiWrapper",
	com::sun::net::ssl::SSLContextSpi>
{
public:


protected:

	SSLContextSpiWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXTSPIWRAPPER
