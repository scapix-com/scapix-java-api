// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR_FWD
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::www::protocol::http { class Negotiator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::www::protocol::http::Negotiator>
{
	static constexpr fixed_string class_name = "sun/net/www/protocol/http/Negotiator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR)
#define SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::www::protocol::http::Negotiator : public jni::object_base<"sun/net/www/protocol/http/Negotiator",
	java::lang::Object>
{
public:

	static jni::ref<sun::net::www::protocol::http::Negotiator> new_object() { return base_::new_object(); }
	jni::ref<jni::array<jbyte>> firstToken() { return call_method<"firstToken", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<jni::array<jbyte>> nextToken(jni::ref<jni::array<jbyte>> p1) { return call_method<"nextToken", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	Negotiator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_WWW_PROTOCOL_HTTP_NEGOTIATOR