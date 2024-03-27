// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::net { class SocketFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::net::SocketFactory>
{
	static constexpr fixed_string class_name = "javax/net/SocketFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY)
#define SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::net::SocketFactory : public jni::object_base<"javax/net/SocketFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::net::SocketFactory> getDefault() { return call_static_method<"getDefault", jni::ref<javax::net::SocketFactory>>(); }
	jni::ref<java::net::Socket> createSocket() { return call_method<"createSocket", jni::ref<java::net::Socket>>(); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> p1, jint p2) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::lang::String> p1, jint p2, jni::ref<java::net::InetAddress> p3, jint p4) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2, p3, p4); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::InetAddress> p1, jint p2) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2); }
	jni::ref<java::net::Socket> createSocket(jni::ref<java::net::InetAddress> p1, jint p2, jni::ref<java::net::InetAddress> p3, jint p4) { return call_method<"createSocket", jni::ref<java::net::Socket>>(p1, p2, p3, p4); }

protected:

	SocketFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NET_SOCKETFACTORY
