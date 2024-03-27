// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/cookie/AbstractCookieAttributeHandler.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class BasicCommentHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::BasicCommentHandler>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/BasicCommentHandler";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::cookie::AbstractCookieAttributeHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/cookie/SetCookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::BasicCommentHandler : public jni::object_base<"org/apache/http/impl/cookie/BasicCommentHandler",
	org::apache::http::impl::cookie::AbstractCookieAttributeHandler>
{
public:

	static jni::ref<org::apache::http::impl::cookie::BasicCommentHandler> new_object() { return base_::new_object(); }
	void parse(jni::ref<org::apache::http::cookie::SetCookie> cookie, jni::ref<java::lang::String> value) { return call_method<"parse", void>(cookie, value); }

protected:

	BasicCommentHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_BASICCOMMENTHANDLER