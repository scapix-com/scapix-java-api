// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/pkcs12/PKCS12KeyStore_KeyEntry.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs12 { class PKCS12KeyStore_SecretKeyEntry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs12::PKCS12KeyStore_SecretKeyEntry>
{
	static constexpr fixed_string class_name = "sun/security/pkcs12/PKCS12KeyStore$SecretKeyEntry";
	using base_classes = std::tuple<scapix::java_api::sun::security::pkcs12::PKCS12KeyStore_KeyEntry>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::pkcs12::PKCS12KeyStore_SecretKeyEntry : public jni::object_base<"sun/security/pkcs12/PKCS12KeyStore$SecretKeyEntry",
	sun::security::pkcs12::PKCS12KeyStore_KeyEntry>
{
public:


protected:

	PKCS12KeyStore_SecretKeyEntry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS12_PKCS12KEYSTORE_SECRETKEYENTRY
