// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net { class NetworkInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::NetworkInfo>
{
	static constexpr fixed_string class_name = "android/net/NetworkInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO)
#define SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/NetworkInfo_DetailedState.h>
#include <scapix/java_api/android/net/NetworkInfo_State.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::NetworkInfo : public jni::object_base<"android/net/NetworkInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using DetailedState = NetworkInfo_DetailedState;
	using State = NetworkInfo_State;

	jint getType() { return call_method<"getType", jint>(); }
	jint getSubtype() { return call_method<"getSubtype", jint>(); }
	jni::ref<java::lang::String> getTypeName() { return call_method<"getTypeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSubtypeName() { return call_method<"getSubtypeName", jni::ref<java::lang::String>>(); }
	jboolean isConnectedOrConnecting() { return call_method<"isConnectedOrConnecting", jboolean>(); }
	jboolean isConnected() { return call_method<"isConnected", jboolean>(); }
	jboolean isAvailable() { return call_method<"isAvailable", jboolean>(); }
	jboolean isFailover() { return call_method<"isFailover", jboolean>(); }
	jboolean isRoaming() { return call_method<"isRoaming", jboolean>(); }
	jni::ref<android::net::NetworkInfo_State> getState() { return call_method<"getState", jni::ref<android::net::NetworkInfo_State>>(); }
	jni::ref<android::net::NetworkInfo_DetailedState> getDetailedState() { return call_method<"getDetailedState", jni::ref<android::net::NetworkInfo_DetailedState>>(); }
	jni::ref<java::lang::String> getReason() { return call_method<"getReason", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExtraInfo() { return call_method<"getExtraInfo", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	NetworkInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_NETWORKINFO
