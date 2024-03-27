// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/KeyStoreSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class JavaKeyStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::JavaKeyStore>
{
	static constexpr fixed_string class_name = "sun/security/provider/JavaKeyStore";
	using base_classes = std::tuple<scapix::java_api::java::security::KeyStoreSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/provider/JavaKeyStore_JKS.h>
#include <scapix/java_api/sun/security/provider/JavaKeyStore_CaseExactJKS.h>
#include <scapix/java_api/sun/security/provider/JavaKeyStore_DualFormatJKS.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::JavaKeyStore : public jni::object_base<"sun/security/provider/JavaKeyStore",
	java::security::KeyStoreSpi>
{
public:

	using JKS = JavaKeyStore_JKS;
	using CaseExactJKS = JavaKeyStore_CaseExactJKS;
	using DualFormatJKS = JavaKeyStore_DualFormatJKS;

	jni::ref<java::security::Key> engineGetKey(jni::ref<java::lang::String> p1, jni::ref<jni::array<jchar>> p2) { return call_method<"engineGetKey", jni::ref<java::security::Key>>(p1, p2); }
	jni::ref<jni::array<java::security::cert::Certificate>> engineGetCertificateChain(jni::ref<java::lang::String> p1) { return call_method<"engineGetCertificateChain", jni::ref<jni::array<java::security::cert::Certificate>>>(p1); }
	jni::ref<java::security::cert::Certificate> engineGetCertificate(jni::ref<java::lang::String> p1) { return call_method<"engineGetCertificate", jni::ref<java::security::cert::Certificate>>(p1); }
	jni::ref<java::util::Date> engineGetCreationDate(jni::ref<java::lang::String> p1) { return call_method<"engineGetCreationDate", jni::ref<java::util::Date>>(p1); }
	void engineSetKeyEntry(jni::ref<java::lang::String> p1, jni::ref<java::security::Key> p2, jni::ref<jni::array<jchar>> p3, jni::ref<jni::array<java::security::cert::Certificate>> p4) { return call_method<"engineSetKeyEntry", void>(p1, p2, p3, p4); }
	void engineSetKeyEntry(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<jni::array<java::security::cert::Certificate>> p3) { return call_method<"engineSetKeyEntry", void>(p1, p2, p3); }
	void engineSetCertificateEntry(jni::ref<java::lang::String> p1, jni::ref<java::security::cert::Certificate> p2) { return call_method<"engineSetCertificateEntry", void>(p1, p2); }
	void engineDeleteEntry(jni::ref<java::lang::String> p1) { return call_method<"engineDeleteEntry", void>(p1); }
	jni::ref<java::util::Enumeration> engineAliases() { return call_method<"engineAliases", jni::ref<java::util::Enumeration>>(); }
	jboolean engineContainsAlias(jni::ref<java::lang::String> p1) { return call_method<"engineContainsAlias", jboolean>(p1); }
	jint engineSize() { return call_method<"engineSize", jint>(); }
	jboolean engineIsKeyEntry(jni::ref<java::lang::String> p1) { return call_method<"engineIsKeyEntry", jboolean>(p1); }
	jboolean engineIsCertificateEntry(jni::ref<java::lang::String> p1) { return call_method<"engineIsCertificateEntry", jboolean>(p1); }
	jni::ref<java::lang::String> engineGetCertificateAlias(jni::ref<java::security::cert::Certificate> p1) { return call_method<"engineGetCertificateAlias", jni::ref<java::lang::String>>(p1); }
	void engineStore(jni::ref<java::io::OutputStream> p1, jni::ref<jni::array<jchar>> p2) { return call_method<"engineStore", void>(p1, p2); }
	void engineLoad(jni::ref<java::io::InputStream> p1, jni::ref<jni::array<jchar>> p2) { return call_method<"engineLoad", void>(p1, p2); }

protected:

	JavaKeyStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_JAVAKEYSTORE
