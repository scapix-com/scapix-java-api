// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORK_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class Network; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::Network>
{
	static constexpr fixed_string class_name = "android/net/Network";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORK)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/InetAddress.h>
#include <scapix/java_api/java/net/Socket.h>
#include <scapix/java_api/java/net/URL.h>
#include <scapix/java_api/java/net/URLConnection.h>
#include <scapix/java_api/javax/net/SocketFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::Network : public jni::object_base<"android/net/Network",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<jni::array<java::net::InetAddress>> getAllByName(jni::ref<java::lang::String> host) { return call_method<"getAllByName", jni::ref<jni::array<java::net::InetAddress>>>(host); }
	jni::ref<java::net::InetAddress> getByName(jni::ref<java::lang::String> host) { return call_method<"getByName", jni::ref<java::net::InetAddress>>(host); }
	jni::ref<javax::net::SocketFactory> getSocketFactory() { return call_method<"getSocketFactory", jni::ref<javax::net::SocketFactory>>(); }
	jni::ref<java::net::URLConnection> openConnection(jni::ref<java::net::URL> url) { return call_method<"openConnection", jni::ref<java::net::URLConnection>>(url); }
	void bindSocket(jni::ref<java::net::Socket> socket) { return call_method<"bindSocket", void>(socket); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Network(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORK
