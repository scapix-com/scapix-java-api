// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/internal/crypto/CksumType.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class DesMacCksumType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::DesMacCksumType>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/DesMacCksumType";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::internal::crypto::CksumType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::DesMacCksumType : public jni::object_base<"sun/security/krb5/internal/crypto/DesMacCksumType",
	sun::security::krb5::internal::crypto::CksumType>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::DesMacCksumType> new_object() { return base_::new_object(); }
	jint confounderSize() { return call_method<"confounderSize", jint>(); }
	jint cksumType() { return call_method<"cksumType", jint>(); }
	jboolean isKeyed() { return call_method<"isKeyed", jboolean>(); }
	jint cksumSize() { return call_method<"cksumSize", jint>(); }
	jint keyType() { return call_method<"keyType", jint>(); }
	jint keySize() { return call_method<"keySize", jint>(); }
	jni::ref<jni::array<jbyte>> calculateChecksum(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jint p4) { return call_method<"calculateChecksum", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4); }
	jboolean verifyChecksum(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5) { return call_method<"verifyChecksum", jboolean>(p1, p2, p3, p4, p5); }

protected:

	DesMacCksumType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DESMACCKSUMTYPE