// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::cookie { class CookieSpecRegistry; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::cookie::CookieSpecRegistry>
{
	static constexpr fixed_string class_name = "org/apache/http/cookie/CookieSpecRegistry";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/apache/http/cookie/CookieSpec.h>
#include <scapix/java_api/org/apache/http/cookie/CookieSpecFactory.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::cookie::CookieSpecRegistry : public jni::object_base<"org/apache/http/cookie/CookieSpecRegistry",
	java::lang::Object>
{
public:

	static jni::ref<org::apache::http::cookie::CookieSpecRegistry> new_object() { return base_::new_object(); }
	void register_(jni::ref<java::lang::String> name, jni::ref<org::apache::http::cookie::CookieSpecFactory> factory) { return call_method<"register", void>(name, factory); }
	void unregister(jni::ref<java::lang::String> id) { return call_method<"unregister", void>(id); }
	jni::ref<org::apache::http::cookie::CookieSpec> getCookieSpec(jni::ref<java::lang::String> name, jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"getCookieSpec", jni::ref<org::apache::http::cookie::CookieSpec>>(name, params); }
	jni::ref<org::apache::http::cookie::CookieSpec> getCookieSpec(jni::ref<java::lang::String> name) { return call_method<"getCookieSpec", jni::ref<org::apache::http::cookie::CookieSpec>>(name); }
	jni::ref<java::util::List> getSpecNames() { return call_method<"getSpecNames", jni::ref<java::util::List>>(); }
	void setItems(jni::ref<java::util::Map> map) { return call_method<"setItems", void>(map); }

protected:

	CookieSpecRegistry(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_COOKIE_COOKIESPECREGISTRY
