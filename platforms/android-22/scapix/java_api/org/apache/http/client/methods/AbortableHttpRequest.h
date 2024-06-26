// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::client::methods { class AbortableHttpRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::client::methods::AbortableHttpRequest>
{
	static constexpr fixed_string class_name = "org/apache/http/client/methods/AbortableHttpRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/apache/http/conn/ClientConnectionRequest.h>
#include <scapix/java_api/org/apache/http/conn/ConnectionReleaseTrigger.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::client::methods::AbortableHttpRequest : public jni::object_base<"org/apache/http/client/methods/AbortableHttpRequest",
	java::lang::Object>
{
public:

	void setConnectionRequest(jni::ref<org::apache::http::conn::ClientConnectionRequest> p1) { return call_method<"setConnectionRequest", void>(p1); }
	void setReleaseTrigger(jni::ref<org::apache::http::conn::ConnectionReleaseTrigger> p1) { return call_method<"setReleaseTrigger", void>(p1); }
	void abort() { return call_method<"abort", void>(); }

protected:

	AbortableHttpRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CLIENT_METHODS_ABORTABLEHTTPREQUEST
