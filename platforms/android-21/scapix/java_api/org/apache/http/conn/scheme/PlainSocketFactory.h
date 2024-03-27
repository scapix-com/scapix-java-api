// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/scheme/SocketFactory.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::scheme { class PlainSocketFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::scheme::PlainSocketFactory>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/scheme/PlainSocketFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::scheme::SocketFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/org/apache/http/conn/scheme/HostNameResolver.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::scheme::PlainSocketFactory : public jni::object_base<"org/apache/http/conn/scheme/PlainSocketFactory",
	java::lang::Object,
	org::apache::http::conn::scheme::SocketFactory>
{
public:

	static jni::ref<org::apache::http::conn::scheme::PlainSocketFactory> new_object(jni::ref<org::apache::http::conn::scheme::HostNameResolver> nameResolver) { return base_::new_object(nameResolver); }
	static jni::ref<org::apache::http::conn::scheme::PlainSocketFactory> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::conn::scheme::PlainSocketFactory> getSocketFactory() { return call_static_method<"getSocketFactory", jni::ref<org::apache::http::conn::scheme::PlainSocketFactory>>(); }
	jni::ref<java::net::Socket> createSocket() { return call_method<"createSocket", jni::ref<java::net::Socket>>(); }
	jni::ref<java::net::Socket> connectSocket(jni::ref<java::net::Socket> sock, jni::ref<java::lang::String> host, jint port, jni::ref<java::net::InetAddress> localAddress, jint localPort, jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"connectSocket", jni::ref<java::net::Socket>>(sock, host, port, localAddress, localPort, params); }
	jboolean isSecure(jni::ref<java::net::Socket> sock) { return call_method<"isSecure", jboolean>(sock); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	PlainSocketFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_SCHEME_PLAINSOCKETFACTORY
