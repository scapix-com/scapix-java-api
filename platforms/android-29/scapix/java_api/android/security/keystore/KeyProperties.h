// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class KeyProperties; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::KeyProperties>
{
	static constexpr fixed_string class_name = "android/security/keystore/KeyProperties";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::KeyProperties : public jni::object_base<"android/security/keystore/KeyProperties",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> BLOCK_MODE_CBC() { return get_static_field<"BLOCK_MODE_CBC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLOCK_MODE_CTR() { return get_static_field<"BLOCK_MODE_CTR", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLOCK_MODE_ECB() { return get_static_field<"BLOCK_MODE_ECB", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BLOCK_MODE_GCM() { return get_static_field<"BLOCK_MODE_GCM", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_MD5() { return get_static_field<"DIGEST_MD5", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_NONE() { return get_static_field<"DIGEST_NONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_SHA1() { return get_static_field<"DIGEST_SHA1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_SHA224() { return get_static_field<"DIGEST_SHA224", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_SHA256() { return get_static_field<"DIGEST_SHA256", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_SHA384() { return get_static_field<"DIGEST_SHA384", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> DIGEST_SHA512() { return get_static_field<"DIGEST_SHA512", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENCRYPTION_PADDING_NONE() { return get_static_field<"ENCRYPTION_PADDING_NONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENCRYPTION_PADDING_PKCS7() { return get_static_field<"ENCRYPTION_PADDING_PKCS7", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENCRYPTION_PADDING_RSA_OAEP() { return get_static_field<"ENCRYPTION_PADDING_RSA_OAEP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ENCRYPTION_PADDING_RSA_PKCS1() { return get_static_field<"ENCRYPTION_PADDING_RSA_PKCS1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_3DES() { return get_static_field<"KEY_ALGORITHM_3DES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_AES() { return get_static_field<"KEY_ALGORITHM_AES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_EC() { return get_static_field<"KEY_ALGORITHM_EC", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_HMAC_SHA1() { return get_static_field<"KEY_ALGORITHM_HMAC_SHA1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_HMAC_SHA224() { return get_static_field<"KEY_ALGORITHM_HMAC_SHA224", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_HMAC_SHA256() { return get_static_field<"KEY_ALGORITHM_HMAC_SHA256", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_HMAC_SHA384() { return get_static_field<"KEY_ALGORITHM_HMAC_SHA384", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_HMAC_SHA512() { return get_static_field<"KEY_ALGORITHM_HMAC_SHA512", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_ALGORITHM_RSA() { return get_static_field<"KEY_ALGORITHM_RSA", jni::ref<java::lang::String>>(); }
	static jint ORIGIN_GENERATED() { return get_static_field<"ORIGIN_GENERATED", jint>(); }
	static jint ORIGIN_IMPORTED() { return get_static_field<"ORIGIN_IMPORTED", jint>(); }
	static jint ORIGIN_SECURELY_IMPORTED() { return get_static_field<"ORIGIN_SECURELY_IMPORTED", jint>(); }
	static jint ORIGIN_UNKNOWN() { return get_static_field<"ORIGIN_UNKNOWN", jint>(); }
	static jint PURPOSE_DECRYPT() { return get_static_field<"PURPOSE_DECRYPT", jint>(); }
	static jint PURPOSE_ENCRYPT() { return get_static_field<"PURPOSE_ENCRYPT", jint>(); }
	static jint PURPOSE_SIGN() { return get_static_field<"PURPOSE_SIGN", jint>(); }
	static jint PURPOSE_VERIFY() { return get_static_field<"PURPOSE_VERIFY", jint>(); }
	static jint PURPOSE_WRAP_KEY() { return get_static_field<"PURPOSE_WRAP_KEY", jint>(); }
	static jni::ref<java::lang::String> SIGNATURE_PADDING_RSA_PKCS1() { return get_static_field<"SIGNATURE_PADDING_RSA_PKCS1", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SIGNATURE_PADDING_RSA_PSS() { return get_static_field<"SIGNATURE_PADDING_RSA_PSS", jni::ref<java::lang::String>>(); }


protected:

	KeyProperties(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROPERTIES
