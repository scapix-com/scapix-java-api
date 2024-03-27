// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::usb { class UsbConfiguration; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::usb::UsbConfiguration>
{
	static constexpr fixed_string class_name = "android/hardware/usb/UsbConfiguration";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/hardware/usb/UsbInterface.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::usb::UsbConfiguration : public jni::object_base<"android/hardware/usb/UsbConfiguration",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jboolean isSelfPowered() { return call_method<"isSelfPowered", jboolean>(); }
	jboolean isRemoteWakeup() { return call_method<"isRemoteWakeup", jboolean>(); }
	jint getMaxPower() { return call_method<"getMaxPower", jint>(); }
	jint getInterfaceCount() { return call_method<"getInterfaceCount", jint>(); }
	jni::ref<android::hardware::usb::UsbInterface> getInterface(jint index) { return call_method<"getInterface", jni::ref<android::hardware::usb::UsbInterface>>(index); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	UsbConfiguration(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBCONFIGURATION
