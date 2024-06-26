// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/params/HttpAbstractParamBean.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::cookie::params { class CookieSpecParamBean; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::cookie::params::CookieSpecParamBean>
{
	static constexpr fixed_string class_name = "org/apache/http/cookie/params/CookieSpecParamBean";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::params::HttpAbstractParamBean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::cookie::params::CookieSpecParamBean : public jni::object_base<"org/apache/http/cookie/params/CookieSpecParamBean",
	org::apache::http::params::HttpAbstractParamBean>
{
public:

	static jni::ref<org::apache::http::cookie::params::CookieSpecParamBean> new_object(jni::ref<org::apache::http::params::HttpParams> params) { return base_::new_object(params); }
	void setDatePatterns(jni::ref<java::util::Collection> patterns) { return call_method<"setDatePatterns", void>(patterns); }
	void setSingleHeader(jboolean singleHeader) { return call_method<"setSingleHeader", void>(singleHeader); }

protected:

	CookieSpecParamBean(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_PARAMS_COOKIESPECPARAMBEAN
