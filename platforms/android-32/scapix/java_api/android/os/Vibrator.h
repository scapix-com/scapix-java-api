// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class Vibrator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::Vibrator>
{
	static constexpr fixed_string class_name = "android/os/Vibrator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR)
#define SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/AudioAttributes.h>
#include <scapix/java_api/android/os/VibrationEffect.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::Vibrator : public jni::object_base<"android/os/Vibrator",
	java::lang::Object>
{
public:

	static jint VIBRATION_EFFECT_SUPPORT_NO() { return get_static_field<"VIBRATION_EFFECT_SUPPORT_NO", jint>(); }
	static jint VIBRATION_EFFECT_SUPPORT_UNKNOWN() { return get_static_field<"VIBRATION_EFFECT_SUPPORT_UNKNOWN", jint>(); }
	static jint VIBRATION_EFFECT_SUPPORT_YES() { return get_static_field<"VIBRATION_EFFECT_SUPPORT_YES", jint>(); }

	jint getId() { return call_method<"getId", jint>(); }
	jboolean hasVibrator() { return call_method<"hasVibrator", jboolean>(); }
	jboolean hasAmplitudeControl() { return call_method<"hasAmplitudeControl", jboolean>(); }
	void vibrate(jlong milliseconds) { return call_method<"vibrate", void>(milliseconds); }
	void vibrate(jlong milliseconds, jni::ref<android::media::AudioAttributes> p2) { return call_method<"vibrate", void>(milliseconds, p2); }
	void vibrate(jni::ref<jni::array<jlong>> pattern, jint repeat) { return call_method<"vibrate", void>(pattern, repeat); }
	void vibrate(jni::ref<jni::array<jlong>> pattern, jint repeat, jni::ref<android::media::AudioAttributes> attributes) { return call_method<"vibrate", void>(pattern, repeat, attributes); }
	void vibrate(jni::ref<android::os::VibrationEffect> vibe) { return call_method<"vibrate", void>(vibe); }
	void vibrate(jni::ref<android::os::VibrationEffect> vibe, jni::ref<android::media::AudioAttributes> attributes) { return call_method<"vibrate", void>(vibe, attributes); }
	jni::ref<jni::array<jint>> areEffectsSupported(jni::ref<jni::array<jint>> effectIds) { return call_method<"areEffectsSupported", jni::ref<jni::array<jint>>>(effectIds); }
	jint areAllEffectsSupported(jni::ref<jni::array<jint>> effectIds) { return call_method<"areAllEffectsSupported", jint>(effectIds); }
	jni::ref<jni::array<jboolean>> arePrimitivesSupported(jni::ref<jni::array<jint>> primitiveIds) { return call_method<"arePrimitivesSupported", jni::ref<jni::array<jboolean>>>(primitiveIds); }
	jboolean areAllPrimitivesSupported(jni::ref<jni::array<jint>> primitiveIds) { return call_method<"areAllPrimitivesSupported", jboolean>(primitiveIds); }
	jni::ref<jni::array<jint>> getPrimitiveDurations(jni::ref<jni::array<jint>> primitiveIds) { return call_method<"getPrimitiveDurations", jni::ref<jni::array<jint>>>(primitiveIds); }
	void cancel() { return call_method<"cancel", void>(); }

protected:

	Vibrator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_VIBRATOR
