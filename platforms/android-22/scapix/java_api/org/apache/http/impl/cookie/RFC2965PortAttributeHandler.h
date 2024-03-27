// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/cookie/CookieAttributeHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class RFC2965PortAttributeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::RFC2965PortAttributeHandler>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/RFC2965PortAttributeHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::cookie::CookieAttributeHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/cookie/Cookie.h>
#include <scapix/java_api/org/apache/http/cookie/CookieOrigin.h>
#include <scapix/java_api/org/apache/http/cookie/SetCookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::RFC2965PortAttributeHandler : public jni::object_base<"org/apache/http/impl/cookie/RFC2965PortAttributeHandler",
	java::lang::Object,
	org::apache::http::cookie::CookieAttributeHandler>
{
public:

	static jni::ref<org::apache::http::impl::cookie::RFC2965PortAttributeHandler> new_object() { return base_::new_object(); }
	void parse(jni::ref<org::apache::http::cookie::SetCookie> cookie, jni::ref<java::lang::String> portValue) { return call_method<"parse", void>(cookie, portValue); }
	void validate(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"validate", void>(cookie, origin); }
	jboolean match(jni::ref<org::apache::http::cookie::Cookie> cookie, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"match", jboolean>(cookie, origin); }

protected:

	RFC2965PortAttributeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965PORTATTRIBUTEHANDLER