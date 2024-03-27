// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/apache/http/HttpException.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::impl::client { class TunnelRefusedException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::impl::client::TunnelRefusedException>
{
	static constexpr fixed_string class_name = "org/apache/http/impl/client/TunnelRefusedException";
	using base_classes = std::tuple<scapix::java_api::org::apache::http::HttpException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/apache/http/HttpResponse.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::impl::client::TunnelRefusedException : public jni::object_base<"org/apache/http/impl/client/TunnelRefusedException",
	org::apache::http::HttpException>
{
public:

	static jni::ref<org::apache::http::impl::client::TunnelRefusedException> new_object(jni::ref<java::lang::String> message, jni::ref<org::apache::http::HttpResponse> response) { return base_::new_object(message, response); }
	jni::ref<org::apache::http::HttpResponse> getResponse() { return call_method<"getResponse", jni::ref<org::apache::http::HttpResponse>>(); }

protected:

	TunnelRefusedException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_IMPL_CLIENT_TUNNELREFUSEDEXCEPTION
