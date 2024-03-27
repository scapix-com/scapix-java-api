// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class PhysicalChannelConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::PhysicalChannelConfig>
{
	static constexpr fixed_string class_name = "android/telephony/PhysicalChannelConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::PhysicalChannelConfig : public jni::object_base<"android/telephony/PhysicalChannelConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jint BAND_UNKNOWN() { return get_static_field<"BAND_UNKNOWN", jint>(); }
	static jint CELL_BANDWIDTH_UNKNOWN() { return get_static_field<"CELL_BANDWIDTH_UNKNOWN", jint>(); }
	static jint CHANNEL_NUMBER_UNKNOWN() { return get_static_field<"CHANNEL_NUMBER_UNKNOWN", jint>(); }
	static jint CONNECTION_PRIMARY_SERVING() { return get_static_field<"CONNECTION_PRIMARY_SERVING", jint>(); }
	static jint CONNECTION_SECONDARY_SERVING() { return get_static_field<"CONNECTION_SECONDARY_SERVING", jint>(); }
	static jint CONNECTION_UNKNOWN() { return get_static_field<"CONNECTION_UNKNOWN", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FREQUENCY_UNKNOWN() { return get_static_field<"FREQUENCY_UNKNOWN", jint>(); }
	static jint PHYSICAL_CELL_ID_MAXIMUM_VALUE() { return get_static_field<"PHYSICAL_CELL_ID_MAXIMUM_VALUE", jint>(); }
	static jint PHYSICAL_CELL_ID_UNKNOWN() { return get_static_field<"PHYSICAL_CELL_ID_UNKNOWN", jint>(); }

	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getCellBandwidthDownlinkKhz() { return call_method<"getCellBandwidthDownlinkKhz", jint>(); }
	jint getCellBandwidthUplinkKhz() { return call_method<"getCellBandwidthUplinkKhz", jint>(); }
	jint getDownlinkChannelNumber() { return call_method<"getDownlinkChannelNumber", jint>(); }
	jint getUplinkChannelNumber() { return call_method<"getUplinkChannelNumber", jint>(); }
	jint getBand() { return call_method<"getBand", jint>(); }
	jint getDownlinkFrequencyKhz() { return call_method<"getDownlinkFrequencyKhz", jint>(); }
	jint getUplinkFrequencyKhz() { return call_method<"getUplinkFrequencyKhz", jint>(); }
	jint getPhysicalCellId() { return call_method<"getPhysicalCellId", jint>(); }
	jint getNetworkType() { return call_method<"getNetworkType", jint>(); }
	jint getConnectionStatus() { return call_method<"getConnectionStatus", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PhysicalChannelConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_PHYSICALCHANNELCONFIG