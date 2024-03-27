// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::fingerprint { class FingerprintManager_CryptoObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::fingerprint::FingerprintManager_CryptoObject>
{
	static constexpr fixed_string class_name = "android/hardware/fingerprint/FingerprintManager$CryptoObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Signature.h>
#include <scapix/java_api/javax/crypto/Cipher.h>
#include <scapix/java_api/javax/crypto/Mac.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::fingerprint::FingerprintManager_CryptoObject : public jni::object_base<"android/hardware/fingerprint/FingerprintManager$CryptoObject",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> new_object(jni::ref<java::security::Signature> signature) { return base_::new_object(signature); }
	static jni::ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> new_object(jni::ref<javax::crypto::Cipher> cipher) { return base_::new_object(cipher); }
	static jni::ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> new_object(jni::ref<javax::crypto::Mac> mac) { return base_::new_object(mac); }
	jni::ref<java::security::Signature> getSignature() { return call_method<"getSignature", jni::ref<java::security::Signature>>(); }
	jni::ref<javax::crypto::Cipher> getCipher() { return call_method<"getCipher", jni::ref<javax::crypto::Cipher>>(); }
	jni::ref<javax::crypto::Mac> getMac() { return call_method<"getMac", jni::ref<javax::crypto::Mac>>(); }

protected:

	FingerprintManager_CryptoObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_CRYPTOOBJECT
