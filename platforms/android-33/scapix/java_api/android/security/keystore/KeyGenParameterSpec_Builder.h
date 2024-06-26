// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class KeyGenParameterSpec_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::KeyGenParameterSpec_Builder>
{
	static constexpr fixed_string class_name = "android/security/keystore/KeyGenParameterSpec$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/security/keystore/KeyGenParameterSpec.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::KeyGenParameterSpec_Builder : public jni::object_base<"android/security/keystore/KeyGenParameterSpec$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> new_object(jni::ref<java::lang::String> keystoreAlias, jint purposes) { return base_::new_object(keystoreAlias, purposes); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setKeySize(jint keySize) { return call_method<"setKeySize", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(keySize); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setAlgorithmParameterSpec(jni::ref<java::security::spec::AlgorithmParameterSpec> spec) { return call_method<"setAlgorithmParameterSpec", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(spec); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setCertificateSubject(jni::ref<javax::security::auth::x500::X500Principal> subject) { return call_method<"setCertificateSubject", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(subject); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setCertificateSerialNumber(jni::ref<java::math::BigInteger> serialNumber) { return call_method<"setCertificateSerialNumber", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(serialNumber); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setCertificateNotBefore(jni::ref<java::util::Date> date) { return call_method<"setCertificateNotBefore", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(date); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setCertificateNotAfter(jni::ref<java::util::Date> date) { return call_method<"setCertificateNotAfter", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(date); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setKeyValidityStart(jni::ref<java::util::Date> startDate) { return call_method<"setKeyValidityStart", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(startDate); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setKeyValidityEnd(jni::ref<java::util::Date> endDate) { return call_method<"setKeyValidityEnd", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(endDate); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setKeyValidityForOriginationEnd(jni::ref<java::util::Date> endDate) { return call_method<"setKeyValidityForOriginationEnd", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(endDate); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setKeyValidityForConsumptionEnd(jni::ref<java::util::Date> endDate) { return call_method<"setKeyValidityForConsumptionEnd", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(endDate); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setDigests(jni::ref<jni::array<java::lang::String>> digests) { return call_method<"setDigests", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(digests); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setEncryptionPaddings(jni::ref<jni::array<java::lang::String>> paddings) { return call_method<"setEncryptionPaddings", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(paddings); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setSignaturePaddings(jni::ref<jni::array<java::lang::String>> paddings) { return call_method<"setSignaturePaddings", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(paddings); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setBlockModes(jni::ref<jni::array<java::lang::String>> blockModes) { return call_method<"setBlockModes", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(blockModes); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setRandomizedEncryptionRequired(jboolean required) { return call_method<"setRandomizedEncryptionRequired", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(required); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserAuthenticationRequired(jboolean required) { return call_method<"setUserAuthenticationRequired", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(required); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserConfirmationRequired(jboolean required) { return call_method<"setUserConfirmationRequired", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(required); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserAuthenticationValidityDurationSeconds(jint seconds) { return call_method<"setUserAuthenticationValidityDurationSeconds", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(seconds); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserAuthenticationParameters(jint timeout, jint type) { return call_method<"setUserAuthenticationParameters", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(timeout, type); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserPresenceRequired(jboolean required) { return call_method<"setUserPresenceRequired", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(required); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setAttestationChallenge(jni::ref<jni::array<jbyte>> attestationChallenge) { return call_method<"setAttestationChallenge", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(attestationChallenge); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setDevicePropertiesAttestationIncluded(jboolean devicePropertiesAttestationIncluded) { return call_method<"setDevicePropertiesAttestationIncluded", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(devicePropertiesAttestationIncluded); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUserAuthenticationValidWhileOnBody(jboolean remainsValid) { return call_method<"setUserAuthenticationValidWhileOnBody", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(remainsValid); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setInvalidatedByBiometricEnrollment(jboolean invalidateKey) { return call_method<"setInvalidatedByBiometricEnrollment", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(invalidateKey); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setIsStrongBoxBacked(jboolean isStrongBoxBacked) { return call_method<"setIsStrongBoxBacked", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(isStrongBoxBacked); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setUnlockedDeviceRequired(jboolean unlockedDeviceRequired) { return call_method<"setUnlockedDeviceRequired", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(unlockedDeviceRequired); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setMaxUsageCount(jint maxUsageCount) { return call_method<"setMaxUsageCount", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(maxUsageCount); }
	jni::ref<android::security::keystore::KeyGenParameterSpec_Builder> setAttestKeyAlias(jni::ref<java::lang::String> attestKeyAlias) { return call_method<"setAttestKeyAlias", jni::ref<android::security::keystore::KeyGenParameterSpec_Builder>>(attestKeyAlias); }
	jni::ref<android::security::keystore::KeyGenParameterSpec> build() { return call_method<"build", jni::ref<android::security::keystore::KeyGenParameterSpec>>(); }

protected:

	KeyGenParameterSpec_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_BUILDER
