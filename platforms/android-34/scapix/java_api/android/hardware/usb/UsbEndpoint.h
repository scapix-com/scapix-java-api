// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::usb { class UsbEndpoint; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::usb::UsbEndpoint>
{
	static constexpr fixed_string class_name = "android/hardware/usb/UsbEndpoint";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::usb::UsbEndpoint : public jni::object_base<"android/hardware/usb/UsbEndpoint",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getAddress() { return call_method<"getAddress", jint>(); }
	jint getEndpointNumber() { return call_method<"getEndpointNumber", jint>(); }
	jint getDirection() { return call_method<"getDirection", jint>(); }
	jint getAttributes() { return call_method<"getAttributes", jint>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jint getMaxPacketSize() { return call_method<"getMaxPacketSize", jint>(); }
	jint getInterval() { return call_method<"getInterval", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	UsbEndpoint(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBENDPOINT
