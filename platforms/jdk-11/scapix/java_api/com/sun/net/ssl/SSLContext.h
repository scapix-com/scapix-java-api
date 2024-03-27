// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl { class SSLContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::SSLContext>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/SSLContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/ssl/KeyManager.h>
#include <scapix/java_api/com/sun/net/ssl/TrustManager.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/javax/net/ssl/SSLServerSocketFactory.h>
#include <scapix/java_api/javax/net/ssl/SSLSocketFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::ssl::SSLContext : public jni::object_base<"com/sun/net/ssl/SSLContext",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::net::ssl::SSLContext> getInstance(jni::ref<java::lang::String> protocol) { return call_static_method<"getInstance", jni::ref<com::sun::net::ssl::SSLContext>>(protocol); }
	static jni::ref<com::sun::net::ssl::SSLContext> getInstance(jni::ref<java::lang::String> protocol, jni::ref<java::lang::String> provider) { return call_static_method<"getInstance", jni::ref<com::sun::net::ssl::SSLContext>>(protocol, provider); }
	static jni::ref<com::sun::net::ssl::SSLContext> getInstance(jni::ref<java::lang::String> protocol, jni::ref<java::security::Provider> provider) { return call_static_method<"getInstance", jni::ref<com::sun::net::ssl::SSLContext>>(protocol, provider); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	void init(jni::ref<jni::array<com::sun::net::ssl::KeyManager>> km, jni::ref<jni::array<com::sun::net::ssl::TrustManager>> tm, jni::ref<java::security::SecureRandom> random) { return call_method<"init", void>(km, tm, random); }
	jni::ref<javax::net::ssl::SSLSocketFactory> getSocketFactory() { return call_method<"getSocketFactory", jni::ref<javax::net::ssl::SSLSocketFactory>>(); }
	jni::ref<javax::net::ssl::SSLServerSocketFactory> getServerSocketFactory() { return call_method<"getServerSocketFactory", jni::ref<javax::net::ssl::SSLServerSocketFactory>>(); }

protected:

	SSLContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_SSLCONTEXT