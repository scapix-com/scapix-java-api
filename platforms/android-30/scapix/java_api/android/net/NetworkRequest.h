// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkRequest>
{
	static constexpr fixed_string class_name = "android/net/NetworkRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/NetworkCapabilities.h>
#include <scapix/java_api/android/net/NetworkSpecifier.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/net/NetworkRequest_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkRequest : public jni::object_base<"android/net/NetworkRequest",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = NetworkRequest_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean hasCapability(jint capability) { return call_method<"hasCapability", jboolean>(capability); }
	jboolean canBeSatisfiedBy(jni::ref<android::net::NetworkCapabilities> nc) { return call_method<"canBeSatisfiedBy", jboolean>(nc); }
	jboolean hasTransport(jint transportType) { return call_method<"hasTransport", jboolean>(transportType); }
	jni::ref<android::net::NetworkSpecifier> getNetworkSpecifier() { return call_method<"getNetworkSpecifier", jni::ref<android::net::NetworkSpecifier>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	NetworkRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKREQUEST