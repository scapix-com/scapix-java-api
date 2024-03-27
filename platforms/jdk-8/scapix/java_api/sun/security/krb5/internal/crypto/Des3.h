// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class Des3; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::Des3>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/Des3";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::Des3 : public jni::object_base<"sun/security/krb5/internal/crypto/Des3",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jbyte>> stringToKey(jni::ref<jni::array<jchar>> p1) { return call_static_method<"stringToKey", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<jni::array<jbyte>> parityFix(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"parityFix", jni::ref<jni::array<jbyte>>>(p1); }
	static jint getChecksumLength() { return call_static_method<"getChecksumLength", jint>(); }
	static jni::ref<jni::array<jbyte>> calculateChecksum(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jint p4, jint p5) { return call_static_method<"calculateChecksum", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5); }
	static jni::ref<jni::array<jbyte>> encrypt(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_static_method<"encrypt", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	static jni::ref<jni::array<jbyte>> encryptRaw(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_static_method<"encryptRaw", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	static jni::ref<jni::array<jbyte>> decrypt(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_static_method<"decrypt", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }
	static jni::ref<jni::array<jbyte>> decryptRaw(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jni::ref<jni::array<jbyte>> p4, jint p5, jint p6) { return call_static_method<"decryptRaw", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5, p6); }

protected:

	Des3(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_DES3
