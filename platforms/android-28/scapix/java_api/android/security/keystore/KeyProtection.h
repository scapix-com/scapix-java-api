// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security::keystore { class KeyProtection; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::keystore::KeyProtection>
{
	static constexpr fixed_string class_name = "android/security/keystore/KeyProtection";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_ProtectionParameter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/android/security/keystore/KeyProtection_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::keystore::KeyProtection : public jni::object_base<"android/security/keystore/KeyProtection",
	java::lang::Object,
	java::security::KeyStore_ProtectionParameter>
{
public:

	using Builder = KeyProtection_Builder;

	jni::ref<java::util::Date> getKeyValidityStart() { return call_method<"getKeyValidityStart", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForConsumptionEnd() { return call_method<"getKeyValidityForConsumptionEnd", jni::ref<java::util::Date>>(); }
	jni::ref<java::util::Date> getKeyValidityForOriginationEnd() { return call_method<"getKeyValidityForOriginationEnd", jni::ref<java::util::Date>>(); }
	jint getPurposes() { return call_method<"getPurposes", jint>(); }
	jni::ref<jni::array<java::lang::String>> getEncryptionPaddings() { return call_method<"getEncryptionPaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getSignaturePaddings() { return call_method<"getSignaturePaddings", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getDigests() { return call_method<"getDigests", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isDigestsSpecified() { return call_method<"isDigestsSpecified", jboolean>(); }
	jni::ref<jni::array<java::lang::String>> getBlockModes() { return call_method<"getBlockModes", jni::ref<jni::array<java::lang::String>>>(); }
	jboolean isRandomizedEncryptionRequired() { return call_method<"isRandomizedEncryptionRequired", jboolean>(); }
	jboolean isUserAuthenticationRequired() { return call_method<"isUserAuthenticationRequired", jboolean>(); }
	jboolean isUserConfirmationRequired() { return call_method<"isUserConfirmationRequired", jboolean>(); }
	jint getUserAuthenticationValidityDurationSeconds() { return call_method<"getUserAuthenticationValidityDurationSeconds", jint>(); }
	jboolean isUserPresenceRequired() { return call_method<"isUserPresenceRequired", jboolean>(); }
	jboolean isUserAuthenticationValidWhileOnBody() { return call_method<"isUserAuthenticationValidWhileOnBody", jboolean>(); }
	jboolean isInvalidatedByBiometricEnrollment() { return call_method<"isInvalidatedByBiometricEnrollment", jboolean>(); }
	jboolean isUnlockedDeviceRequired() { return call_method<"isUnlockedDeviceRequired", jboolean>(); }

protected:

	KeyProtection(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTORE_KEYPROTECTION
