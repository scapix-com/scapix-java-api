// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class VibrationAttributes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::VibrationAttributes>
{
	static constexpr fixed_string class_name = "android/os/VibrationAttributes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES)
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/os/VibrationAttributes_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::VibrationAttributes : public jni::object_base<"android/os/VibrationAttributes",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = VibrationAttributes_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FLAG_BYPASS_INTERRUPTION_POLICY() { return get_static_field<"FLAG_BYPASS_INTERRUPTION_POLICY", jint>(); }
	static jint USAGE_ALARM() { return get_static_field<"USAGE_ALARM", jint>(); }
	static jint USAGE_CLASS_ALARM() { return get_static_field<"USAGE_CLASS_ALARM", jint>(); }
	static jint USAGE_CLASS_FEEDBACK() { return get_static_field<"USAGE_CLASS_FEEDBACK", jint>(); }
	static jint USAGE_CLASS_MASK() { return get_static_field<"USAGE_CLASS_MASK", jint>(); }
	static jint USAGE_CLASS_UNKNOWN() { return get_static_field<"USAGE_CLASS_UNKNOWN", jint>(); }
	static jint USAGE_COMMUNICATION_REQUEST() { return get_static_field<"USAGE_COMMUNICATION_REQUEST", jint>(); }
	static jint USAGE_HARDWARE_FEEDBACK() { return get_static_field<"USAGE_HARDWARE_FEEDBACK", jint>(); }
	static jint USAGE_NOTIFICATION() { return get_static_field<"USAGE_NOTIFICATION", jint>(); }
	static jint USAGE_PHYSICAL_EMULATION() { return get_static_field<"USAGE_PHYSICAL_EMULATION", jint>(); }
	static jint USAGE_RINGTONE() { return get_static_field<"USAGE_RINGTONE", jint>(); }
	static jint USAGE_TOUCH() { return get_static_field<"USAGE_TOUCH", jint>(); }
	static jint USAGE_UNKNOWN() { return get_static_field<"USAGE_UNKNOWN", jint>(); }

	jint getUsageClass() { return call_method<"getUsageClass", jint>(); }
	jint getUsage() { return call_method<"getUsage", jint>(); }
	jint getFlags() { return call_method<"getFlags", jint>(); }
	jboolean isFlagSet(jint flag) { return call_method<"isFlagSet", jboolean>(flag); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	VibrationAttributes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONATTRIBUTES