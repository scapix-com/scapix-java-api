// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class Filter_Chain; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::Filter_Chain>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/Filter$Chain";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpExchange.h>
#include <scapix/java_api/com/sun/net/httpserver/HttpHandler.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::Filter_Chain : public jni::object_base<"com/sun/net/httpserver/Filter$Chain",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::net::httpserver::Filter_Chain> new_object(jni::ref<java::util::List> p1, jni::ref<com::sun::net::httpserver::HttpHandler> p2) { return base_::new_object(p1, p2); }
	void doFilter(jni::ref<com::sun::net::httpserver::HttpExchange> p1) { return call_method<"doFilter", void>(p1); }

protected:

	Filter_Chain(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_FILTER_CHAIN
