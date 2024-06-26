// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::fingerprint { class FingerprintManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::fingerprint::FingerprintManager>
{
	static constexpr fixed_string class_name = "android/hardware/fingerprint/FingerprintManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/fingerprint/FingerprintManager_AuthenticationCallback.h>
#include <scapix/java_api/android/hardware/fingerprint/FingerprintManager_CryptoObject.h>
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/android/hardware/fingerprint/FingerprintManager_AuthenticationResult.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::fingerprint::FingerprintManager : public jni::object_base<"android/hardware/fingerprint/FingerprintManager",
	java::lang::Object>
{
public:

	using AuthenticationCallback = FingerprintManager_AuthenticationCallback;
	using AuthenticationResult = FingerprintManager_AuthenticationResult;
	using CryptoObject = FingerprintManager_CryptoObject;

	static jint FINGERPRINT_ACQUIRED_GOOD() { return get_static_field<"FINGERPRINT_ACQUIRED_GOOD", jint>(); }
	static jint FINGERPRINT_ACQUIRED_IMAGER_DIRTY() { return get_static_field<"FINGERPRINT_ACQUIRED_IMAGER_DIRTY", jint>(); }
	static jint FINGERPRINT_ACQUIRED_INSUFFICIENT() { return get_static_field<"FINGERPRINT_ACQUIRED_INSUFFICIENT", jint>(); }
	static jint FINGERPRINT_ACQUIRED_PARTIAL() { return get_static_field<"FINGERPRINT_ACQUIRED_PARTIAL", jint>(); }
	static jint FINGERPRINT_ACQUIRED_TOO_FAST() { return get_static_field<"FINGERPRINT_ACQUIRED_TOO_FAST", jint>(); }
	static jint FINGERPRINT_ACQUIRED_TOO_SLOW() { return get_static_field<"FINGERPRINT_ACQUIRED_TOO_SLOW", jint>(); }
	static jint FINGERPRINT_ERROR_CANCELED() { return get_static_field<"FINGERPRINT_ERROR_CANCELED", jint>(); }
	static jint FINGERPRINT_ERROR_HW_UNAVAILABLE() { return get_static_field<"FINGERPRINT_ERROR_HW_UNAVAILABLE", jint>(); }
	static jint FINGERPRINT_ERROR_LOCKOUT() { return get_static_field<"FINGERPRINT_ERROR_LOCKOUT", jint>(); }
	static jint FINGERPRINT_ERROR_LOCKOUT_PERMANENT() { return get_static_field<"FINGERPRINT_ERROR_LOCKOUT_PERMANENT", jint>(); }
	static jint FINGERPRINT_ERROR_NO_SPACE() { return get_static_field<"FINGERPRINT_ERROR_NO_SPACE", jint>(); }
	static jint FINGERPRINT_ERROR_TIMEOUT() { return get_static_field<"FINGERPRINT_ERROR_TIMEOUT", jint>(); }
	static jint FINGERPRINT_ERROR_UNABLE_TO_PROCESS() { return get_static_field<"FINGERPRINT_ERROR_UNABLE_TO_PROCESS", jint>(); }
	static jint FINGERPRINT_ERROR_USER_CANCELED() { return get_static_field<"FINGERPRINT_ERROR_USER_CANCELED", jint>(); }
	static jint FINGERPRINT_ERROR_VENDOR() { return get_static_field<"FINGERPRINT_ERROR_VENDOR", jint>(); }

	void authenticate(jni::ref<android::hardware::fingerprint::FingerprintManager_CryptoObject> crypto, jni::ref<android::os::CancellationSignal> cancel, jint flags, jni::ref<android::hardware::fingerprint::FingerprintManager_AuthenticationCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"authenticate", void>(crypto, cancel, flags, callback, handler); }
	jboolean hasEnrolledFingerprints() { return call_method<"hasEnrolledFingerprints", jboolean>(); }
	jboolean isHardwareDetected() { return call_method<"isHardwareDetected", jboolean>(); }

protected:

	FingerprintManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_FINGERPRINT_FINGERPRINTMANAGER
