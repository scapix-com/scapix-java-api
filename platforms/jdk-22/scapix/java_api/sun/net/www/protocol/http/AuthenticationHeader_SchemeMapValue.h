// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class AuthenticationHeader_SchemeMapValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::AuthenticationHeader_SchemeMapValue>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/AuthenticationHeader$SchemeMapValue";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::http::AuthenticationHeader_SchemeMapValue : public jni::object_base<"sun/net/www/protocol/http/AuthenticationHeader$SchemeMapValue",
	java::lang::Object>
{
public:


protected:

	AuthenticationHeader_SchemeMapValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_SCHEMEMAPVALUE
