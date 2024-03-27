// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/internal/crypto/dk/DkCrypto.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto::dk { class AesDkCrypto; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::dk::AesDkCrypto>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/dk/AesDkCrypto";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::internal::crypto::dk::DkCrypto>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::dk::AesDkCrypto : public jni::object_base<"sun/security/krb5/internal/crypto/dk/AesDkCrypto",
	sun::security::krb5::internal::crypto::dk::DkCrypto>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::dk::AesDkCrypto> new_object(jint p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jbyte>> stringToKey(jni::ref<jni::array<jchar>> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<jbyte>> p3) { return call_method<"stringToKey", jni::ref<jni::array<jbyte>>>(p1, p2, p3); }
	jint getChecksumLength() { return call_method<"getChecksumLength", jint>(); }
	jni::ref<jni::array<jbyte>> calculateChecksum(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jint p4, jint p5) { return call_method<"calculateChecksum", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5); }
	jni::ref<jni::array<jbyte>> encrypt(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jni::ref<jni::array<jbyte>> p5, jint p6, jint p7) { return call_method<"encrypt", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6, p7); }
	jni::ref<jni::array<jbyte>> encryptRaw(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_method<"encryptRaw", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	jni::ref<jni::array<jbyte>> decrypt(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_method<"decrypt", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	jni::ref<jni::array<jbyte>> decryptRaw(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_method<"decryptRaw", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	static jint readBigEndian(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_static_method<"readBigEndian", jint>(p1, p2, p3); }

protected:

	AesDkCrypto(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DK_AESDKCRYPTO
