// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/ClientConnectionOperator.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::conn { class DefaultClientConnectionOperator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::conn::DefaultClientConnectionOperator>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/conn/DefaultClientConnectionOperator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::ClientConnectionOperator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/org/apache/http/HttpHost.h>
#include <scapix/java_api/org/apache/http/conn/OperatedClientConnection.h>
#include <scapix/java_api/org/apache/http/conn/scheme/SchemeRegistry.h>
#include <scapix/java_api/org/apache/http/params/HttpParams.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::conn::DefaultClientConnectionOperator : public jni::object_base<"org/apache/http/impl/conn/DefaultClientConnectionOperator",
	java::lang::Object,
	org::apache::http::conn::ClientConnectionOperator>
{
public:

	static jni::ref<org::apache::http::impl::conn::DefaultClientConnectionOperator> new_object(jni::ref<org::apache::http::conn::scheme::SchemeRegistry> schemes) { return base_::new_object(schemes); }
	jni::ref<org::apache::http::conn::OperatedClientConnection> createConnection() { return call_method<"createConnection", jni::ref<org::apache::http::conn::OperatedClientConnection>>(); }
	void openConnection(jni::ref<org::apache::http::conn::OperatedClientConnection> conn, jni::ref<org::apache::http::HttpHost> target, jni::ref<java::net::InetAddress> local, jni::ref<org::apache::http::protocol::HttpContext> context, jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"openConnection", void>(conn, target, local, context, params); }
	void updateSecureConnection(jni::ref<org::apache::http::conn::OperatedClientConnection> conn, jni::ref<org::apache::http::HttpHost> target, jni::ref<org::apache::http::protocol::HttpContext> context, jni::ref<org::apache::http::params::HttpParams> params) { return call_method<"updateSecureConnection", void>(conn, target, context, params); }

protected:

	DefaultClientConnectionOperator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR
