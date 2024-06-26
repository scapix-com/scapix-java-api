// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/cookie/CookieSpec.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class BestMatchSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::BestMatchSpec>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/BestMatchSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::cookie::CookieSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/Header.h>
#include <scapix/java_api/org/apache/http/cookie/Cookie.h>
#include <scapix/java_api/org/apache/http/cookie/CookieOrigin.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::BestMatchSpec : public jni::object_base<"org/apache/http/impl/cookie/BestMatchSpec",
	java::lang::Object,
	org::apache::http::cookie::CookieSpec>
{
public:

	static jni::ref<org::apache::http::impl::cookie::BestMatchSpec> new_object(jni::ref<jni::array<java::lang::String>> datepatterns, jboolean oneHeader) { return base_::new_object(datepatterns, oneHeader); }
	static jni::ref<org::apache::http::impl::cookie::BestMatchSpec> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> parse(jni::ref<org::apache::http::Header> header, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"parse", jni::ref<java::util::List>>(header, origin); }
	void validate(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"validate", void>(cookie, origin); }
	jboolean match(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"match", jboolean>(cookie, origin); }
	jni::ref<java::util::List> formatCookies(jni::ref<java::util::List> cookies) { return call_method<"formatCookies", jni::ref<java::util::List>>(cookies); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jni::ref<org::apache::http::Header> getVersionHeader() { return call_method<"getVersionHeader", jni::ref<org::apache::http::Header>>(); }

protected:

	BestMatchSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BESTMATCHSPEC
