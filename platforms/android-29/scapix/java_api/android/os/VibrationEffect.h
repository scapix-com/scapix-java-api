// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class VibrationEffect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::VibrationEffect>
{
	static constexpr fixed_string class_name = "android/os/VibrationEffect";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT)
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::VibrationEffect : public jni::object_base<"android/os/VibrationEffect",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint DEFAULT_AMPLITUDE() { return get_static_field<"DEFAULT_AMPLITUDE", jint>(); }
	static jint EFFECT_CLICK() { return get_static_field<"EFFECT_CLICK", jint>(); }
	static jint EFFECT_DOUBLE_CLICK() { return get_static_field<"EFFECT_DOUBLE_CLICK", jint>(); }
	static jint EFFECT_HEAVY_CLICK() { return get_static_field<"EFFECT_HEAVY_CLICK", jint>(); }
	static jint EFFECT_TICK() { return get_static_field<"EFFECT_TICK", jint>(); }

	static jni::ref<android::os::VibrationEffect> createOneShot(jlong milliseconds, jint p2) { return call_static_method<"createOneShot", jni::ref<android::os::VibrationEffect>>(milliseconds, p2); }
	static jni::ref<android::os::VibrationEffect> createWaveform(jni::ref<jni::array<jlong>> timings, jint repeat) { return call_static_method<"createWaveform", jni::ref<android::os::VibrationEffect>>(timings, repeat); }
	static jni::ref<android::os::VibrationEffect> createWaveform(jni::ref<jni::array<jlong>> timings, jni::ref<jni::array<jint>> amplitudes, jint repeat) { return call_static_method<"createWaveform", jni::ref<android::os::VibrationEffect>>(timings, amplitudes, repeat); }
	static jni::ref<android::os::VibrationEffect> createPredefined(jint effectId) { return call_static_method<"createPredefined", jni::ref<android::os::VibrationEffect>>(effectId); }
	jint describeContents() { return call_method<"describeContents", jint>(); }

protected:

	VibrationEffect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATIONEFFECT