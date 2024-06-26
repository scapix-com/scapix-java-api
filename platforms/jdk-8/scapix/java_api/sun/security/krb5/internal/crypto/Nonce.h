// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class Nonce; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::Nonce>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/Nonce";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::Nonce : public jni::object_base<"sun/security/krb5/internal/crypto/Nonce",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::Nonce> new_object() { return base_::new_object(); }
	static jint value() { return call_static_method<"value", jint>(); }

protected:

	Nonce(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_NONCE
