// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/net/httpserver/Authenticator_Result.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class Authenticator_Success; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::Authenticator_Success>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/Authenticator$Success";
	using base_classes = std::tuple<scapix::java_api::com::sun::net::httpserver::Authenticator_Result>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/net/httpserver/HttpPrincipal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::Authenticator_Success : public jni::object_base<"com/sun/net/httpserver/Authenticator$Success",
	com::sun::net::httpserver::Authenticator_Result>
{
public:

	static jni::ref<com::sun::net::httpserver::Authenticator_Success> new_object(jni::ref<com::sun::net::httpserver::HttpPrincipal> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::net::httpserver::HttpPrincipal> getPrincipal() { return call_method<"getPrincipal", jni::ref<com::sun::net::httpserver::HttpPrincipal>>(); }

protected:

	Authenticator_Success(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_SUCCESS
