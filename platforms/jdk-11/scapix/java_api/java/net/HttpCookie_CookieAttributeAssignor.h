// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR_FWD
#define SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class HttpCookie_CookieAttributeAssignor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::HttpCookie_CookieAttributeAssignor>
{
	static constexpr fixed_string class_name = "java/net/HttpCookie$CookieAttributeAssignor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR)
#define SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/HttpCookie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::HttpCookie_CookieAttributeAssignor : public jni::object_base<"java/net/HttpCookie$CookieAttributeAssignor",
	java::lang::Object>
{
public:

	void assign(jni::ref<java::net::HttpCookie> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"assign", void>(p1, p2, p3); }

protected:

	HttpCookie_CookieAttributeAssignor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_HTTPCOOKIE_COOKIEATTRIBUTEASSIGNOR
