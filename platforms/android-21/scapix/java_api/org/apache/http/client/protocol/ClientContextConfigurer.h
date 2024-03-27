// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/client/protocol/ClientContext.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::protocol { class ClientContextConfigurer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::protocol::ClientContextConfigurer>
{
	static constexpr fixed_string class_name = "org/apache/http/client/protocol/ClientContextConfigurer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::client::protocol::ClientContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/org/apache/http/auth/AuthSchemeRegistry.h>
#include <scapix/java_api/org/apache/http/client/CookieStore.h>
#include <scapix/java_api/org/apache/http/client/CredentialsProvider.h>
#include <scapix/java_api/org/apache/http/cookie/CookieSpecRegistry.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::protocol::ClientContextConfigurer : public jni::object_base<"org/apache/http/client/protocol/ClientContextConfigurer",
	java::lang::Object,
	org::apache::http::client::protocol::ClientContext>
{
public:

	static jni::ref<org::apache::http::client::protocol::ClientContextConfigurer> new_object(jni::ref<org::apache::http::protocol::HttpContext> context) { return base_::new_object(context); }
	void setCookieSpecRegistry(jni::ref<org::apache::http::cookie::CookieSpecRegistry> registry) { return call_method<"setCookieSpecRegistry", void>(registry); }
	void setAuthSchemeRegistry(jni::ref<org::apache::http::auth::AuthSchemeRegistry> registry) { return call_method<"setAuthSchemeRegistry", void>(registry); }
	void setCookieStore(jni::ref<org::apache::http::client::CookieStore> store) { return call_method<"setCookieStore", void>(store); }
	void setCredentialsProvider(jni::ref<org::apache::http::client::CredentialsProvider> provider) { return call_method<"setCredentialsProvider", void>(provider); }
	void setAuthSchemePref(jni::ref<java::util::List> list) { return call_method<"setAuthSchemePref", void>(list); }

protected:

	ClientContextConfigurer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_PROTOCOL_CLIENTCONTEXTCONFIGURER
