// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS_FWD
#define SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class StandardSocketOptions; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::StandardSocketOptions>
{
	static constexpr fixed_string class_name = "java/net/StandardSocketOptions";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS)
#define SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/SocketOption.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::StandardSocketOptions : public jni::object_base<"java/net/StandardSocketOptions",
	java::lang::Object>
{
public:

	static jni::ref<java::net::SocketOption> SO_BROADCAST() { return get_static_field<"SO_BROADCAST", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_KEEPALIVE() { return get_static_field<"SO_KEEPALIVE", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_SNDBUF() { return get_static_field<"SO_SNDBUF", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_RCVBUF() { return get_static_field<"SO_RCVBUF", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_REUSEADDR() { return get_static_field<"SO_REUSEADDR", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_REUSEPORT() { return get_static_field<"SO_REUSEPORT", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> SO_LINGER() { return get_static_field<"SO_LINGER", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> IP_TOS() { return get_static_field<"IP_TOS", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> IP_MULTICAST_IF() { return get_static_field<"IP_MULTICAST_IF", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> IP_MULTICAST_TTL() { return get_static_field<"IP_MULTICAST_TTL", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> IP_MULTICAST_LOOP() { return get_static_field<"IP_MULTICAST_LOOP", jni::ref<java::net::SocketOption>>(); }
	static jni::ref<java::net::SocketOption> TCP_NODELAY() { return get_static_field<"TCP_NODELAY", jni::ref<java::net::SocketOption>>(); }


protected:

	StandardSocketOptions(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_STANDARDSOCKETOPTIONS
