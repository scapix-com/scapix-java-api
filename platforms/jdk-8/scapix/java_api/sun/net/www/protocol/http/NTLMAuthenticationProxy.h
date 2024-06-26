// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class NTLMAuthenticationProxy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::NTLMAuthenticationProxy>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/NTLMAuthenticationProxy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URL.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::net::www::protocol::http::NTLMAuthenticationProxy : public jni::object_base<"sun/net/www/protocol/http/NTLMAuthenticationProxy",
	java::lang::Object>
{
public:

	static jboolean isTrustedSite(jni::ref<java::net::URL> p1) { return call_static_method<"isTrustedSite", jboolean>(p1); }

protected:

	NTLMAuthenticationProxy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NTLMAUTHENTICATIONPROXY
