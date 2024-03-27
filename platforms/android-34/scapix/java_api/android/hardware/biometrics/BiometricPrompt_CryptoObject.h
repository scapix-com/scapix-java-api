// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::biometrics { class BiometricPrompt_CryptoObject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::biometrics::BiometricPrompt_CryptoObject>
{
	static constexpr fixed_string class_name = "android/hardware/biometrics/BiometricPrompt$CryptoObject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/security/identity/IdentityCredential.h>
#include <scapix/java_api/android/security/identity/PresentationSession.h>
#include <scapix/java_api/java/security/Signature.h>
#include <scapix/java_api/javax/crypto/Cipher.h>
#include <scapix/java_api/javax/crypto/Mac.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::biometrics::BiometricPrompt_CryptoObject : public jni::object_base<"android/hardware/biometrics/BiometricPrompt$CryptoObject",
	java::lang::Object>
{
public:

	static jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> new_object(jni::ref<java::security::Signature> signature) { return base_::new_object(signature); }
	static jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> new_object(jni::ref<javax::crypto::Cipher> cipher) { return base_::new_object(cipher); }
	static jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> new_object(jni::ref<javax::crypto::Mac> mac) { return base_::new_object(mac); }
	static jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> new_object(jni::ref<android::security::identity::IdentityCredential> credential) { return base_::new_object(credential); }
	static jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> new_object(jni::ref<android::security::identity::PresentationSession> session) { return base_::new_object(session); }
	jni::ref<java::security::Signature> getSignature() { return call_method<"getSignature", jni::ref<java::security::Signature>>(); }
	jni::ref<javax::crypto::Cipher> getCipher() { return call_method<"getCipher", jni::ref<javax::crypto::Cipher>>(); }
	jni::ref<javax::crypto::Mac> getMac() { return call_method<"getMac", jni::ref<javax::crypto::Mac>>(); }
	jni::ref<android::security::identity::IdentityCredential> getIdentityCredential() { return call_method<"getIdentityCredential", jni::ref<android::security::identity::IdentityCredential>>(); }
	jni::ref<android::security::identity::PresentationSession> getPresentationSession() { return call_method<"getPresentationSession", jni::ref<android::security::identity::PresentationSession>>(); }

protected:

	BiometricPrompt_CryptoObject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_CRYPTOOBJECT
