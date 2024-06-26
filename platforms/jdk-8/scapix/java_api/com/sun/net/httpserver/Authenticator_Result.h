// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT_FWD
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::net::httpserver { class Authenticator_Result; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::net::httpserver::Authenticator_Result>
{
	static constexpr fixed_string class_name = "com/sun/net/httpserver/Authenticator$Result";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT)
#define SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::net::httpserver::Authenticator_Result : public jni::object_base<"com/sun/net/httpserver/Authenticator$Result",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::net::httpserver::Authenticator_Result> new_object() { return base_::new_object(); }

protected:

	Authenticator_Result(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_NET_HTTPSERVER_AUTHENTICATOR_RESULT
