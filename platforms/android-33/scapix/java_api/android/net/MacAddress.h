// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class MacAddress; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::MacAddress>
{
	static constexpr fixed_string class_name = "android/net/MacAddress";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS)
#define SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/Inet6Address.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::MacAddress : public jni::object_base<"android/net/MacAddress",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::net::MacAddress> BROADCAST_ADDRESS() { return get_static_field<"BROADCAST_ADDRESS", jni::ref<android::net::MacAddress>>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_BROADCAST() { return get_static_field<"TYPE_BROADCAST", jint>(); }
	static jint TYPE_MULTICAST() { return get_static_field<"TYPE_MULTICAST", jint>(); }
	static jint TYPE_UNICAST() { return get_static_field<"TYPE_UNICAST", jint>(); }

	jint getAddressType() { return call_method<"getAddressType", jint>(); }
	jboolean isLocallyAssigned() { return call_method<"isLocallyAssigned", jboolean>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toOuiString() { return call_method<"toOuiString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	void writeToParcel(jni::ref<android::os::Parcel> out, jint flags) { return call_method<"writeToParcel", void>(out, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	static jni::ref<android::net::MacAddress> fromString(jni::ref<java::lang::String> addr) { return call_static_method<"fromString", jni::ref<android::net::MacAddress>>(addr); }
	static jni::ref<android::net::MacAddress> fromBytes(jni::ref<jni::array<jbyte>> addr) { return call_static_method<"fromBytes", jni::ref<android::net::MacAddress>>(addr); }
	jboolean matches(jni::ref<android::net::MacAddress> baseAddress, jni::ref<android::net::MacAddress> mask) { return call_method<"matches", jboolean>(baseAddress, mask); }
	jni::ref<java::net::Inet6Address> getLinkLocalIpv6FromEui48Mac() { return call_method<"getLinkLocalIpv6FromEui48Mac", jni::ref<java::net::Inet6Address>>(); }

protected:

	MacAddress(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_MACADDRESS