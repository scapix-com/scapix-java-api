// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn { class ConnectionKeepAliveStrategy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::ConnectionKeepAliveStrategy>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/ConnectionKeepAliveStrategy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::ConnectionKeepAliveStrategy : public jni::object_base<"org/apache/http/conn/ConnectionKeepAliveStrategy",
	java::lang::Object>
{
public:

	jlong getKeepAliveDuration(jni::ref<org::apache::http::HttpResponse> p1, jni::ref<org::apache::http::protocol::HttpContext> p2) { return call_method<"getKeepAliveDuration", jlong>(p1, p2); }

protected:

	ConnectionKeepAliveStrategy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_CONNECTIONKEEPALIVESTRATEGY
