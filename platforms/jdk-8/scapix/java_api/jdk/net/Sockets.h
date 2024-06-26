// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_NET_SOCKETS_FWD
#define SCAPIX_JAVA_API_JDK_NET_SOCKETS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::net { class Sockets; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::net::Sockets>
{
	static constexpr fixed_string class_name = "jdk/net/Sockets";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_SOCKETS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_NET_SOCKETS)
#define SCAPIX_JAVA_API_JDK_NET_SOCKETS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/ServerSocket.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/net/SocketOption.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::net::Sockets : public jni::object_base<"jdk/net/Sockets",
	java::lang::Object>
{
public:

	static void setOption(jni::ref<java::net::Socket> p1, jni::ref<java::net::SocketOption> p2, jni::ref<java::lang::Object> p3) { return call_static_method<"setOption", void>(p1, p2, p3); }
	static jni::ref<java::lang::Object> getOption(jni::ref<java::net::Socket> p1, jni::ref<java::net::SocketOption> p2) { return call_static_method<"getOption", jni::ref<java::lang::Object>>(p1, p2); }
	static void setOption(jni::ref<java::net::ServerSocket> p1, jni::ref<java::net::SocketOption> p2, jni::ref<java::lang::Object> p3) { return call_static_method<"setOption", void>(p1, p2, p3); }
	static jni::ref<java::lang::Object> getOption(jni::ref<java::net::ServerSocket> p1, jni::ref<java::net::SocketOption> p2) { return call_static_method<"getOption", jni::ref<java::lang::Object>>(p1, p2); }
	static void setOption(jni::ref<java::net::DatagramSocket> p1, jni::ref<java::net::SocketOption> p2, jni::ref<java::lang::Object> p3) { return call_static_method<"setOption", void>(p1, p2, p3); }
	static jni::ref<java::lang::Object> getOption(jni::ref<java::net::DatagramSocket> p1, jni::ref<java::net::SocketOption> p2) { return call_static_method<"getOption", jni::ref<java::lang::Object>>(p1, p2); }
	static jni::ref<java::util::Set> supportedOptions(jni::ref<java::lang::Class> p1) { return call_static_method<"supportedOptions", jni::ref<java::util::Set>>(p1); }

protected:

	Sockets(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_NET_SOCKETS
