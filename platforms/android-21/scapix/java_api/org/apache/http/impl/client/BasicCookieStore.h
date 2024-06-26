// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/client/CookieStore.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::client { class BasicCookieStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::client::BasicCookieStore>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/client/BasicCookieStore";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::client::CookieStore>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/cookie/Cookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::client::BasicCookieStore : public jni::object_base<"org/apache/http/impl/client/BasicCookieStore",
	java::lang::Object,
	org::apache::http::client::CookieStore>
{
public:

	static jni::ref<org::apache::http::impl::client::BasicCookieStore> new_object() { return base_::new_object(); }
	void addCookie(jni::ref<org::apache::http::cookie::Cookie> cookie) { return call_method<"addCookie", void>(cookie); }
	void addCookies(jni::ref<jni::array<org::apache::http::cookie::Cookie>> cookies) { return call_method<"addCookies", void>(cookies); }
	jni::ref<java::util::List> getCookies() { return call_method<"getCookies", jni::ref<java::util::List>>(); }
	jboolean clearExpired(jni::ref<java::util::Date> date) { return call_method<"clearExpired", jboolean>(date); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void clear() { return call_method<"clear", void>(); }

protected:

	BasicCookieStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_BASICCOOKIESTORE
