// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class Display_HdrCapabilities; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::Display_HdrCapabilities>
{
	static constexpr fixed_string class_name = "android/view/Display$HdrCapabilities";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES)
#define SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::Display_HdrCapabilities : public jni::object_base<"android/view/Display$HdrCapabilities",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint HDR_TYPE_DOLBY_VISION() { return get_static_field<"HDR_TYPE_DOLBY_VISION", jint>(); }
	static jint HDR_TYPE_HDR10() { return get_static_field<"HDR_TYPE_HDR10", jint>(); }
	static jint HDR_TYPE_HDR10_PLUS() { return get_static_field<"HDR_TYPE_HDR10_PLUS", jint>(); }
	static jint HDR_TYPE_HLG() { return get_static_field<"HDR_TYPE_HLG", jint>(); }
	static jfloat INVALID_LUMINANCE() { return get_static_field<"INVALID_LUMINANCE", jfloat>(); }

	jni::ref<jni::array<jint>> getSupportedHdrTypes() { return call_method<"getSupportedHdrTypes", jni::ref<jni::array<jint>>>(); }
	jfloat getDesiredMaxLuminance() { return call_method<"getDesiredMaxLuminance", jfloat>(); }
	jfloat getDesiredMaxAverageLuminance() { return call_method<"getDesiredMaxAverageLuminance", jfloat>(); }
	jfloat getDesiredMinLuminance() { return call_method<"getDesiredMinLuminance", jfloat>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Display_HdrCapabilities(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_DISPLAY_HDRCAPABILITIES
