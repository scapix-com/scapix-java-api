// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class SocketKeepalive; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::SocketKeepalive>
{
	static constexpr fixed_string class_name = "android/net/SocketKeepalive";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE)
#define SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/SocketKeepalive_Callback.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::SocketKeepalive : public jni::object_base<"android/net/SocketKeepalive",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using Callback = SocketKeepalive_Callback;

	static jint ERROR_HARDWARE_ERROR() { return get_static_field<"ERROR_HARDWARE_ERROR", jint>(); }
	static jint ERROR_INSUFFICIENT_RESOURCES() { return get_static_field<"ERROR_INSUFFICIENT_RESOURCES", jint>(); }
	static jint ERROR_INVALID_INTERVAL() { return get_static_field<"ERROR_INVALID_INTERVAL", jint>(); }
	static jint ERROR_INVALID_IP_ADDRESS() { return get_static_field<"ERROR_INVALID_IP_ADDRESS", jint>(); }
	static jint ERROR_INVALID_LENGTH() { return get_static_field<"ERROR_INVALID_LENGTH", jint>(); }
	static jint ERROR_INVALID_NETWORK() { return get_static_field<"ERROR_INVALID_NETWORK", jint>(); }
	static jint ERROR_INVALID_PORT() { return get_static_field<"ERROR_INVALID_PORT", jint>(); }
	static jint ERROR_INVALID_SOCKET() { return get_static_field<"ERROR_INVALID_SOCKET", jint>(); }
	static jint ERROR_SOCKET_NOT_IDLE() { return get_static_field<"ERROR_SOCKET_NOT_IDLE", jint>(); }
	static jint ERROR_UNSUPPORTED() { return get_static_field<"ERROR_UNSUPPORTED", jint>(); }

	void start(jint intervalSec) { return call_method<"start", void>(intervalSec); }
	void stop() { return call_method<"stop", void>(); }
	void close() { return call_method<"close", void>(); }

protected:

	SocketKeepalive(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_SOCKETKEEPALIVE
