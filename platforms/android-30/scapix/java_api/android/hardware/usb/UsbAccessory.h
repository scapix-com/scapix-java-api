// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::usb { class UsbAccessory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::usb::UsbAccessory>
{
	static constexpr fixed_string class_name = "android/hardware/usb/UsbAccessory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::usb::UsbAccessory : public jni::object_base<"android/hardware/usb/UsbAccessory",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jni::ref<java::lang::String> getManufacturer() { return call_method<"getManufacturer", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getModel() { return call_method<"getModel", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDescription() { return call_method<"getDescription", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getVersion() { return call_method<"getVersion", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getUri() { return call_method<"getUri", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSerial() { return call_method<"getSerial", jni::ref<java::lang::String>>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	UsbAccessory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_USB_USBACCESSORY
