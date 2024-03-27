// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class IpSecManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::IpSecManager>
{
	static constexpr fixed_string class_name = "android/net/IpSecManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER)
#define SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/IpSecManager_SecurityParameterIndex.h>
#include <scapix/java_api/android/net/IpSecManager_UdpEncapsulationSocket.h>
#include <scapix/java_api/android/net/IpSecTransform.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/net/DatagramSocket.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/android/net/IpSecManager_SpiUnavailableException.h>
#include <scapix/java_api/android/net/IpSecManager_ResourceUnavailableException.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::IpSecManager : public jni::object_base<"android/net/IpSecManager",
	java::lang::Object>
{
public:

	using UdpEncapsulationSocket = IpSecManager_UdpEncapsulationSocket;
	using SpiUnavailableException = IpSecManager_SpiUnavailableException;
	using SecurityParameterIndex = IpSecManager_SecurityParameterIndex;
	using ResourceUnavailableException = IpSecManager_ResourceUnavailableException;

	static jint DIRECTION_IN() { return get_static_field<"DIRECTION_IN", jint>(); }
	static jint DIRECTION_OUT() { return get_static_field<"DIRECTION_OUT", jint>(); }

	jni::ref<android::net::IpSecManager_SecurityParameterIndex> allocateSecurityParameterIndex(jni::ref<java::net::InetAddress> destinationAddress) { return call_method<"allocateSecurityParameterIndex", jni::ref<android::net::IpSecManager_SecurityParameterIndex>>(destinationAddress); }
	jni::ref<android::net::IpSecManager_SecurityParameterIndex> allocateSecurityParameterIndex(jni::ref<java::net::InetAddress> destinationAddress, jint requestedSpi) { return call_method<"allocateSecurityParameterIndex", jni::ref<android::net::IpSecManager_SecurityParameterIndex>>(destinationAddress, requestedSpi); }
	void applyTransportModeTransform(jni::ref<java::net::Socket> socket, jint direction, jni::ref<android::net::IpSecTransform> transform) { return call_method<"applyTransportModeTransform", void>(socket, direction, transform); }
	void applyTransportModeTransform(jni::ref<java::net::DatagramSocket> socket, jint direction, jni::ref<android::net::IpSecTransform> transform) { return call_method<"applyTransportModeTransform", void>(socket, direction, transform); }
	void applyTransportModeTransform(jni::ref<java::io::FileDescriptor> socket, jint direction, jni::ref<android::net::IpSecTransform> transform) { return call_method<"applyTransportModeTransform", void>(socket, direction, transform); }
	void removeTransportModeTransforms(jni::ref<java::net::Socket> socket) { return call_method<"removeTransportModeTransforms", void>(socket); }
	void removeTransportModeTransforms(jni::ref<java::net::DatagramSocket> socket) { return call_method<"removeTransportModeTransforms", void>(socket); }
	void removeTransportModeTransforms(jni::ref<java::io::FileDescriptor> socket) { return call_method<"removeTransportModeTransforms", void>(socket); }
	jni::ref<android::net::IpSecManager_UdpEncapsulationSocket> openUdpEncapsulationSocket(jint port) { return call_method<"openUdpEncapsulationSocket", jni::ref<android::net::IpSecManager_UdpEncapsulationSocket>>(port); }
	jni::ref<android::net::IpSecManager_UdpEncapsulationSocket> openUdpEncapsulationSocket() { return call_method<"openUdpEncapsulationSocket", jni::ref<android::net::IpSecManager_UdpEncapsulationSocket>>(); }

protected:

	IpSecManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_IPSECMANAGER
