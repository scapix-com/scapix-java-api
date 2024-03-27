// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http::conn::routing { class RouteInfo_TunnelType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::conn::routing::RouteInfo_TunnelType>
{
	static constexpr fixed_string class_name = "org/apache/http/conn/routing/RouteInfo$TunnelType";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::conn::routing::RouteInfo_TunnelType : public jni::object_base<"org/apache/http/conn/routing/RouteInfo$TunnelType",
	java::lang::Enum>
{
public:

	static jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType> PLAIN() { return get_static_field<"PLAIN", jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType>>(); }
	static jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType> TUNNELLED() { return get_static_field<"TUNNELLED", jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType>>(); }

	static jni::ref<jni::array<org::apache::http::conn::routing::RouteInfo_TunnelType>> values() { return call_static_method<"values", jni::ref<jni::array<org::apache::http::conn::routing::RouteInfo_TunnelType>>>(); }
	static jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<org::apache::http::conn::routing::RouteInfo_TunnelType>>(name); }

protected:

	RouteInfo_TunnelType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_CONN_ROUTING_ROUTEINFO_TUNNELTYPE
