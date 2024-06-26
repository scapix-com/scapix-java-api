// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SignatureScheme; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SignatureScheme>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SignatureScheme";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SignatureScheme : public jni::object_base<"sun/security/ssl/SignatureScheme",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::SignatureScheme> ED25519() { return get_static_field<"ED25519", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ED448() { return get_static_field<"ED448", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ECDSA_SECP256R1_SHA256() { return get_static_field<"ECDSA_SECP256R1_SHA256", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ECDSA_SECP384R1_SHA384() { return get_static_field<"ECDSA_SECP384R1_SHA384", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ECDSA_SECP521R1_SHA512() { return get_static_field<"ECDSA_SECP521R1_SHA512", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_RSAE_SHA256() { return get_static_field<"RSA_PSS_RSAE_SHA256", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_RSAE_SHA384() { return get_static_field<"RSA_PSS_RSAE_SHA384", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_RSAE_SHA512() { return get_static_field<"RSA_PSS_RSAE_SHA512", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_PSS_SHA256() { return get_static_field<"RSA_PSS_PSS_SHA256", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_PSS_SHA384() { return get_static_field<"RSA_PSS_PSS_SHA384", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PSS_PSS_SHA512() { return get_static_field<"RSA_PSS_PSS_SHA512", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PKCS1_SHA256() { return get_static_field<"RSA_PKCS1_SHA256", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PKCS1_SHA384() { return get_static_field<"RSA_PKCS1_SHA384", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PKCS1_SHA512() { return get_static_field<"RSA_PKCS1_SHA512", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> DSA_SHA256() { return get_static_field<"DSA_SHA256", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ECDSA_SHA224() { return get_static_field<"ECDSA_SHA224", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_SHA224() { return get_static_field<"RSA_SHA224", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> DSA_SHA224() { return get_static_field<"DSA_SHA224", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> ECDSA_SHA1() { return get_static_field<"ECDSA_SHA1", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_PKCS1_SHA1() { return get_static_field<"RSA_PKCS1_SHA1", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> DSA_SHA1() { return get_static_field<"DSA_SHA1", jni::ref<sun::security::ssl::SignatureScheme>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> RSA_MD5() { return get_static_field<"RSA_MD5", jni::ref<sun::security::ssl::SignatureScheme>>(); }

	static jni::ref<jni::array<sun::security::ssl::SignatureScheme>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::SignatureScheme>>>(); }
	static jni::ref<sun::security::ssl::SignatureScheme> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::SignatureScheme>>(name); }

protected:

	SignatureScheme(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SIGNATURESCHEME
