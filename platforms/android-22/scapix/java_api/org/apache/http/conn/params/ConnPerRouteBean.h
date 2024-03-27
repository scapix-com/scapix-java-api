// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/params/ConnPerRoute.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::params { class ConnPerRouteBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::params::ConnPerRouteBean>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/params/ConnPerRouteBean";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::params::ConnPerRoute>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::params::ConnPerRouteBean : public jni::object_base<"org/apache/http/conn/params/ConnPerRouteBean",
	java::lang::Object,
	org::apache::http::conn::params::ConnPerRoute>
{
public:

	static jint DEFAULT_MAX_CONNECTIONS_PER_ROUTE() { return get_static_field<"DEFAULT_MAX_CONNECTIONS_PER_ROUTE", jint>(); }

	static jni::ref<org::apache::http::conn::params::ConnPerRouteBean> new_object(jint defaultMax) { return base_::new_object(defaultMax); }
	static jni::ref<org::apache::http::conn::params::ConnPerRouteBean> new_object() { return base_::new_object(); }
	jint getDefaultMax() { return call_method<"getDefaultMax", jint>(); }
	void setDefaultMaxPerRoute(jint max) { return call_method<"setDefaultMaxPerRoute", void>(max); }
	void setMaxForRoute(jni::ref<org::apache::http::conn::routing::HttpRoute> route, jint max) { return call_method<"setMaxForRoute", void>(route, max); }
	jint getMaxForRoute(jni::ref<org::apache::http::conn::routing::HttpRoute> route) { return call_method<"getMaxForRoute", jint>(route); }
	void setMaxForRoutes(jni::ref<java::util::Map> map) { return call_method<"setMaxForRoutes", void>(map); }

protected:

	ConnPerRouteBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTEBEAN
