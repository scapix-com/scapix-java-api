// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/HttpException.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class ProtocolException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::ProtocolException>
{
	static constexpr fixed_string class_name = "org/apache/http/ProtocolException";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::HttpException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::ProtocolException : public jni::object_base<"org/apache/http/ProtocolException",
	org::apache::http::HttpException>
{
public:

	static jni::ref<org::apache::http::ProtocolException> new_object() { return base_::new_object(); }
	static jni::ref<org::apache::http::ProtocolException> new_object(jni::ref<java::lang::String> message) { return base_::new_object(message); }
	static jni::ref<org::apache::http::ProtocolException> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::Throwable> cause) { return base_::new_object(message, cause); }

protected:

	ProtocolException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLEXCEPTION
