// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class AuthenticationHeader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::AuthenticationHeader>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/AuthenticationHeader";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/sun/net/www/HeaderParser.h>
#include <scapix/java_api/sun/net/www/MessageHeader.h>
#include <scapix/java_api/sun/net/www/protocol/http/HttpCallerInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::http::AuthenticationHeader : public jni::object_base<"sun/net/www/protocol/http/AuthenticationHeader",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::net::www::protocol::http::AuthenticationHeader> new_object(jni::ref<java::lang::String> hdrname, jni::ref<sun::net::www::MessageHeader> response, jni::ref<sun::net::www::protocol::http::HttpCallerInfo> hci, jboolean dontUseNegotiate) { return base_::new_object(hdrname, response, hci, dontUseNegotiate); }
	static jni::ref<sun::net::www::protocol::http::AuthenticationHeader> new_object(jni::ref<java::lang::String> hdrname, jni::ref<sun::net::www::MessageHeader> response, jni::ref<sun::net::www::protocol::http::HttpCallerInfo> hci, jboolean dontUseNegotiate, jni::ref<java::util::Set> disabledSchemes) { return base_::new_object(hdrname, response, hci, dontUseNegotiate, disabledSchemes); }
	jni::ref<sun::net::www::protocol::http::HttpCallerInfo> getHttpCallerInfo() { return call_method<"getHttpCallerInfo", jni::ref<sun::net::www::protocol::http::HttpCallerInfo>>(); }
	jni::ref<sun::net::www::HeaderParser> headerParser() { return call_method<"headerParser", jni::ref<sun::net::www::HeaderParser>>(); }
	jni::ref<java::lang::String> scheme() { return call_method<"scheme", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> raw() { return call_method<"raw", jni::ref<java::lang::String>>(); }
	jboolean isPresent() { return call_method<"isPresent", jboolean>(); }

protected:

	AuthenticationHeader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_AUTHENTICATIONHEADER