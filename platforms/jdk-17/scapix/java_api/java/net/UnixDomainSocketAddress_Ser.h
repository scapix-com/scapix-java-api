// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class UnixDomainSocketAddress_Ser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::UnixDomainSocketAddress_Ser>
{
	static constexpr fixed_string class_name = "java/net/UnixDomainSocketAddress$Ser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER)
#define SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::UnixDomainSocketAddress_Ser : public jni::object_base<"java/net/UnixDomainSocketAddress$Ser",
	java::lang::Object,
	java::io::Serializable>
{
public:


protected:

	UnixDomainSocketAddress_Ser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_UNIXDOMAINSOCKETADDRESS_SER
