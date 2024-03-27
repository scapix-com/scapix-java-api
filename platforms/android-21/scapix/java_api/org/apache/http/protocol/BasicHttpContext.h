// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/apache/http/protocol/HttpContext.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::protocol { class BasicHttpContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::protocol::BasicHttpContext>
{
	static constexpr fixed_string class_name = "org/apache/http/protocol/BasicHttpContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::apache::http::protocol::HttpContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::protocol::BasicHttpContext : public jni::object_base<"org/apache/http/protocol/BasicHttpContext",
	java::lang::Object,
	org::apache::http::protocol::HttpContext>
{
public:

	static jni::ref<org::apache::http::protocol::BasicHttpContext> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::protocol::BasicHttpContext> new_object(jni::ref<org::apache::http::protocol::HttpContext> parentContext) { return base_::new_object(parentContext); }
	jni::ref<java::lang::Object> getAttribute(jni::ref<java::lang::String> id) { return call_method<"getAttribute", jni::ref<java::lang::Object>>(id); }
	void setAttribute(jni::ref<java::lang::String> id, jni::ref<java::lang::Object> obj) { return call_method<"setAttribute", void>(id, obj); }
	jni::ref<java::lang::Object> removeAttribute(jni::ref<java::lang::String> id) { return call_method<"removeAttribute", jni::ref<java::lang::Object>>(id); }

protected:

	BasicHttpContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOL_BASICHTTPCONTEXT
