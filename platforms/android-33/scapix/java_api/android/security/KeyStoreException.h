// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Exception.h>

#ifndef SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::security { class KeyStoreException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::security::KeyStoreException>
{
	static constexpr fixed_string class_name = "android/security/KeyStoreException";
	using base_classes = std::tuple<scapix::java_api::java::lang::Exception>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::security::KeyStoreException : public jni::object_base<"android/security/KeyStoreException",
	java::lang::Exception>
{
public:

	static jint ERROR_ATTESTATION_CHALLENGE_TOO_LARGE() { return get_static_field<"ERROR_ATTESTATION_CHALLENGE_TOO_LARGE", jint>(); }
	static jint ERROR_ATTESTATION_KEYS_UNAVAILABLE() { return get_static_field<"ERROR_ATTESTATION_KEYS_UNAVAILABLE", jint>(); }
	static jint ERROR_ID_ATTESTATION_FAILURE() { return get_static_field<"ERROR_ID_ATTESTATION_FAILURE", jint>(); }
	static jint ERROR_INCORRECT_USAGE() { return get_static_field<"ERROR_INCORRECT_USAGE", jint>(); }
	static jint ERROR_INTERNAL_SYSTEM_ERROR() { return get_static_field<"ERROR_INTERNAL_SYSTEM_ERROR", jint>(); }
	static jint ERROR_KEYMINT_FAILURE() { return get_static_field<"ERROR_KEYMINT_FAILURE", jint>(); }
	static jint ERROR_KEYSTORE_FAILURE() { return get_static_field<"ERROR_KEYSTORE_FAILURE", jint>(); }
	static jint ERROR_KEYSTORE_UNINITIALIZED() { return get_static_field<"ERROR_KEYSTORE_UNINITIALIZED", jint>(); }
	static jint ERROR_KEY_CORRUPTED() { return get_static_field<"ERROR_KEY_CORRUPTED", jint>(); }
	static jint ERROR_KEY_DOES_NOT_EXIST() { return get_static_field<"ERROR_KEY_DOES_NOT_EXIST", jint>(); }
	static jint ERROR_KEY_NOT_TEMPORALLY_VALID() { return get_static_field<"ERROR_KEY_NOT_TEMPORALLY_VALID", jint>(); }
	static jint ERROR_KEY_OPERATION_EXPIRED() { return get_static_field<"ERROR_KEY_OPERATION_EXPIRED", jint>(); }
	static jint ERROR_OTHER() { return get_static_field<"ERROR_OTHER", jint>(); }
	static jint ERROR_PERMISSION_DENIED() { return get_static_field<"ERROR_PERMISSION_DENIED", jint>(); }
	static jint ERROR_UNIMPLEMENTED() { return get_static_field<"ERROR_UNIMPLEMENTED", jint>(); }
	static jint ERROR_USER_AUTHENTICATION_REQUIRED() { return get_static_field<"ERROR_USER_AUTHENTICATION_REQUIRED", jint>(); }
	static jint RETRY_NEVER() { return get_static_field<"RETRY_NEVER", jint>(); }
	static jint RETRY_WHEN_CONNECTIVITY_AVAILABLE() { return get_static_field<"RETRY_WHEN_CONNECTIVITY_AVAILABLE", jint>(); }
	static jint RETRY_WITH_EXPONENTIAL_BACKOFF() { return get_static_field<"RETRY_WITH_EXPONENTIAL_BACKOFF", jint>(); }

	jint getNumericErrorCode() { return call_method<"getNumericErrorCode", jint>(); }
	jboolean isTransientFailure() { return call_method<"isTransientFailure", jboolean>(); }
	jboolean requiresUserAuthentication() { return call_method<"requiresUserAuthentication", jboolean>(); }
	jboolean isSystemError() { return call_method<"isSystemError", jboolean>(); }
	jint getRetryPolicy() { return call_method<"getRetryPolicy", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	KeyStoreException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_SECURITY_KEYSTOREEXCEPTION
