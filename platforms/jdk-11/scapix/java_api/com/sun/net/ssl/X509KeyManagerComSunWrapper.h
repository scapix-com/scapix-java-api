// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/net/ssl/X509KeyManager.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::ssl { class X509KeyManagerComSunWrapper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::ssl::X509KeyManagerComSunWrapper>
{
	static constexpr fixed_string class_name = "com/sun/net/ssl/X509KeyManagerComSunWrapper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::net::ssl::X509KeyManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER)
#define SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::net::ssl::X509KeyManagerComSunWrapper : public jni::object_base<"com/sun/net/ssl/X509KeyManagerComSunWrapper",
	java::lang::Object,
	com::sun::net::ssl::X509KeyManager>
{
public:

	jni::ref<jni::array<java::lang::String>> getClientAliases(jni::ref<java::lang::String> keyType, jni::ref<jni::array<java::security::Principal>> issuers) { return call_method<"getClientAliases", jni::ref<jni::array<java::lang::String>>>(keyType, issuers); }
	jni::ref<java::lang::String> chooseClientAlias(jni::ref<java::lang::String> keyType, jni::ref<jni::array<java::security::Principal>> issuers) { return call_method<"chooseClientAlias", jni::ref<java::lang::String>>(keyType, issuers); }
	jni::ref<jni::array<java::lang::String>> getServerAliases(jni::ref<java::lang::String> keyType, jni::ref<jni::array<java::security::Principal>> issuers) { return call_method<"getServerAliases", jni::ref<jni::array<java::lang::String>>>(keyType, issuers); }
	jni::ref<java::lang::String> chooseServerAlias(jni::ref<java::lang::String> keyType, jni::ref<jni::array<java::security::Principal>> issuers) { return call_method<"chooseServerAlias", jni::ref<java::lang::String>>(keyType, issuers); }
	jni::ref<jni::array<java::security::cert::X509Certificate>> getCertificateChain(jni::ref<java::lang::String> alias) { return call_method<"getCertificateChain", jni::ref<jni::array<java::security::cert::X509Certificate>>>(alias); }
	jni::ref<java::security::PrivateKey> getPrivateKey(jni::ref<java::lang::String> alias) { return call_method<"getPrivateKey", jni::ref<java::security::PrivateKey>>(alias); }

protected:

	X509KeyManagerComSunWrapper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_SSL_X509KEYMANAGERCOMSUNWRAPPER
