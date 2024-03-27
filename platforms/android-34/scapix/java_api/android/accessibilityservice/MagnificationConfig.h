// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG_FWD
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::accessibilityservice { class MagnificationConfig; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::accessibilityservice::MagnificationConfig>
{
	static constexpr fixed_string class_name = "android/accessibilityservice/MagnificationConfig";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG)
#define SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/accessibilityservice/MagnificationConfig_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::accessibilityservice::MagnificationConfig : public jni::object_base<"android/accessibilityservice/MagnificationConfig",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = MagnificationConfig_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint MAGNIFICATION_MODE_DEFAULT() { return get_static_field<"MAGNIFICATION_MODE_DEFAULT", jint>(); }
	static jint MAGNIFICATION_MODE_FULLSCREEN() { return get_static_field<"MAGNIFICATION_MODE_FULLSCREEN", jint>(); }
	static jint MAGNIFICATION_MODE_WINDOW() { return get_static_field<"MAGNIFICATION_MODE_WINDOW", jint>(); }

	jint getMode() { return call_method<"getMode", jint>(); }
	jboolean isActivated() { return call_method<"isActivated", jboolean>(); }
	jfloat getScale() { return call_method<"getScale", jfloat>(); }
	jfloat getCenterX() { return call_method<"getCenterX", jfloat>(); }
	jfloat getCenterY() { return call_method<"getCenterY", jfloat>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }

protected:

	MagnificationConfig(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_ACCESSIBILITYSERVICE_MAGNIFICATIONCONFIG
