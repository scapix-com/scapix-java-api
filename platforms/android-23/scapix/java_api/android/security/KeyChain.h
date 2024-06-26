// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class KeyChain; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::KeyChain>
{
	static constexpr fixed_string class_name = "android/security/KeyChain";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/security/KeyChainAliasCallback.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Principal.h>
#include <scapix/java_api/java/security/PrivateKey.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::KeyChain : public jni::object_base<"android/security/KeyChain",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_STORAGE_CHANGED() { return get_static_field<"ACTION_STORAGE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_CERTIFICATE() { return get_static_field<"EXTRA_CERTIFICATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_NAME() { return get_static_field<"EXTRA_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PKCS12() { return get_static_field<"EXTRA_PKCS12", jni::ref<java::lang::String>>(); }

	static jni::ref<android::security::KeyChain> new_object() { return base_::new_object(); }
	static jni::ref<android::content::Intent> createInstallIntent() { return call_static_method<"createInstallIntent", jni::ref<android::content::Intent>>(); }
	static void choosePrivateKeyAlias(jni::ref<android::app::Activity> activity, jni::ref<android::security::KeyChainAliasCallback> response, jni::ref<jni::array<java::lang::String>> keyTypes, jni::ref<jni::array<java::security::Principal>> issuers, jni::ref<java::lang::String> host, jint port, jni::ref<java::lang::String> alias) { return call_static_method<"choosePrivateKeyAlias", void>(activity, response, keyTypes, issuers, host, port, alias); }
	static void choosePrivateKeyAlias(jni::ref<android::app::Activity> activity, jni::ref<android::security::KeyChainAliasCallback> response, jni::ref<jni::array<java::lang::String>> keyTypes, jni::ref<jni::array<java::security::Principal>> issuers, jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> alias) { return call_static_method<"choosePrivateKeyAlias", void>(activity, response, keyTypes, issuers, uri, alias); }
	static jni::ref<java::security::PrivateKey> getPrivateKey(jni::ref<android::content::Context> context, jni::ref<java::lang::String> alias) { return call_static_method<"getPrivateKey", jni::ref<java::security::PrivateKey>>(context, alias); }
	static jni::ref<jni::array<java::security::cert::X509Certificate>> getCertificateChain(jni::ref<android::content::Context> context, jni::ref<java::lang::String> alias) { return call_static_method<"getCertificateChain", jni::ref<jni::array<java::security::cert::X509Certificate>>>(context, alias); }
	static jboolean isKeyAlgorithmSupported(jni::ref<java::lang::String> algorithm) { return call_static_method<"isKeyAlgorithmSupported", jboolean>(algorithm); }
	static jboolean isBoundKeyAlgorithm(jni::ref<java::lang::String> algorithm) { return call_static_method<"isBoundKeyAlgorithm", jboolean>(algorithm); }

protected:

	KeyChain(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYCHAIN
