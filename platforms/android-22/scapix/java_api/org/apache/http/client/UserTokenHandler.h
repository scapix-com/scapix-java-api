// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client { class UserTokenHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::UserTokenHandler>
{
	static constexpr fixed_string class_name = "org/apache/http/client/UserTokenHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::UserTokenHandler : public jni::object_base<"org/apache/http/client/UserTokenHandler",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getUserToken(jni::ref<org::apache::http::protocol::HttpContext> p1) { return call_method<"getUserToken", jni::ref<java::lang::Object>>(p1); }

protected:

	UserTokenHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_USERTOKENHANDLER
