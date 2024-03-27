// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::params { class ConnPerRoute; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::params::ConnPerRoute>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/params/ConnPerRoute";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/conn/routing/HttpRoute.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::params::ConnPerRoute : public jni::object_base<"org/apache/http/conn/params/ConnPerRoute",
	java::lang::Object>
{
public:

	jint getMaxForRoute(jni::ref<org::apache::http::conn::routing::HttpRoute> p1) { return call_method<"getMaxForRoute", jint>(p1); }

protected:

	ConnPerRoute(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNPERROUTE