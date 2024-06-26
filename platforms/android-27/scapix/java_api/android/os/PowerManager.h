// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os { class PowerManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::PowerManager>
{
	static constexpr fixed_string class_name = "android/os/PowerManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER)
#define SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/PowerManager_WakeLock.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::PowerManager : public jni::object_base<"android/os/PowerManager",
	java::lang::Object>
{
public:

	using WakeLock = PowerManager_WakeLock;

	static jint ACQUIRE_CAUSES_WAKEUP() { return get_static_field<"ACQUIRE_CAUSES_WAKEUP", jint>(); }
	static jni::ref<java::lang::String> ACTION_DEVICE_IDLE_MODE_CHANGED() { return get_static_field<"ACTION_DEVICE_IDLE_MODE_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_POWER_SAVE_MODE_CHANGED() { return get_static_field<"ACTION_POWER_SAVE_MODE_CHANGED", jni::ref<java::lang::String>>(); }
	static jint FULL_WAKE_LOCK() { return get_static_field<"FULL_WAKE_LOCK", jint>(); }
	static jint ON_AFTER_RELEASE() { return get_static_field<"ON_AFTER_RELEASE", jint>(); }
	static jint PARTIAL_WAKE_LOCK() { return get_static_field<"PARTIAL_WAKE_LOCK", jint>(); }
	static jint PROXIMITY_SCREEN_OFF_WAKE_LOCK() { return get_static_field<"PROXIMITY_SCREEN_OFF_WAKE_LOCK", jint>(); }
	static jint RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY() { return get_static_field<"RELEASE_FLAG_WAIT_FOR_NO_PROXIMITY", jint>(); }
	static jint SCREEN_BRIGHT_WAKE_LOCK() { return get_static_field<"SCREEN_BRIGHT_WAKE_LOCK", jint>(); }
	static jint SCREEN_DIM_WAKE_LOCK() { return get_static_field<"SCREEN_DIM_WAKE_LOCK", jint>(); }

	jni::ref<android::os::PowerManager_WakeLock> newWakeLock(jint levelAndFlags, jni::ref<java::lang::String> tag) { return call_method<"newWakeLock", jni::ref<android::os::PowerManager_WakeLock>>(levelAndFlags, tag); }
	jboolean isWakeLockLevelSupported(jint level) { return call_method<"isWakeLockLevelSupported", jboolean>(level); }
	jboolean isScreenOn() { return call_method<"isScreenOn", jboolean>(); }
	jboolean isInteractive() { return call_method<"isInteractive", jboolean>(); }
	void reboot(jni::ref<java::lang::String> reason) { return call_method<"reboot", void>(reason); }
	jboolean isPowerSaveMode() { return call_method<"isPowerSaveMode", jboolean>(); }
	jboolean isDeviceIdleMode() { return call_method<"isDeviceIdleMode", jboolean>(); }
	jboolean isIgnoringBatteryOptimizations(jni::ref<java::lang::String> packageName) { return call_method<"isIgnoringBatteryOptimizations", jboolean>(packageName); }
	jboolean isSustainedPerformanceModeSupported() { return call_method<"isSustainedPerformanceModeSupported", jboolean>(); }

protected:

	PowerManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_POWERMANAGER
