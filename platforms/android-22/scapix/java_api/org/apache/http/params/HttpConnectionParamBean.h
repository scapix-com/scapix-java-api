// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/params/HttpAbstractParamBean.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::params { class HttpConnectionParamBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::params::HttpConnectionParamBean>
{
	static constexpr fixed_string class_name = "org/apache/http/params/HttpConnectionParamBean";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::params::HttpAbstractParamBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::params::HttpConnectionParamBean : public jni::object_base<"org/apache/http/params/HttpConnectionParamBean",
	org::apache::http::params::HttpAbstractParamBean>
{
public:

	static jni::ref<org::apache::http::params::HttpConnectionParamBean> new_object(jni::ref<org::apache::http::params::HttpParams> params) { return base_::new_object(params); }
	void setSoTimeout(jint soTimeout) { return call_method<"setSoTimeout", void>(soTimeout); }
	void setTcpNoDelay(jboolean tcpNoDelay) { return call_method<"setTcpNoDelay", void>(tcpNoDelay); }
	void setSocketBufferSize(jint socketBufferSize) { return call_method<"setSocketBufferSize", void>(socketBufferSize); }
	void setLinger(jint linger) { return call_method<"setLinger", void>(linger); }
	void setConnectionTimeout(jint connectionTimeout) { return call_method<"setConnectionTimeout", void>(connectionTimeout); }
	void setStaleCheckingEnabled(jboolean staleCheckingEnabled) { return call_method<"setStaleCheckingEnabled", void>(staleCheckingEnabled); }

protected:

	HttpConnectionParamBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPCONNECTIONPARAMBEAN
