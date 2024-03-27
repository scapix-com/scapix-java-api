// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InterfaceAddress; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InterfaceAddress>
{
	static constexpr fixed_string class_name = "java/net/InterfaceAddress";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS)
#define SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::InterfaceAddress : public jni::object_base<"java/net/InterfaceAddress",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::net::InetAddress> getAddress() { return call_method<"getAddress", jni::ref<java::net::InetAddress>>(); }
	jni::ref<java::net::InetAddress> getBroadcast() { return call_method<"getBroadcast", jni::ref<java::net::InetAddress>>(); }
	jshort getNetworkPrefixLength() { return call_method<"getNetworkPrefixLength", jshort>(); }

protected:

	InterfaceAddress(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INTERFACEADDRESS