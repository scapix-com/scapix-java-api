// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::params { class ConnRoutePNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::params::ConnRoutePNames>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/params/ConnRoutePNames";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::params::ConnRoutePNames : public jni::object_base<"org/apache/http/conn/params/ConnRoutePNames",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> DEFAULT_PROXY() { return get_static_field<"DEFAULT_PROXY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> FORCED_ROUTE() { return get_static_field<"FORCED_ROUTE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOCAL_ADDRESS() { return get_static_field<"LOCAL_ADDRESS", jni::ref<java::lang::String>>(); }


protected:

	ConnRoutePNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_PARAMS_CONNROUTEPNAMES