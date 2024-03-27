// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::usb { class UsbManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::usb::UsbManager>
{
	static constexpr fixed_string class_name = "android/hardware/usb/UsbManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/PendingIntent.h>
#include <scapix/java_api/android/hardware/usb/UsbAccessory.h>
#include <scapix/java_api/android/hardware/usb/UsbDevice.h>
#include <scapix/java_api/android/hardware/usb/UsbDeviceConnection.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/HashMap.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::usb::UsbManager : public jni::object_base<"android/hardware/usb/UsbManager",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACTION_USB_ACCESSORY_ATTACHED() { return get_static_field<"ACTION_USB_ACCESSORY_ATTACHED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_USB_ACCESSORY_DETACHED() { return get_static_field<"ACTION_USB_ACCESSORY_DETACHED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_USB_DEVICE_ATTACHED() { return get_static_field<"ACTION_USB_DEVICE_ATTACHED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_USB_DEVICE_DETACHED() { return get_static_field<"ACTION_USB_DEVICE_DETACHED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_ACCESSORY() { return get_static_field<"EXTRA_ACCESSORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_DEVICE() { return get_static_field<"EXTRA_DEVICE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PERMISSION_GRANTED() { return get_static_field<"EXTRA_PERMISSION_GRANTED", jni::ref<java::lang::String>>(); }

	jni::ref<java::util::HashMap> getDeviceList() { return call_method<"getDeviceList", jni::ref<java::util::HashMap>>(); }
	jni::ref<android::hardware::usb::UsbDeviceConnection> openDevice(jni::ref<android::hardware::usb::UsbDevice> device) { return call_method<"openDevice", jni::ref<android::hardware::usb::UsbDeviceConnection>>(device); }
	jni::ref<jni::array<android::hardware::usb::UsbAccessory>> getAccessoryList() { return call_method<"getAccessoryList", jni::ref<jni::array<android::hardware::usb::UsbAccessory>>>(); }
	jni::ref<android::os::ParcelFileDescriptor> openAccessory(jni::ref<android::hardware::usb::UsbAccessory> accessory) { return call_method<"openAccessory", jni::ref<android::os::ParcelFileDescriptor>>(accessory); }
	jboolean hasPermission(jni::ref<android::hardware::usb::UsbDevice> device) { return call_method<"hasPermission", jboolean>(device); }
	jboolean hasPermission(jni::ref<android::hardware::usb::UsbAccessory> accessory) { return call_method<"hasPermission", jboolean>(accessory); }
	void requestPermission(jni::ref<android::hardware::usb::UsbDevice> device, jni::ref<android::app::PendingIntent> pi) { return call_method<"requestPermission", void>(device, pi); }
	void requestPermission(jni::ref<android::hardware::usb::UsbAccessory> accessory, jni::ref<android::app::PendingIntent> pi) { return call_method<"requestPermission", void>(accessory, pi); }

protected:

	UsbManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBMANAGER