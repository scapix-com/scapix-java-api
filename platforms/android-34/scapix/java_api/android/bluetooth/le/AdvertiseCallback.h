// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class AdvertiseCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::AdvertiseCallback>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/AdvertiseCallback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/bluetooth/le/AdvertiseSettings.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::AdvertiseCallback : public jni::object_base<"android/bluetooth/le/AdvertiseCallback",
	java::lang::Object>
{
public:

	static jint ADVERTISE_FAILED_ALREADY_STARTED() { return get_static_field<"ADVERTISE_FAILED_ALREADY_STARTED", jint>(); }
	static jint ADVERTISE_FAILED_DATA_TOO_LARGE() { return get_static_field<"ADVERTISE_FAILED_DATA_TOO_LARGE", jint>(); }
	static jint ADVERTISE_FAILED_FEATURE_UNSUPPORTED() { return get_static_field<"ADVERTISE_FAILED_FEATURE_UNSUPPORTED", jint>(); }
	static jint ADVERTISE_FAILED_INTERNAL_ERROR() { return get_static_field<"ADVERTISE_FAILED_INTERNAL_ERROR", jint>(); }
	static jint ADVERTISE_FAILED_TOO_MANY_ADVERTISERS() { return get_static_field<"ADVERTISE_FAILED_TOO_MANY_ADVERTISERS", jint>(); }

	static jni::ref<android::bluetooth::le::AdvertiseCallback> new_object() { return base_::new_object(); }
	void onStartSuccess(jni::ref<android::bluetooth::le::AdvertiseSettings> settingsInEffect) { return call_method<"onStartSuccess", void>(settingsInEffect); }
	void onStartFailure(jint errorCode) { return call_method<"onStartFailure", void>(errorCode); }

protected:

	AdvertiseCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISECALLBACK
