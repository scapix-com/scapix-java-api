// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class KeyInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::KeyInfo>
{
	static constexpr fixed_string class_name = "android/security/keystore/KeyInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::spec::KeySpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::KeyInfo : public jni::object_base<"android/security/keystore/KeyInfo",
	java::lang::Object,
	java::security::spec::KeySpec>
{
public:

	jni::ref<java::lang::String> getKeystoreAlias() { return call_method<"getKeystoreAlias", jni::ref<java::lang::String>>(); }
	jboolean isInsideSecureHardware() { return call_method<"isInsideSecureHardware", jboolean>(); }
	jint getOrigin() { return call_method<"getOrigin", jint>(); }
	jint getKeySize() { return call_method<"getKeySize", jint>(); }
	jni::ref<java::util::Date> getKeyValidityStart() { return call_method<"getKeyValidityStart", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForConsumptionEnd() { return call_method<"getKeyValidityForConsumptionEnd", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForOriginationEnd() { return call_method<"getKeyValidityForOriginationEnd", jni::ref<java::util::Date>>(); }
	jint getPurposes() { return call_method<"getPurposes", jint>(); }
	jni::ref<jni::array<java::lang::String>> getBlockModes() { return call_method<"getBlockModes", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getEncryptionPaddings() { return call_method<"getEncryptionPaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSignaturePaddings() { return call_method<"getSignaturePaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getDigests() { return call_method<"getDigests", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isUserAuthenticationRequired() { return call_method<"isUserAuthenticationRequired", jboolean>(); }
	jboolean isUserConfirmationRequired() { return call_method<"isUserConfirmationRequired", jboolean>(); }
	jint getUserAuthenticationValidityDurationSeconds() { return call_method<"getUserAuthenticationValidityDurationSeconds", jint>(); }
	jint getUserAuthenticationType() { return call_method<"getUserAuthenticationType", jint>(); }
	jboolean isUserAuthenticationRequirementEnforcedBySecureHardware() { return call_method<"isUserAuthenticationRequirementEnforcedBySecureHardware", jboolean>(); }
	jboolean isUserAuthenticationValidWhileOnBody() { return call_method<"isUserAuthenticationValidWhileOnBody", jboolean>(); }
	jboolean isInvalidatedByBiometricEnrollment() { return call_method<"isInvalidatedByBiometricEnrollment", jboolean>(); }
	jboolean isTrustedUserPresenceRequired() { return call_method<"isTrustedUserPresenceRequired", jboolean>(); }
	jint getSecurityLevel() { return call_method<"getSecurityLevel", jint>(); }
	jint getRemainingUsageCount() { return call_method<"getRemainingUsageCount", jint>(); }

protected:

	KeyInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYINFO