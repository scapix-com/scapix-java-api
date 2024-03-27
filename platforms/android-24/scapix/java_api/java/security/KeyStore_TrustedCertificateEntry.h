// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_Entry.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class KeyStore_TrustedCertificateEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::KeyStore_TrustedCertificateEntry>
{
	static constexpr fixed_string class_name = "java/security/KeyStore$TrustedCertificateEntry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_Entry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY)
#define SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/cert/Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::KeyStore_TrustedCertificateEntry : public jni::object_base<"java/security/KeyStore$TrustedCertificateEntry",
	java::lang::Object,
	java::security::KeyStore_Entry>
{
public:

	static jni::ref<java::security::KeyStore_TrustedCertificateEntry> new_object(jni::ref<java::security::cert::Certificate> trustedCert) { return base_::new_object(trustedCert); }
	jni::ref<java::security::cert::Certificate> getTrustedCertificate() { return call_method<"getTrustedCertificate", jni::ref<java::security::cert::Certificate>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	KeyStore_TrustedCertificateEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_KEYSTORE_TRUSTEDCERTIFICATEENTRY
