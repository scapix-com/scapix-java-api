// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::biometrics { class BiometricManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::biometrics::BiometricManager>
{
	static constexpr fixed_string class_name = "android/hardware/biometrics/BiometricManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/biometrics/BiometricManager_Authenticators.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::biometrics::BiometricManager : public jni::object_base<"android/hardware/biometrics/BiometricManager",
	java::lang::Object>
{
public:

	using Authenticators = BiometricManager_Authenticators;

	static jint BIOMETRIC_ERROR_HW_UNAVAILABLE() { return get_static_field<"BIOMETRIC_ERROR_HW_UNAVAILABLE", jint>(); }
	static jint BIOMETRIC_ERROR_NONE_ENROLLED() { return get_static_field<"BIOMETRIC_ERROR_NONE_ENROLLED", jint>(); }
	static jint BIOMETRIC_ERROR_NO_HARDWARE() { return get_static_field<"BIOMETRIC_ERROR_NO_HARDWARE", jint>(); }
	static jint BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED() { return get_static_field<"BIOMETRIC_ERROR_SECURITY_UPDATE_REQUIRED", jint>(); }
	static jint BIOMETRIC_SUCCESS() { return get_static_field<"BIOMETRIC_SUCCESS", jint>(); }

	jint canAuthenticate() { return call_method<"canAuthenticate", jint>(); }
	jint canAuthenticate(jint authenticators) { return call_method<"canAuthenticate", jint>(authenticators); }

protected:

	BiometricManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_BIOMETRICS_BIOMETRICMANAGER
