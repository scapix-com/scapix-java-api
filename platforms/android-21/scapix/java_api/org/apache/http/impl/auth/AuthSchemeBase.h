// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/auth/AuthScheme.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::auth { class AuthSchemeBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::auth::AuthSchemeBase>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/auth/AuthSchemeBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::auth::AuthScheme>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/Header.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::auth::AuthSchemeBase : public jni::object_base<"org/apache/http/impl/auth/AuthSchemeBase",
	java::lang::Object,
	org::apache::http::auth::AuthScheme>
{
public:

	static jni::ref<org::apache::http::impl::auth::AuthSchemeBase> new_object() { return base_::new_object(); }
	void processChallenge(jni::ref<org::apache::http::Header> header) { return call_method<"processChallenge", void>(header); }
	jboolean isProxy() { return call_method<"isProxy", jboolean>(); }

protected:

	AuthSchemeBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_AUTHSCHEMEBASE