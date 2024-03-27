// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NIO_CH_NET_FWD
#define SCAPIX_JAVA_API_SUN_NIO_CH_NET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::nio::ch { class Net; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::nio::ch::Net>
{
	static constexpr fixed_string class_name = "sun/nio/ch/Net";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_NET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NIO_CH_NET)
#define SCAPIX_JAVA_API_SUN_NIO_CH_NET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/net/SocketAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::nio::ch::Net : public jni::object_base<"sun/nio/ch/Net",
	java::lang::Object>
{
public:

	static jint SHUT_RD() { return get_static_field<"SHUT_RD", jint>(); }
	static jint SHUT_WR() { return get_static_field<"SHUT_WR", jint>(); }
	static jint SHUT_RDWR() { return get_static_field<"SHUT_RDWR", jint>(); }
	static jshort POLLIN() { return get_static_field<"POLLIN", jshort>(); }
	static jshort POLLOUT() { return get_static_field<"POLLOUT", jshort>(); }
	static jshort POLLERR() { return get_static_field<"POLLERR", jshort>(); }
	static jshort POLLHUP() { return get_static_field<"POLLHUP", jshort>(); }
	static jshort POLLNVAL() { return get_static_field<"POLLNVAL", jshort>(); }
	static jshort POLLCONN() { return get_static_field<"POLLCONN", jshort>(); }

	static jni::ref<java::net::InetSocketAddress> checkAddress(jni::ref<java::net::SocketAddress> sa) { return call_static_method<"checkAddress", jni::ref<java::net::InetSocketAddress>>(sa); }
	static jboolean isFastTcpLoopbackRequested() { return call_static_method<"isFastTcpLoopbackRequested", jboolean>(); }
	static void bind(jni::ref<java::io::FileDescriptor> fd, jni::ref<java::net::InetAddress> addr, jint port) { return call_static_method<"bind", void>(fd, addr, port); }
	static jint accept(jni::ref<java::io::FileDescriptor> p1, jni::ref<java::io::FileDescriptor> p2, jni::ref<jni::array<java::net::InetSocketAddress>> p3) { return call_static_method<"accept", jint>(p1, p2, p3); }
	static jni::ref<java::net::InetSocketAddress> localAddress(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"localAddress", jni::ref<java::net::InetSocketAddress>>(fd); }
	static jboolean pollConnect(jni::ref<java::io::FileDescriptor> p1, jlong p2) { return call_static_method<"pollConnect", jboolean>(p1, p2); }

protected:

	Net(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NIO_CH_NET
