// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/cookie/CookieAttributeHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class RFC2965VersionAttributeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::RFC2965VersionAttributeHandler>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/RFC2965VersionAttributeHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::cookie::CookieAttributeHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/cookie/Cookie.h>
#include <scapix/java_api/org/apache/http/cookie/CookieOrigin.h>
#include <scapix/java_api/org/apache/http/cookie/SetCookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::RFC2965VersionAttributeHandler : public jni::object_base<"org/apache/http/impl/cookie/RFC2965VersionAttributeHandler",
	java::lang::Object,
	org::apache::http::cookie::CookieAttributeHandler>
{
public:

	static jni::ref<org::apache::http::impl::cookie::RFC2965VersionAttributeHandler> new_object() { return base_::new_object(); }
	void parse(jni::ref<org::apache::http::cookie::SetCookie> cookie, jni::ref<java::lang::String> value) { return call_method<"parse", void>(cookie, value); }
	void validate(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"validate", void>(cookie, origin); }
	jboolean match(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"match", jboolean>(cookie, origin); }

protected:

	RFC2965VersionAttributeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965VERSIONATTRIBUTEHANDLER
