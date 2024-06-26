// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/net/http/HttpException.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::http { class NetworkException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::http::NetworkException>
{
	static constexpr fixed_string class_name = "android/net/http/NetworkException";
	using base_classes = std::tuple<scapix::java_api::android::net::http::HttpException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION)
#define SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::http::NetworkException : public jni::object_base<"android/net/http/NetworkException",
	android::net::http::HttpException>
{
public:

	static jint ERROR_ADDRESS_UNREACHABLE() { return get_static_field<"ERROR_ADDRESS_UNREACHABLE", jint>(); }
	static jint ERROR_CONNECTION_CLOSED() { return get_static_field<"ERROR_CONNECTION_CLOSED", jint>(); }
	static jint ERROR_CONNECTION_REFUSED() { return get_static_field<"ERROR_CONNECTION_REFUSED", jint>(); }
	static jint ERROR_CONNECTION_RESET() { return get_static_field<"ERROR_CONNECTION_RESET", jint>(); }
	static jint ERROR_CONNECTION_TIMED_OUT() { return get_static_field<"ERROR_CONNECTION_TIMED_OUT", jint>(); }
	static jint ERROR_HOSTNAME_NOT_RESOLVED() { return get_static_field<"ERROR_HOSTNAME_NOT_RESOLVED", jint>(); }
	static jint ERROR_INTERNET_DISCONNECTED() { return get_static_field<"ERROR_INTERNET_DISCONNECTED", jint>(); }
	static jint ERROR_NETWORK_CHANGED() { return get_static_field<"ERROR_NETWORK_CHANGED", jint>(); }
	static jint ERROR_OTHER() { return get_static_field<"ERROR_OTHER", jint>(); }
	static jint ERROR_QUIC_PROTOCOL_FAILED() { return get_static_field<"ERROR_QUIC_PROTOCOL_FAILED", jint>(); }
	static jint ERROR_TIMED_OUT() { return get_static_field<"ERROR_TIMED_OUT", jint>(); }

	static jni::ref<android::net::http::NetworkException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }
	jint getErrorCode() { return call_method<"getErrorCode", jint>(); }
	jboolean isImmediatelyRetryable() { return call_method<"isImmediatelyRetryable", jboolean>(); }

protected:

	NetworkException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_HTTP_NETWORKEXCEPTION
