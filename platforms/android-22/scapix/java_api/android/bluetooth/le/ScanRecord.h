// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class ScanRecord; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::ScanRecord>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/ScanRecord";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/ParcelUuid.h>
#include <scapix/java_api/android/util/SparseArray.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::ScanRecord : public jni::object_base<"android/bluetooth/le/ScanRecord",
	java::lang::Object>
{
public:

	jint getAdvertiseFlags() { return call_method<"getAdvertiseFlags", jint>(); }
	jni::ref<java::util::List> getServiceUuids() { return call_method<"getServiceUuids", jni::ref<java::util::List>>(); }
	jni::ref<android::util::SparseArray> getManufacturerSpecificData() { return call_method<"getManufacturerSpecificData", jni::ref<android::util::SparseArray>>(); }
	jni::ref<jni::array<jbyte>> getManufacturerSpecificData(jint manufacturerId) { return call_method<"getManufacturerSpecificData", jni::ref<jni::array<jbyte>>>(manufacturerId); }
	jni::ref<java::util::Map> getServiceData() { return call_method<"getServiceData", jni::ref<java::util::Map>>(); }
	jni::ref<jni::array<jbyte>> getServiceData(jni::ref<android::os::ParcelUuid> serviceDataUuid) { return call_method<"getServiceData", jni::ref<jni::array<jbyte>>>(serviceDataUuid); }
	jint getTxPowerLevel() { return call_method<"getTxPowerLevel", jint>(); }
	jni::ref<java::lang::String> getDeviceName() { return call_method<"getDeviceName", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ScanRecord(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_SCANRECORD