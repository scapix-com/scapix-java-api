// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class Des; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::Des>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/Des";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::Des : public jni::object_base<"sun/security/krb5/internal/crypto/Des",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::Des> new_object() { return base_::new_object(); }
	static jni::ref<jni::array<jbyte>> set_parity(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"set_parity", jni::ref<jni::array<jbyte>>>(p1); }
	static jlong set_parity(jlong p1) { return call_static_method<"set_parity", jlong>(p1); }
	static jboolean bad_key(jlong p1) { return call_static_method<"bad_key", jboolean>(p1); }
	static jboolean bad_key(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"bad_key", jboolean>(p1); }
	static jlong octet2long(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"octet2long", jlong>(p1); }
	static jlong octet2long(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_static_method<"octet2long", jlong>(p1, p2); }
	static jni::ref<jni::array<jbyte>> long2octet(jlong p1) { return call_static_method<"long2octet", jni::ref<jni::array<jbyte>>>(p1); }
	static void long2octet(jlong p1, jni::ref<jni::array<jbyte>> p2) { return call_static_method<"long2octet", void>(p1, p2); }
	static void long2octet(jlong p1, jni::ref<jni::array<jbyte>> p2, jint p3) { return call_static_method<"long2octet", void>(p1, p2, p3); }
	static void cbc_encrypt(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jboolean p5) { return call_static_method<"cbc_encrypt", void>(p1, p2, p3, p4, p5); }
	static jlong char_to_key(jni::ref<jni::array<jchar>> p1) { return call_static_method<"char_to_key", jlong>(p1); }
	static jni::ref<jni::array<jbyte>> des_cksum(jni::ref<jni::array<jbyte>> p1, jni::ref<jni::array<jbyte>> p2, jni::ref<jni::array<jbyte>> p3) { return call_static_method<"des_cksum", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	static jni::ref<jni::array<jbyte>> string_to_key_bytes(jni::ref<jni::array<jchar>> p1) { return call_static_method<"string_to_key_bytes", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	Des(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES
