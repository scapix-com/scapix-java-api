// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/conn/ConnectionKeepAliveStrategy.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::client { class DefaultConnectionKeepAliveStrategy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/client/DefaultConnectionKeepAliveStrategy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::conn::ConnectionKeepAliveStrategy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy : public jni::object_base<"org/apache/http/impl/client/DefaultConnectionKeepAliveStrategy",
	java::lang::Object,
	org::apache::http::conn::ConnectionKeepAliveStrategy>
{
public:

	static jni::ref<org::apache::http::impl::client::DefaultConnectionKeepAliveStrategy> new_object() { return base_::new_object(); }
	jlong getKeepAliveDuration(jni::ref<org::apache::http::HttpResponse> response, jni::ref<org::apache::http::protocol::HttpContext> context) { return call_method<"getKeepAliveDuration", jlong>(response, context); }

protected:

	DefaultConnectionKeepAliveStrategy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_DEFAULTCONNECTIONKEEPALIVESTRATEGY