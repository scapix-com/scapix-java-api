// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class HttpServer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::HttpServer>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/HttpServer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpContext.h>
#include <scapix/java_api/com/sun/net/httpserver/HttpHandler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetSocketAddress.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::HttpServer : public jni::object_base<"com/sun/net/httpserver/HttpServer",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::net::httpserver::HttpServer> create() { return call_static_method<"create", jni::ref<com::sun::net::httpserver::HttpServer>>(); }
	static jni::ref<com::sun::net::httpserver::HttpServer> create(jni::ref<java::net::InetSocketAddress> p1, jint p2) { return call_static_method<"create", jni::ref<com::sun::net::httpserver::HttpServer>>(p1, p2); }
	void bind(jni::ref<java::net::InetSocketAddress> p1, jint p2) { return call_method<"bind", void>(p1, p2); }
	void start() { return call_method<"start", void>(); }
	void setExecutor(jni::ref<java::util::concurrent::Executor> p1) { return call_method<"setExecutor", void>(p1); }
	jni::ref<java::util::concurrent::Executor> getExecutor() { return call_method<"getExecutor", jni::ref<java::util::concurrent::Executor>>(); }
	void stop(jint p1) { return call_method<"stop", void>(p1); }
	jni::ref<com::sun::net::httpserver::HttpContext> createContext(jni::ref<java::lang::String> p1, jni::ref<com::sun::net::httpserver::HttpHandler> p2) { return call_method<"createContext", jni::ref<com::sun::net::httpserver::HttpContext>>(p1, p2); }
	jni::ref<com::sun::net::httpserver::HttpContext> createContext(jni::ref<java::lang::String> p1) { return call_method<"createContext", jni::ref<com::sun::net::httpserver::HttpContext>>(p1); }
	void removeContext(jni::ref<java::lang::String> p1) { return call_method<"removeContext", void>(p1); }
	void removeContext(jni::ref<com::sun::net::httpserver::HttpContext> p1) { return call_method<"removeContext", void>(p1); }
	jni::ref<java::net::InetSocketAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetSocketAddress>>(); }

protected:

	HttpServer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_HTTPSERVER
