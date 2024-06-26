// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::params { class HttpParams; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::params::HttpParams>
{
	static constexpr fixed_string class_name = "org/apache/http/params/HttpParams";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::params::HttpParams : public jni::object_base<"org/apache/http/params/HttpParams",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getParameter(jni::ref<java::lang::String> p1) { return call_method<"getParameter", jni::ref<java::lang::Object>>(p1); }
	jni::ref<org::apache::http::params::HttpParams> setParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setParameter", jni::ref<org::apache::http::params::HttpParams>>(p1, p2); }
	jni::ref<org::apache::http::params::HttpParams> copy() { return call_method<"copy", jni::ref<org::apache::http::params::HttpParams>>(); }
	jboolean removeParameter(jni::ref<java::lang::String> p1) { return call_method<"removeParameter", jboolean>(p1); }
	jlong getLongParameter(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"getLongParameter", jlong>(p1, p2); }
	jni::ref<org::apache::http::params::HttpParams> setLongParameter(jni::ref<java::lang::String> p1, jlong p2) { return call_method<"setLongParameter", jni::ref<org::apache::http::params::HttpParams>>(p1, p2); }
	jint getIntParameter(jni::ref<java::lang::String> p1, jint p2) { return call_method<"getIntParameter", jint>(p1, p2); }
	jni::ref<org::apache::http::params::HttpParams> setIntParameter(jni::ref<java::lang::String> p1, jint p2) { return call_method<"setIntParameter", jni::ref<org::apache::http::params::HttpParams>>(p1, p2); }
	jdouble getDoubleParameter(jni::ref<java::lang::String> p1, jdouble p2) { return call_method<"getDoubleParameter", jdouble>(p1, p2); }
	jni::ref<org::apache::http::params::HttpParams> setDoubleParameter(jni::ref<java::lang::String> p1, jdouble p2) { return call_method<"setDoubleParameter", jni::ref<org::apache::http::params::HttpParams>>(p1, p2); }
	jboolean getBooleanParameter(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getBooleanParameter", jboolean>(p1, p2); }
	jni::ref<org::apache::http::params::HttpParams> setBooleanParameter(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setBooleanParameter", jni::ref<org::apache::http::params::HttpParams>>(p1, p2); }
	jboolean isParameterTrue(jni::ref<java::lang::String> p1) { return call_method<"isParameterTrue", jboolean>(p1); }
	jboolean isParameterFalse(jni::ref<java::lang::String> p1) { return call_method<"isParameterFalse", jboolean>(p1); }

protected:

	HttpParams(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PARAMS_HTTPPARAMS
