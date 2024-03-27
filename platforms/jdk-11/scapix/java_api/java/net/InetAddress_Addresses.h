// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetAddress_Addresses; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetAddress_Addresses>
{
	static constexpr fixed_string class_name = "java/net/InetAddress$Addresses";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES)
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/InetAddress.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::InetAddress_Addresses : public jni::object_base<"java/net/InetAddress$Addresses",
	java::lang::Object>
{
public:

	jni::ref<jni::array<java::net::InetAddress>> get() { return call_method<"get", jni::ref<jni::array<java::net::InetAddress>>>(); }

protected:

	InetAddress_Addresses(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_ADDRESSES
