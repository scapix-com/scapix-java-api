// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE_FWD
#define SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class Proxy_Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::Proxy_Type>
{
	static constexpr fixed_string class_name = "java/net/Proxy$Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE)
#define SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::Proxy_Type : public jni::object_base<"java/net/Proxy$Type",
	java::lang::Enum>
{
public:

	static jni::ref<java::net::Proxy_Type> DIRECT() { return get_static_field<"DIRECT", jni::ref<java::net::Proxy_Type>>(); }
	static jni::ref<java::net::Proxy_Type> HTTP() { return get_static_field<"HTTP", jni::ref<java::net::Proxy_Type>>(); }
	static jni::ref<java::net::Proxy_Type> SOCKS() { return get_static_field<"SOCKS", jni::ref<java::net::Proxy_Type>>(); }

	static jni::ref<jni::array<java::net::Proxy_Type>> values() { return call_static_method<"values", jni::ref<jni::array<java::net::Proxy_Type>>>(); }
	static jni::ref<java::net::Proxy_Type> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<java::net::Proxy_Type>>(p1); }

protected:

	Proxy_Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_PROXY_TYPE
