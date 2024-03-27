// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::net::wifi { class SupplicantState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::net::wifi::SupplicantState>
{
	static constexpr fixed_string class_name = "android/net/wifi/SupplicantState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE)
#define SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::net::wifi::SupplicantState : public jni::object_base<"android/net/wifi/SupplicantState",
	java::lang::Enum,
	android::os::Parcelable>
{
public:

	static jni::ref<android::net::wifi::SupplicantState> ASSOCIATED() { return get_static_field<"ASSOCIATED", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> ASSOCIATING() { return get_static_field<"ASSOCIATING", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> AUTHENTICATING() { return get_static_field<"AUTHENTICATING", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> COMPLETED() { return get_static_field<"COMPLETED", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> DISCONNECTED() { return get_static_field<"DISCONNECTED", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> DORMANT() { return get_static_field<"DORMANT", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> FOUR_WAY_HANDSHAKE() { return get_static_field<"FOUR_WAY_HANDSHAKE", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> GROUP_HANDSHAKE() { return get_static_field<"GROUP_HANDSHAKE", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> INACTIVE() { return get_static_field<"INACTIVE", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> INTERFACE_DISABLED() { return get_static_field<"INTERFACE_DISABLED", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> INVALID() { return get_static_field<"INVALID", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> SCANNING() { return get_static_field<"SCANNING", jni::ref<android::net::wifi::SupplicantState>>(); }
	static jni::ref<android::net::wifi::SupplicantState> UNINITIALIZED() { return get_static_field<"UNINITIALIZED", jni::ref<android::net::wifi::SupplicantState>>(); }

	static jni::ref<jni::array<android::net::wifi::SupplicantState>> values() { return call_static_method<"values", jni::ref<jni::array<android::net::wifi::SupplicantState>>>(); }
	static jni::ref<android::net::wifi::SupplicantState> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<android::net::wifi::SupplicantState>>(name); }
	static jboolean isValidState(jni::ref<android::net::wifi::SupplicantState> state) { return call_static_method<"isValidState", jboolean>(state); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	SupplicantState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_NET_WIFI_SUPPLICANTSTATE