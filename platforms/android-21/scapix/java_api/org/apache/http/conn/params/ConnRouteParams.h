// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/params/ConnRoutePNames.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::params { class ConnRouteParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::params::ConnRouteParams>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/params/ConnRouteParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::params::ConnRoutePNames>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/org/apache/http/HttpHost.h>
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::params::ConnRouteParams : public jni::object_base<"org/apache/http/conn/params/ConnRouteParams",
	java::lang::Object,
	org::apache::http::conn::params::ConnRoutePNames>
{
public:

	static jni::ref<org::apache::http::HttpHost> NO_HOST() { return get_static_field<"NO_HOST", jni::ref<org::apache::http::HttpHost>>(); }
	static jni::ref<org::apache::http::conn::routing::HttpRoute> NO_ROUTE() { return get_static_field<"NO_ROUTE", jni::ref<org::apache::http::conn::routing::HttpRoute>>(); }

	static jni::ref<org::apache::http::HttpHost> getDefaultProxy(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"getDefaultProxy", jni::ref<org::apache::http::HttpHost>>(params); }
	static void setDefaultProxy(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<org::apache::http::HttpHost> proxy) { return call_static_method<"setDefaultProxy", void>(params, proxy); }
	static jni::ref<org::apache::http::conn::routing::HttpRoute> getForcedRoute(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"getForcedRoute", jni::ref<org::apache::http::conn::routing::HttpRoute>>(params); }
	static void setForcedRoute(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<org::apache::http::conn::routing::HttpRoute> route) { return call_static_method<"setForcedRoute", void>(params, route); }
	static jni::ref<java::net::InetAddress> getLocalAddress(jni::ref<org::apache::http::params::HttpParams> params) { return call_static_method<"getLocalAddress", jni::ref<java::net::InetAddress>>(params); }
	static void setLocalAddress(jni::ref<org::apache::http::params::HttpParams> params, jni::ref<java::net::InetAddress> local) { return call_static_method<"setLocalAddress", void>(params, local); }

protected:

	ConnRouteParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPARAMS
