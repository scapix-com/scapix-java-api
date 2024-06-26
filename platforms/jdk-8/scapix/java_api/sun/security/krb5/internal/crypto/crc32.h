// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/MessageDigestSpi.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::crypto { class crc32; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::crypto::crc32>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/crypto/crc32";
	using base_classes = std::tuple<scapix::java_api::java::security::MessageDigestSpi, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::crypto::crc32 : public jni::object_base<"sun/security/krb5/internal/crypto/crc32",
	java::security::MessageDigestSpi,
	java::lang::Cloneable>
{
public:

	static jni::ref<sun::security::krb5::internal::crypto::crc32> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void init() { return call_method<"init", void>(); }
	static jint int2crc32(jint p1) { return call_static_method<"int2crc32", jint>(p1); }
	static void printcrc32Table() { return call_static_method<"printcrc32Table", void>(); }
	static jint byte2crc32sum(jint p1, jni::ref<jni::array<jbyte>> p2, jint p3) { return call_static_method<"byte2crc32sum", jint>(p1, p2, p3); }
	static jint byte2crc32sum(jint p1, jni::ref<jni::array<jbyte>> p2) { return call_static_method<"byte2crc32sum", jint>(p1, p2); }
	static jint byte2crc32sum(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"byte2crc32sum", jint>(p1); }
	static jint byte2crc32(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"byte2crc32", jint>(p1); }
	static jni::ref<jni::array<jbyte>> byte2crc32sum_bytes(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"byte2crc32sum_bytes", jni::ref<jni::array<jbyte>>>(p1); }
	static jni::ref<jni::array<jbyte>> byte2crc32sum_bytes(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_static_method<"byte2crc32sum_bytes", jni::ref<jni::array<jbyte>>>(p1, p2); }
	static jni::ref<jni::array<jbyte>> int2quad(jlong p1) { return call_static_method<"int2quad", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	crc32(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CRYPTO_CRC32
