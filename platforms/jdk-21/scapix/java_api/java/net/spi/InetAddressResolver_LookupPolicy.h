// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY_FWD
#define SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net::spi { class InetAddressResolver_LookupPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::spi::InetAddressResolver_LookupPolicy>
{
	static constexpr fixed_string class_name = "java/net/spi/InetAddressResolver$LookupPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY)
#define SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::net::spi::InetAddressResolver_LookupPolicy : public jni::object_base<"java/net/spi/InetAddressResolver$LookupPolicy",
	java::lang::Object>
{
public:

	static jint IPV4() { return get_static_field<"IPV4", jint>(); }
	static jint IPV6() { return get_static_field<"IPV6", jint>(); }
	static jint IPV4_FIRST() { return get_static_field<"IPV4_FIRST", jint>(); }
	static jint IPV6_FIRST() { return get_static_field<"IPV6_FIRST", jint>(); }

	static jni::ref<java::net::spi::InetAddressResolver_LookupPolicy> of(jint characteristics) { return call_static_method<"of", jni::ref<java::net::spi::InetAddressResolver_LookupPolicy>>(characteristics); }
	jint characteristics() { return call_method<"characteristics", jint>(); }

protected:

	InetAddressResolver_LookupPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_SPI_INETADDRESSRESOLVER_LOOKUPPOLICY
