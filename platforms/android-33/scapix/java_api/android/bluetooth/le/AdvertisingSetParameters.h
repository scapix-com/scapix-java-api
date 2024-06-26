// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class AdvertisingSetParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::AdvertisingSetParameters>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/AdvertisingSetParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/bluetooth/le/AdvertisingSetParameters_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::AdvertisingSetParameters : public jni::object_base<"android/bluetooth/le/AdvertisingSetParameters",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AdvertisingSetParameters_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint INTERVAL_HIGH() { return get_static_field<"INTERVAL_HIGH", jint>(); }
	static jint INTERVAL_LOW() { return get_static_field<"INTERVAL_LOW", jint>(); }
	static jint INTERVAL_MAX() { return get_static_field<"INTERVAL_MAX", jint>(); }
	static jint INTERVAL_MEDIUM() { return get_static_field<"INTERVAL_MEDIUM", jint>(); }
	static jint INTERVAL_MIN() { return get_static_field<"INTERVAL_MIN", jint>(); }
	static jint TX_POWER_HIGH() { return get_static_field<"TX_POWER_HIGH", jint>(); }
	static jint TX_POWER_LOW() { return get_static_field<"TX_POWER_LOW", jint>(); }
	static jint TX_POWER_MAX() { return get_static_field<"TX_POWER_MAX", jint>(); }
	static jint TX_POWER_MEDIUM() { return get_static_field<"TX_POWER_MEDIUM", jint>(); }
	static jint TX_POWER_MIN() { return get_static_field<"TX_POWER_MIN", jint>(); }
	static jint TX_POWER_ULTRA_LOW() { return get_static_field<"TX_POWER_ULTRA_LOW", jint>(); }

	jboolean isConnectable() { return call_method<"isConnectable", jboolean>(); }
	jboolean isScannable() { return call_method<"isScannable", jboolean>(); }
	jboolean isLegacy() { return call_method<"isLegacy", jboolean>(); }
	jboolean isAnonymous() { return call_method<"isAnonymous", jboolean>(); }
	jboolean includeTxPower() { return call_method<"includeTxPower", jboolean>(); }
	jint getPrimaryPhy() { return call_method<"getPrimaryPhy", jint>(); }
	jint getSecondaryPhy() { return call_method<"getSecondaryPhy", jint>(); }
	jint getInterval() { return call_method<"getInterval", jint>(); }
	jint getTxPowerLevel() { return call_method<"getTxPowerLevel", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	AdvertisingSetParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISINGSETPARAMETERS
