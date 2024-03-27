// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class KeyGenParameterSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::KeyGenParameterSpec>
{
	static constexpr fixed_string class_name = "android/security/keystore/KeyGenParameterSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::AlgorithmParameterSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/math/BigInteger.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#include <scapix/java_api/android/security/keystore/KeyGenParameterSpec_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::KeyGenParameterSpec : public jni::object_base<"android/security/keystore/KeyGenParameterSpec",
	java::lang::Object,
	java::security::spec::AlgorithmParameterSpec>
{
public:

	using Builder = KeyGenParameterSpec_Builder;

	jni::ref<java::lang::String> getKeystoreAlias() { return call_method<"getKeystoreAlias", jni::ref<java::lang::String>>(); }
	jint getKeySize() { return call_method<"getKeySize", jint>(); }
	jni::ref<java::security::spec::AlgorithmParameterSpec> getAlgorithmParameterSpec() { return call_method<"getAlgorithmParameterSpec", jni::ref<java::security::spec::AlgorithmParameterSpec>>(); }
	jni::ref<javax::security::auth::x500::X500Principal> getCertificateSubject() { return call_method<"getCertificateSubject", jni::ref<javax::security::auth::x500::X500Principal>>(); }
	jni::ref<java::math::BigInteger> getCertificateSerialNumber() { return call_method<"getCertificateSerialNumber", jni::ref<java::math::BigInteger>>(); }
	jni::ref<java::util::Date> getCertificateNotBefore() { return call_method<"getCertificateNotBefore", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getCertificateNotAfter() { return call_method<"getCertificateNotAfter", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityStart() { return call_method<"getKeyValidityStart", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForConsumptionEnd() { return call_method<"getKeyValidityForConsumptionEnd", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForOriginationEnd() { return call_method<"getKeyValidityForOriginationEnd", jni::ref<java::util::Date>>(); }
	jint getPurposes() { return call_method<"getPurposes", jint>(); }
	jni::ref<jni::array<java::lang::String>> getDigests() { return call_method<"getDigests", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isDigestsSpecified() { return call_method<"isDigestsSpecified", jboolean>(); }
	jni::ref<jni::array<java::lang::String>> getEncryptionPaddings() { return call_method<"getEncryptionPaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSignaturePaddings() { return call_method<"getSignaturePaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getBlockModes() { return call_method<"getBlockModes", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isRandomizedEncryptionRequired() { return call_method<"isRandomizedEncryptionRequired", jboolean>(); }
	jboolean isUserAuthenticationRequired() { return call_method<"isUserAuthenticationRequired", jboolean>(); }
	jboolean isUserConfirmationRequired() { return call_method<"isUserConfirmationRequired", jboolean>(); }
	jint getUserAuthenticationValidityDurationSeconds() { return call_method<"getUserAuthenticationValidityDurationSeconds", jint>(); }
	jboolean isUserPresenceRequired() { return call_method<"isUserPresenceRequired", jboolean>(); }
	jni::ref<jni::array<jbyte>> getAttestationChallenge() { return call_method<"getAttestationChallenge", jni::ref<jni::array<jbyte>>>(); }
	jboolean isUserAuthenticationValidWhileOnBody() { return call_method<"isUserAuthenticationValidWhileOnBody", jboolean>(); }
	jboolean isInvalidatedByBiometricEnrollment() { return call_method<"isInvalidatedByBiometricEnrollment", jboolean>(); }
	jboolean isStrongBoxBacked() { return call_method<"isStrongBoxBacked", jboolean>(); }
	jboolean isUnlockedDeviceRequired() { return call_method<"isUnlockedDeviceRequired", jboolean>(); }

protected:

	KeyGenParameterSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYGENPARAMETERSPEC
