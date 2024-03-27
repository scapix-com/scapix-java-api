// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyStoreSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs12 { class PKCS12KeyStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs12::PKCS12KeyStore>
{
	static constexpr fixed_string class_name = "sun/security/pkcs12/PKCS12KeyStore";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyStoreSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/security/pkcs12/PKCS12KeyStore_DualFormatPKCS12.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs12::PKCS12KeyStore : public jni::object_base<"sun/security/pkcs12/PKCS12KeyStore",
	java::security::KeyStoreSpi>
{
public:

	using DualFormatPKCS12 = PKCS12KeyStore_DualFormatPKCS12;

	static jint VERSION_3() { return get_static_field<"VERSION_3", jint>(); }

	static jni::ref<sun::security::pkcs12::PKCS12KeyStore> new_object() { return base_::new_object(); }
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
	jboolean engineEntryInstanceOf(jni::ref<java::lang::String> alias, jni::ref<java::lang::Class> entryClass) { return call_method<"engineEntryInstanceOf", jboolean>(alias, entryClass); }
	jni::ref<java::lang::String> engineGetCertificateAlias(jni::ref<java::security::cert::Certificate> cert) { return call_method<"engineGetCertificateAlias", jni::ref<java::lang::String>>(cert); }
	void engineStore(jni::ref<java::io::OutputStream> stream, jni::ref<jni::array<jchar>> password) { return call_method<"engineStore", void>(stream, password); }
	jni::ref<java::util::Set> engineGetAttributes(jni::ref<java::lang::String> alias) { return call_method<"engineGetAttributes", jni::ref<java::util::Set>>(alias); }
	jni::ref<java::security::KeyStore_Entry> engineGetEntry(jni::ref<java::lang::String> alias, jni::ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<"engineGetEntry", jni::ref<java::security::KeyStore_Entry>>(alias, protParam); }
	void engineSetEntry(jni::ref<java::lang::String> alias, jni::ref<java::security::KeyStore_Entry> entry, jni::ref<java::security::KeyStore_ProtectionParameter> protParam) { return call_method<"engineSetEntry", void>(alias, entry, protParam); }
	void engineLoad(jni::ref<java::io::InputStream> stream, jni::ref<jni::array<jchar>> password) { return call_method<"engineLoad", void>(stream, password); }
	static jboolean isPasswordless(jni::ref<java::io::File> f) { return call_static_method<"isPasswordless", jboolean>(f); }
	jboolean engineProbe(jni::ref<java::io::InputStream> stream) { return call_method<"engineProbe", jboolean>(stream); }

protected:

	PKCS12KeyStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE