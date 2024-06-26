// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::usb { class UsbDevice; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::usb::UsbDevice>
{
	static constexpr fixed_string class_name = "android/hardware/usb/UsbDevice";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/usb/UsbConfiguration.h>
#include <scapix/java_api/android/hardware/usb/UsbInterface.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::usb::UsbDevice : public jni::object_base<"android/hardware/usb/UsbDevice",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getDeviceName() { return call_method<"getDeviceName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getManufacturerName() { return call_method<"getManufacturerName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getProductName() { return call_method<"getProductName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSerialNumber() { return call_method<"getSerialNumber", jni::ref<java::lang::String>>(); }
	jint getDeviceId() { return call_method<"getDeviceId", jint>(); }
	jint getVendorId() { return call_method<"getVendorId", jint>(); }
	jint getProductId() { return call_method<"getProductId", jint>(); }
	jint getDeviceClass() { return call_method<"getDeviceClass", jint>(); }
	jint getDeviceSubclass() { return call_method<"getDeviceSubclass", jint>(); }
	jint getDeviceProtocol() { return call_method<"getDeviceProtocol", jint>(); }
	jint getConfigurationCount() { return call_method<"getConfigurationCount", jint>(); }
	jni::ref<android::hardware::usb::UsbConfiguration> getConfiguration(jint index) { return call_method<"getConfiguration", jni::ref<android::hardware::usb::UsbConfiguration>>(index); }
	jint getInterfaceCount() { return call_method<"getInterfaceCount", jint>(); }
	jni::ref<android::hardware::usb::UsbInterface> getInterface(jint index) { return call_method<"getInterface", jni::ref<android::hardware::usb::UsbInterface>>(index); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	static jint getDeviceId(jni::ref<java::lang::String> name) { return call_static_method<"getDeviceId", jint>(name); }
	static jni::ref<java::lang::String> getDeviceName(jint id) { return call_static_method<"getDeviceName", jni::ref<java::lang::String>>(id); }

protected:

	UsbDevice(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBDEVICE
