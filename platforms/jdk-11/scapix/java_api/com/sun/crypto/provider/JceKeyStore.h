// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyStoreSpi.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::crypto::provider { class JceKeyStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::crypto::provider::JceKeyStore>
{
	static constexpr fixed_string class_name = "com/sun/crypto/provider/JceKeyStore";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyStoreSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE)
#define SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::crypto::provider::JceKeyStore : public jni::object_base<"com/sun/crypto/provider/JceKeyStore",
	java::security::KeyStoreSpi>
{
public:

	static jni::ref<com::sun::crypto::provider::JceKeyStore> new_object() { return base_::new_object(); }
	jni::ref<java::security::Key> engineGetKey(jni::ref<java::lang::String> alias, jni::ref<jni::array<jchar>> password) { return call_method<"engineGetKey", jni::ref<java::security::Key>>(alias, password); }
	jni::ref<jni::array<java::security::cert::Certificate>> engineGetCertificateChain(jni::ref<java::lang::String> alias) { return call_method<"engineGetCertificateChain", jni::ref<jni::array<java::security::cert::Certificate>>>(alias); }
	jni::ref<java::security::cert::Certificate> engineGetCertificate(jni::ref<java::lang::String> alias) { return call_method<"engineGetCertificate", jni::ref<java::security::cert::Certificate>>(alias); }
	jni::ref<java::util::Date> engineGetCreationDate(jni::ref<java::lang::String> alias) { return call_method<"engineGetCreationDate", jni::ref<java::util::Date>>(alias); }
	void engineSetKeyEntry(jni::ref<java::lang::String> alias, jni::ref<java::security::Key> key, jni::ref<jni::array<jchar>> password, jni::ref<jni::array<java::security::cert::Certificate>> chain) { return call_method<"engineSetKeyEntry", void>(alias, key, password, chain); }
	void engineSetKeyEntry(jni::ref<java::lang::String> alias, jni::ref<jni::array<jbyte>> key, jni::ref<jni::array<java::security::cert::Certificate>> chain) { return call_method<"engineSetKeyEntry", void>(alias, key, chain); }
	void engineSetCertificateEntry(jni::ref<java::lang::String> alias, jni::ref<java::security::cert::Certificate> cert) { return call_method<"engineSetCertificateEntry", void>(alias, cert); }
	void engineDeleteEntry(jni::ref<java::lang::String> alias) { return call_method<"engineDeleteEntry", void>(alias); }
	jni::ref<java::util::Enumeration> engineAliases() { return call_method<"engineAliases", jni::ref<java::util::Enumeration>>(); }
	jboolean engineContainsAlias(jni::ref<java::lang::String> alias) { return call_method<"engineContainsAlias", jboolean>(alias); }
	jint engineSize() { return call_method<"engineSize", jint>(); }
	jboolean engineIsKeyEntry(jni::ref<java::lang::String> alias) { return call_method<"engineIsKeyEntry", jboolean>(alias); }
	jboolean engineIsCertificateEntry(jni::ref<java::lang::String> alias) { return call_method<"engineIsCertificateEntry", jboolean>(alias); }
	jni::ref<java::lang::String> engineGetCertificateAlias(jni::ref<java::security::cert::Certificate> cert) { return call_method<"engineGetCertificateAlias", jni::ref<java::lang::String>>(cert); }
	void engineStore(jni::ref<java::io::OutputStream> stream, jni::ref<jni::array<jchar>> password) { return call_method<"engineStore", void>(stream, password); }
	void engineLoad(jni::ref<java::io::InputStream> stream, jni::ref<jni::array<jchar>> password) { return call_method<"engineLoad", void>(stream, password); }
	jboolean engineProbe(jni::ref<java::io::InputStream> stream) { return call_method<"engineProbe", jboolean>(stream); }

protected:

	JceKeyStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CRYPTO_PROVIDER_JCEKEYSTORE
