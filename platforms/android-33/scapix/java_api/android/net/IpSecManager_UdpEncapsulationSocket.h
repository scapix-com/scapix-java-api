// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class IpSecManager_UdpEncapsulationSocket; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::IpSecManager_UdpEncapsulationSocket>
{
	static constexpr fixed_string class_name = "android/net/IpSecManager$UdpEncapsulationSocket";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::IpSecManager_UdpEncapsulationSocket : public jni::object_base<"android/net/IpSecManager$UdpEncapsulationSocket",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	jni::ref<java::io::FileDescriptor> getFileDescriptor() { return call_method<"getFileDescriptor", jni::ref<java::io::FileDescriptor>>(); }
	jint getPort() { return call_method<"getPort", jint>(); }
	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	IpSecManager_UdpEncapsulationSocket(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_UDPENCAPSULATIONSOCKET
