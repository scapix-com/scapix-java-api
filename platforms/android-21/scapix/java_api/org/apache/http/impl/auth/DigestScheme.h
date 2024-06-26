// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/impl/auth/RFC2617Scheme.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::auth { class DigestScheme; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::auth::DigestScheme>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/auth/DigestScheme";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::impl::auth::RFC2617Scheme>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/Header.h>
#include <scapix/java_api/org/apache/http/HttpRequest.h>
#include <scapix/java_api/org/apache/http/auth/Credentials.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::auth::DigestScheme : public jni::object_base<"org/apache/http/impl/auth/DigestScheme",
	org::apache::http::impl::auth::RFC2617Scheme>
{
public:

	static jni::ref<org::apache::http::impl::auth::DigestScheme> new_object() { return base_::new_object(); }
	void processChallenge(jni::ref<org::apache::http::Header> header) { return call_method<"processChallenge", void>(header); }
	jboolean isComplete() { return call_method<"isComplete", jboolean>(); }
	jni::ref<java::lang::String> getSchemeName() { return call_method<"getSchemeName", jni::ref<java::lang::String>>(); }
	jboolean isConnectionBased() { return call_method<"isConnectionBased", jboolean>(); }
	void overrideParamter(jni::ref<java::lang::String> name, jni::ref<java::lang::String> value) { return call_method<"overrideParamter", void>(name, value); }
	jni::ref<org::apache::http::Header> authenticate(jni::ref<org::apache::http::auth::Credentials> credentials, jni::ref<org::apache::http::HttpRequest> request) { return call_method<"authenticate", jni::ref<org::apache::http::Header>>(credentials, request); }
	static jni::ref<java::lang::String> createCnonce() { return call_static_method<"createCnonce", jni::ref<java::lang::String>>(); }

protected:

	DigestScheme(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_AUTH_DIGESTSCHEME
