// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class KeyUsage; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::KeyUsage>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/KeyUsage";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::KeyUsage : public jni::object_base<"sun/security/krb5/internal/crypto/KeyUsage",
	java::lang::Object>
{
public:

	static jint KU_UNKNOWN() { return get_static_field<"KU_UNKNOWN", jint>(); }
	static jint KU_PA_ENC_TS() { return get_static_field<"KU_PA_ENC_TS", jint>(); }
	static jint KU_TICKET() { return get_static_field<"KU_TICKET", jint>(); }
	static jint KU_ENC_AS_REP_PART() { return get_static_field<"KU_ENC_AS_REP_PART", jint>(); }
	static jint KU_TGS_REQ_AUTH_DATA_SESSKEY() { return get_static_field<"KU_TGS_REQ_AUTH_DATA_SESSKEY", jint>(); }
	static jint KU_TGS_REQ_AUTH_DATA_SUBKEY() { return get_static_field<"KU_TGS_REQ_AUTH_DATA_SUBKEY", jint>(); }
	static jint KU_PA_TGS_REQ_CKSUM() { return get_static_field<"KU_PA_TGS_REQ_CKSUM", jint>(); }
	static jint KU_PA_TGS_REQ_AUTHENTICATOR() { return get_static_field<"KU_PA_TGS_REQ_AUTHENTICATOR", jint>(); }
	static jint KU_ENC_TGS_REP_PART_SESSKEY() { return get_static_field<"KU_ENC_TGS_REP_PART_SESSKEY", jint>(); }
	static jint KU_ENC_TGS_REP_PART_SUBKEY() { return get_static_field<"KU_ENC_TGS_REP_PART_SUBKEY", jint>(); }
	static jint KU_AUTHENTICATOR_CKSUM() { return get_static_field<"KU_AUTHENTICATOR_CKSUM", jint>(); }
	static jint KU_AP_REQ_AUTHENTICATOR() { return get_static_field<"KU_AP_REQ_AUTHENTICATOR", jint>(); }
	static jint KU_ENC_AP_REP_PART() { return get_static_field<"KU_ENC_AP_REP_PART", jint>(); }
	static jint KU_ENC_KRB_PRIV_PART() { return get_static_field<"KU_ENC_KRB_PRIV_PART", jint>(); }
	static jint KU_ENC_KRB_CRED_PART() { return get_static_field<"KU_ENC_KRB_CRED_PART", jint>(); }
	static jint KU_KRB_SAFE_CKSUM() { return get_static_field<"KU_KRB_SAFE_CKSUM", jint>(); }
	static jint KU_PA_FOR_USER_ENC_CKSUM() { return get_static_field<"KU_PA_FOR_USER_ENC_CKSUM", jint>(); }
	static jint KU_AD_KDC_ISSUED_CKSUM() { return get_static_field<"KU_AD_KDC_ISSUED_CKSUM", jint>(); }
	static jint KU_AS_REQ() { return get_static_field<"KU_AS_REQ", jint>(); }

	static jboolean isValid(jint p1) { return call_static_method<"isValid", jboolean>(p1); }

protected:

	KeyUsage(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_KEYUSAGE
