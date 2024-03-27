// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/net/ssl/X509ExtendedTrustManager.h>
#include <scapix/java_api/javax/net/ssl/X509TrustManager.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class AbstractTrustManagerWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::AbstractTrustManagerWrapper>
{
	static constexpr fixed_string class_name = "sun/security/ssl/AbstractTrustManagerWrapper";
	using base_classes = std::tuple<scapix::java_api::javax::net::ssl::X509ExtendedTrustManager, scapix::java_api::javax::net::ssl::X509TrustManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/javax/net/ssl/SSLEngine.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::AbstractTrustManagerWrapper : public jni::object_base<"sun/security/ssl/AbstractTrustManagerWrapper",
	javax::net::ssl::X509ExtendedTrustManager,
	javax::net::ssl::X509TrustManager>
{
public:

	void checkClientTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType) { return call_method<"checkClientTrusted", void>(chain, authType); }
	void checkServerTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType) { return call_method<"checkServerTrusted", void>(chain, authType); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> getAcceptedIssuers() { return call_method<"getAcceptedIssuers", jni::ref<jni::array<java::security::cert::X509Certificate>>>(); }
	void checkClientTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType, jni::ref<java::net::Socket> socket) { return call_method<"checkClientTrusted", void>(chain, authType, socket); }
	void checkServerTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType, jni::ref<java::net::Socket> socket) { return call_method<"checkServerTrusted", void>(chain, authType, socket); }
	void checkClientTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType, jni::ref<javax::net::ssl::SSLEngine> engine) { return call_method<"checkClientTrusted", void>(chain, authType, engine); }
	void checkServerTrusted(jni::ref<jni::array<java::security::cert::X509Certificate>> chain, jni::ref<java::lang::String> authType, jni::ref<javax::net::ssl::SSLEngine> engine) { return call_method<"checkServerTrusted", void>(chain, authType, engine); }

protected:

	AbstractTrustManagerWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ABSTRACTTRUSTMANAGERWRAPPER
