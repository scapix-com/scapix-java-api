// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::biometrics { class BiometricPrompt; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::biometrics::BiometricPrompt>
{
	static constexpr fixed_string class_name = "android/hardware/biometrics/BiometricPrompt";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_AuthenticationCallback.h>
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_CryptoObject.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_Builder.h>
#include <scapix/java_api/android/hardware/biometrics/BiometricPrompt_AuthenticationResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::biometrics::BiometricPrompt : public jni::object_base<"android/hardware/biometrics/BiometricPrompt",
	java::lang::Object>
{
public:

	using CryptoObject = BiometricPrompt_CryptoObject;
	using Builder = BiometricPrompt_Builder;
	using AuthenticationResult = BiometricPrompt_AuthenticationResult;
	using AuthenticationCallback = BiometricPrompt_AuthenticationCallback;

	static jint BIOMETRIC_ACQUIRED_GOOD() { return get_static_field<"BIOMETRIC_ACQUIRED_GOOD", jint>(); }
	static jint BIOMETRIC_ACQUIRED_IMAGER_DIRTY() { return get_static_field<"BIOMETRIC_ACQUIRED_IMAGER_DIRTY", jint>(); }
	static jint BIOMETRIC_ACQUIRED_INSUFFICIENT() { return get_static_field<"BIOMETRIC_ACQUIRED_INSUFFICIENT", jint>(); }
	static jint BIOMETRIC_ACQUIRED_PARTIAL() { return get_static_field<"BIOMETRIC_ACQUIRED_PARTIAL", jint>(); }
	static jint BIOMETRIC_ACQUIRED_TOO_FAST() { return get_static_field<"BIOMETRIC_ACQUIRED_TOO_FAST", jint>(); }
	static jint BIOMETRIC_ACQUIRED_TOO_SLOW() { return get_static_field<"BIOMETRIC_ACQUIRED_TOO_SLOW", jint>(); }
	static jint BIOMETRIC_ERROR_CANCELED() { return get_static_field<"BIOMETRIC_ERROR_CANCELED", jint>(); }
	static jint BIOMETRIC_ERROR_HW_NOT_PRESENT() { return get_static_field<"BIOMETRIC_ERROR_HW_NOT_PRESENT", jint>(); }
	static jint BIOMETRIC_ERROR_HW_UNAVAILABLE() { return get_static_field<"BIOMETRIC_ERROR_HW_UNAVAILABLE", jint>(); }
	static jint BIOMETRIC_ERROR_LOCKOUT() { return get_static_field<"BIOMETRIC_ERROR_LOCKOUT", jint>(); }
	static jint BIOMETRIC_ERROR_LOCKOUT_PERMANENT() { return get_static_field<"BIOMETRIC_ERROR_LOCKOUT_PERMANENT", jint>(); }
	static jint BIOMETRIC_ERROR_NO_BIOMETRICS() { return get_static_field<"BIOMETRIC_ERROR_NO_BIOMETRICS", jint>(); }
	static jint BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL() { return get_static_field<"BIOMETRIC_ERROR_NO_DEVICE_CREDENTIAL", jint>(); }
	static jint BIOMETRIC_ERROR_NO_SPACE() { return get_static_field<"BIOMETRIC_ERROR_NO_SPACE", jint>(); }
	static jint BIOMETRIC_ERROR_TIMEOUT() { return get_static_field<"BIOMETRIC_ERROR_TIMEOUT", jint>(); }
	static jint BIOMETRIC_ERROR_UNABLE_TO_PROCESS() { return get_static_field<"BIOMETRIC_ERROR_UNABLE_TO_PROCESS", jint>(); }
	static jint BIOMETRIC_ERROR_USER_CANCELED() { return get_static_field<"BIOMETRIC_ERROR_USER_CANCELED", jint>(); }
	static jint BIOMETRIC_ERROR_VENDOR() { return get_static_field<"BIOMETRIC_ERROR_VENDOR", jint>(); }

	void authenticate(jni::ref<android::hardware::biometrics::BiometricPrompt_CryptoObject> crypto, jni::ref<android::os::CancellationSignal> cancel, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback) { return call_method<"authenticate", void>(crypto, cancel, executor, callback); }
	void authenticate(jni::ref<android::os::CancellationSignal> cancel, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::hardware::biometrics::BiometricPrompt_AuthenticationCallback> callback) { return call_method<"authenticate", void>(cancel, executor, callback); }

protected:

	BiometricPrompt(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICPROMPT
