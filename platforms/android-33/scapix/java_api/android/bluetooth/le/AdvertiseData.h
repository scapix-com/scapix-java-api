// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class AdvertiseData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::AdvertiseData>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/AdvertiseData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/util/SparseArray.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/android/bluetooth/le/AdvertiseData_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::AdvertiseData : public jni::object_base<"android/bluetooth/le/AdvertiseData",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = AdvertiseData_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::util::List> getServiceUuids() { return call_method<"getServiceUuids", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getServiceSolicitationUuids() { return call_method<"getServiceSolicitationUuids", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getTransportDiscoveryData() { return call_method<"getTransportDiscoveryData", jni::ref<java::util::List>>(); }
	jni::ref<android::util::SparseArray> getManufacturerSpecificData() { return call_method<"getManufacturerSpecificData", jni::ref<android::util::SparseArray>>(); }
	jni::ref<java::util::Map> getServiceData() { return call_method<"getServiceData", jni::ref<java::util::Map>>(); }
	jboolean getIncludeTxPowerLevel() { return call_method<"getIncludeTxPowerLevel", jboolean>(); }
	jboolean getIncludeDeviceName() { return call_method<"getIncludeDeviceName", jboolean>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	AdvertiseData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_ADVERTISEDATA
