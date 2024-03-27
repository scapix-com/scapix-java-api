// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER_FWD
#define SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::net { class InetSocketAddress_InetSocketAddressHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::net::InetSocketAddress_InetSocketAddressHolder>
{
	static constexpr fixed_string class_name = "java/net/InetSocketAddress$InetSocketAddressHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER)
#define SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::net::InetSocketAddress_InetSocketAddressHolder : public jni::object_base<"java/net/InetSocketAddress$InetSocketAddressHolder",
	java::lang::Object>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	InetSocketAddress_InetSocketAddressHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NET_INETSOCKETADDRESS_INETSOCKETADDRESSHOLDER
