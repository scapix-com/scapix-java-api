// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client { class CookieStore; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::CookieStore>
{
	static constexpr fixed_string class_name = "org/apache/http/client/CookieStore";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/cookie/Cookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::CookieStore : public jni::object_base<"org/apache/http/client/CookieStore",
	java::lang::Object>
{
public:

	void addCookie(jni::ref<org::apache::http::cookie::Cookie> p1) { return call_method<"addCookie", void>(p1); }
	jni::ref<java::util::List> getCookies() { return call_method<"getCookies", jni::ref<java::util::List>>(); }
	jboolean clearExpired(jni::ref<java::util::Date> p1) { return call_method<"clearExpired", jboolean>(p1); }
	void clear() { return call_method<"clear", void>(); }

protected:

	CookieStore(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_COOKIESTORE
