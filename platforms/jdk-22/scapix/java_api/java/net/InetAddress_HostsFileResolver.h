// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/net/spi/InetAddressResolver.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetAddress_HostsFileResolver; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetAddress_HostsFileResolver>
{
	static constexpr fixed_string class_name = "java/net/InetAddress$HostsFileResolver";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::net::spi::InetAddressResolver>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER)
#define SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/spi/InetAddressResolver_LookupPolicy.h>
#include <scapix/java_api/java/util/stream/Stream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::InetAddress_HostsFileResolver : public jni::object_base<"java/net/InetAddress$HostsFileResolver",
	java::lang::Object,
	java::net::spi::InetAddressResolver>
{
public:

	static jni::ref<java::net::InetAddress_HostsFileResolver> new_object(jni::ref<java::lang::String> hostsFileName) { return base_::new_object(hostsFileName); }
	jni::ref<java::lang::String> lookupByAddress(jni::ref<jni::array<jbyte>> addr) { return call_method<"lookupByAddress", jni::ref<java::lang::String>>(addr); }
	jni::ref<java::util::stream::Stream> lookupByName(jni::ref<java::lang::String> host, jni::ref<java::net::spi::InetAddressResolver_LookupPolicy> lookupPolicy) { return call_method<"lookupByName", jni::ref<java::util::stream::Stream>>(host, lookupPolicy); }

protected:

	InetAddress_HostsFileResolver(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETADDRESS_HOSTSFILERESOLVER