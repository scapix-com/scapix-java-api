// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/cookie/CookieSpecBase.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::cookie { class NetscapeDraftSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::cookie::NetscapeDraftSpec>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/cookie/NetscapeDraftSpec";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::cookie::CookieSpecBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/Header.h>
#include <scapix/java_api/org/apache/http/cookie/CookieOrigin.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::cookie::NetscapeDraftSpec : public jni::object_base<"org/apache/http/impl/cookie/NetscapeDraftSpec",
	org::apache::http::impl::cookie::CookieSpecBase>
{
public:

	static jni::ref<org::apache::http::impl::cookie::NetscapeDraftSpec> new_object(jni::ref<jni::array<java::lang::String>> datepatterns) { return base_::new_object(datepatterns); }
	static jni::ref<org::apache::http::impl::cookie::NetscapeDraftSpec> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> parse(jni::ref<org::apache::http::Header> header, jni::ref<org::apache::http::cookie::CookieOrigin> origin) { return call_method<"parse", jni::ref<java::util::List>>(header, origin); }
	jni::ref<java::util::List> formatCookies(jni::ref<java::util::List> cookies) { return call_method<"formatCookies", jni::ref<java::util::List>>(cookies); }
	jint getVersion() { return call_method<"getVersion", jint>(); }
	jni::ref<org::apache::http::Header> getVersionHeader() { return call_method<"getVersionHeader", jni::ref<org::apache::http::Header>>(); }

protected:

	NetscapeDraftSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_COOKIE_NETSCAPEDRAFTSPEC
