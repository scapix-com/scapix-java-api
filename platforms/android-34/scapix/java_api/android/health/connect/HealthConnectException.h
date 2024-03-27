// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/RuntimeException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::health::connect { class HealthConnectException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::health::connect::HealthConnectException>
{
	static constexpr fixed_string class_name = "android/health/connect/HealthConnectException";
	using base_classes = std::tuple<scapix::java_api::java::lang::RuntimeException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::health::connect::HealthConnectException : public jni::object_base<"android/health/connect/HealthConnectException",
	java::lang::RuntimeException>
{
public:

	static jint ERROR_DATA_SYNC_IN_PROGRESS() { return get_static_field<"ERROR_DATA_SYNC_IN_PROGRESS", jint>(); }
	static jint ERROR_INTERNAL() { return get_static_field<"ERROR_INTERNAL", jint>(); }
	static jint ERROR_INVALID_ARGUMENT() { return get_static_field<"ERROR_INVALID_ARGUMENT", jint>(); }
	static jint ERROR_IO() { return get_static_field<"ERROR_IO", jint>(); }
	static jint ERROR_RATE_LIMIT_EXCEEDED() { return get_static_field<"ERROR_RATE_LIMIT_EXCEEDED", jint>(); }
	static jint ERROR_REMOTE() { return get_static_field<"ERROR_REMOTE", jint>(); }
	static jint ERROR_SECURITY() { return get_static_field<"ERROR_SECURITY", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }
	static jint ERROR_UNSUPPORTED_OPERATION() { return get_static_field<"ERROR_UNSUPPORTED_OPERATION", jint>(); }

	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }

protected:

	HealthConnectException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HEALTH_CONNECT_HEALTHCONNECTEXCEPTION
