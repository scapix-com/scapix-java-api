// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT_FWD
#define SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::net::sdp { class SdpSupport; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::net::sdp::SdpSupport>
{
	static constexpr fixed_string class_name = "sun/net/sdp/SdpSupport";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT)
#define SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::net::sdp::SdpSupport : public jni::object_base<"sun/net/sdp/SdpSupport",
	java::lang::Object>
{
public:

	static jni::ref<java::io::FileDescriptor> createSocket() { return call_static_method<"createSocket", jni::ref<java::io::FileDescriptor>>(); }
	static void convertSocket(jni::ref<java::io::FileDescriptor> fd) { return call_static_method<"convertSocket", void>(fd); }

protected:

	SdpSupport(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_NET_SDP_SDPSUPPORT
