// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA_FWD
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::bluetooth::le { class TransportDiscoveryData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::bluetooth::le::TransportDiscoveryData>
{
	static constexpr fixed_string class_name = "android/bluetooth/le/TransportDiscoveryData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA)
#define SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::bluetooth::le::TransportDiscoveryData : public jni::object_base<"android/bluetooth/le/TransportDiscoveryData",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	static jni::ref<android::bluetooth::le::TransportDiscoveryData> new_object(jint transportDataType, jni::ref<java::util::List> transportBlocks) { return base_::new_object(transportDataType, transportBlocks); }
	static jni::ref<android::bluetooth::le::TransportDiscoveryData> new_object(jni::ref<jni::array<jbyte>> transportDiscoveryData) { return base_::new_object(transportDiscoveryData); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint getTransportDataType() { return call_method<"getTransportDataType", jint>(); }
	jni::ref<java::util::List> getTransportBlocks() { return call_method<"getTransportBlocks", jni::ref<java::util::List>>(); }
	jni::ref<jni::array<jbyte>> toByteArray() { return call_method<"toByteArray", jni::ref<jni::array<jbyte>>>(); }
	jint totalBytes() { return call_method<"totalBytes", jint>(); }

protected:

	TransportDiscoveryData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_BLUETOOTH_LE_TRANSPORTDISCOVERYDATA
