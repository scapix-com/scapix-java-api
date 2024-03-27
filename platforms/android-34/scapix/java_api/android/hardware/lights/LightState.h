// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE_FWD
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::hardware::lights { class LightState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::hardware::lights::LightState>
{
	static constexpr fixed_string class_name = "android/hardware/lights/LightState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE)
#define SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/hardware/lights/LightState_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::hardware::lights::LightState : public jni::object_base<"android/hardware/lights/LightState",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using Builder = LightState_Builder;

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }

	jint getColor() { return call_method<"getColor", jint>(); }
	jint getPlayerId() { return call_method<"getPlayerId", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	LightState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_HARDWARE_LIGHTS_LIGHTSTATE