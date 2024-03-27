// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/params/HttpAbstractParamBean.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::params { class ConnManagerParamBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::params::ConnManagerParamBean>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/params/ConnManagerParamBean";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::params::HttpAbstractParamBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/conn/params/ConnPerRouteBean.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::params::ConnManagerParamBean : public jni::object_base<"org/apache/http/conn/params/ConnManagerParamBean",
	org::apache::http::params::HttpAbstractParamBean>
{
public:

	static jni::ref<org::apache::http::conn::params::ConnManagerParamBean> new_object(jni::ref<org::apache::http::params::HttpParams> params) { return base_::new_object(params); }
	void setTimeout(jlong timeout) { return call_method<"setTimeout", void>(timeout); }
	void setMaxTotalConnections(jint maxConnections) { return call_method<"setMaxTotalConnections", void>(maxConnections); }
	void setConnectionsPerRoute(jni::ref<org::apache::http::conn::params::ConnPerRouteBean> connPerRoute) { return call_method<"setConnectionsPerRoute", void>(connPerRoute); }

protected:

	ConnManagerParamBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNMANAGERPARAMBEAN