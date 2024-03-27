// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/cookie/CookieSpecFactory.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class BestMatchSpecFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::BestMatchSpecFactory>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/BestMatchSpecFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::cookie::CookieSpecFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/cookie/CookieSpec.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::BestMatchSpecFactory : public jni::object_base<"org/apache/http/impl/cookie/BestMatchSpecFactory",
	java::lang::Object,
	org::apache::http::cookie::CookieSpecFactory>
{
public:

	static jni::ref<org::apache::http::impl::cookie::BestMatchSpecFactory> new_object() { return base_::new_object(); }
	jni::ref<org::apache::http::cookie::CookieSpec> newInstance(jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"newInstance", jni::ref<org::apache::http::cookie::CookieSpec>>(params); }

protected:

	BestMatchSpecFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPECFACTORY
