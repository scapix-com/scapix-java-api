// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::health { class UidHealthStats; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::health::UidHealthStats>
{
	static constexpr fixed_string class_name = "android/os/health/UidHealthStats";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS)
#define SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::health::UidHealthStats : public jni::object_base<"android/os/health/UidHealthStats",
	java::lang::Object>
{
public:

	static jint MEASUREMENT_BLUETOOTH_IDLE_MS() { return get_static_field<"MEASUREMENT_BLUETOOTH_IDLE_MS", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_POWER_MAMS() { return get_static_field<"MEASUREMENT_BLUETOOTH_POWER_MAMS", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_RX_BYTES() { return get_static_field<"MEASUREMENT_BLUETOOTH_RX_BYTES", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_RX_MS() { return get_static_field<"MEASUREMENT_BLUETOOTH_RX_MS", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_RX_PACKETS() { return get_static_field<"MEASUREMENT_BLUETOOTH_RX_PACKETS", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_TX_BYTES() { return get_static_field<"MEASUREMENT_BLUETOOTH_TX_BYTES", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_TX_MS() { return get_static_field<"MEASUREMENT_BLUETOOTH_TX_MS", jint>(); }
	static jint MEASUREMENT_BLUETOOTH_TX_PACKETS() { return get_static_field<"MEASUREMENT_BLUETOOTH_TX_PACKETS", jint>(); }
	static jint MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT() { return get_static_field<"MEASUREMENT_BUTTON_USER_ACTIVITY_COUNT", jint>(); }
	static jint MEASUREMENT_CPU_POWER_MAMS() { return get_static_field<"MEASUREMENT_CPU_POWER_MAMS", jint>(); }
	static jint MEASUREMENT_MOBILE_IDLE_MS() { return get_static_field<"MEASUREMENT_MOBILE_IDLE_MS", jint>(); }
	static jint MEASUREMENT_MOBILE_POWER_MAMS() { return get_static_field<"MEASUREMENT_MOBILE_POWER_MAMS", jint>(); }
	static jint MEASUREMENT_MOBILE_RX_BYTES() { return get_static_field<"MEASUREMENT_MOBILE_RX_BYTES", jint>(); }
	static jint MEASUREMENT_MOBILE_RX_MS() { return get_static_field<"MEASUREMENT_MOBILE_RX_MS", jint>(); }
	static jint MEASUREMENT_MOBILE_RX_PACKETS() { return get_static_field<"MEASUREMENT_MOBILE_RX_PACKETS", jint>(); }
	static jint MEASUREMENT_MOBILE_TX_BYTES() { return get_static_field<"MEASUREMENT_MOBILE_TX_BYTES", jint>(); }
	static jint MEASUREMENT_MOBILE_TX_MS() { return get_static_field<"MEASUREMENT_MOBILE_TX_MS", jint>(); }
	static jint MEASUREMENT_MOBILE_TX_PACKETS() { return get_static_field<"MEASUREMENT_MOBILE_TX_PACKETS", jint>(); }
	static jint MEASUREMENT_OTHER_USER_ACTIVITY_COUNT() { return get_static_field<"MEASUREMENT_OTHER_USER_ACTIVITY_COUNT", jint>(); }
	static jint MEASUREMENT_REALTIME_BATTERY_MS() { return get_static_field<"MEASUREMENT_REALTIME_BATTERY_MS", jint>(); }
	static jint MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS() { return get_static_field<"MEASUREMENT_REALTIME_SCREEN_OFF_BATTERY_MS", jint>(); }
	static jint MEASUREMENT_SYSTEM_CPU_TIME_MS() { return get_static_field<"MEASUREMENT_SYSTEM_CPU_TIME_MS", jint>(); }
	static jint MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT() { return get_static_field<"MEASUREMENT_TOUCH_USER_ACTIVITY_COUNT", jint>(); }
	static jint MEASUREMENT_UPTIME_BATTERY_MS() { return get_static_field<"MEASUREMENT_UPTIME_BATTERY_MS", jint>(); }
	static jint MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS() { return get_static_field<"MEASUREMENT_UPTIME_SCREEN_OFF_BATTERY_MS", jint>(); }
	static jint MEASUREMENT_USER_CPU_TIME_MS() { return get_static_field<"MEASUREMENT_USER_CPU_TIME_MS", jint>(); }
	static jint MEASUREMENT_WIFI_FULL_LOCK_MS() { return get_static_field<"MEASUREMENT_WIFI_FULL_LOCK_MS", jint>(); }
	static jint MEASUREMENT_WIFI_IDLE_MS() { return get_static_field<"MEASUREMENT_WIFI_IDLE_MS", jint>(); }
	static jint MEASUREMENT_WIFI_MULTICAST_MS() { return get_static_field<"MEASUREMENT_WIFI_MULTICAST_MS", jint>(); }
	static jint MEASUREMENT_WIFI_POWER_MAMS() { return get_static_field<"MEASUREMENT_WIFI_POWER_MAMS", jint>(); }
	static jint MEASUREMENT_WIFI_RUNNING_MS() { return get_static_field<"MEASUREMENT_WIFI_RUNNING_MS", jint>(); }
	static jint MEASUREMENT_WIFI_RX_BYTES() { return get_static_field<"MEASUREMENT_WIFI_RX_BYTES", jint>(); }
	static jint MEASUREMENT_WIFI_RX_MS() { return get_static_field<"MEASUREMENT_WIFI_RX_MS", jint>(); }
	static jint MEASUREMENT_WIFI_RX_PACKETS() { return get_static_field<"MEASUREMENT_WIFI_RX_PACKETS", jint>(); }
	static jint MEASUREMENT_WIFI_TX_BYTES() { return get_static_field<"MEASUREMENT_WIFI_TX_BYTES", jint>(); }
	static jint MEASUREMENT_WIFI_TX_MS() { return get_static_field<"MEASUREMENT_WIFI_TX_MS", jint>(); }
	static jint MEASUREMENT_WIFI_TX_PACKETS() { return get_static_field<"MEASUREMENT_WIFI_TX_PACKETS", jint>(); }
	static jint STATS_PACKAGES() { return get_static_field<"STATS_PACKAGES", jint>(); }
	static jint STATS_PIDS() { return get_static_field<"STATS_PIDS", jint>(); }
	static jint STATS_PROCESSES() { return get_static_field<"STATS_PROCESSES", jint>(); }
	static jint TIMERS_JOBS() { return get_static_field<"TIMERS_JOBS", jint>(); }
	static jint TIMERS_SENSORS() { return get_static_field<"TIMERS_SENSORS", jint>(); }
	static jint TIMERS_SYNCS() { return get_static_field<"TIMERS_SYNCS", jint>(); }
	static jint TIMERS_WAKELOCKS_DRAW() { return get_static_field<"TIMERS_WAKELOCKS_DRAW", jint>(); }
	static jint TIMERS_WAKELOCKS_FULL() { return get_static_field<"TIMERS_WAKELOCKS_FULL", jint>(); }
	static jint TIMERS_WAKELOCKS_PARTIAL() { return get_static_field<"TIMERS_WAKELOCKS_PARTIAL", jint>(); }
	static jint TIMERS_WAKELOCKS_WINDOW() { return get_static_field<"TIMERS_WAKELOCKS_WINDOW", jint>(); }
	static jint TIMER_AUDIO() { return get_static_field<"TIMER_AUDIO", jint>(); }
	static jint TIMER_BLUETOOTH_SCAN() { return get_static_field<"TIMER_BLUETOOTH_SCAN", jint>(); }
	static jint TIMER_CAMERA() { return get_static_field<"TIMER_CAMERA", jint>(); }
	static jint TIMER_FLASHLIGHT() { return get_static_field<"TIMER_FLASHLIGHT", jint>(); }
	static jint TIMER_FOREGROUND_ACTIVITY() { return get_static_field<"TIMER_FOREGROUND_ACTIVITY", jint>(); }
	static jint TIMER_GPS_SENSOR() { return get_static_field<"TIMER_GPS_SENSOR", jint>(); }
	static jint TIMER_MOBILE_RADIO_ACTIVE() { return get_static_field<"TIMER_MOBILE_RADIO_ACTIVE", jint>(); }
	static jint TIMER_PROCESS_STATE_BACKGROUND_MS() { return get_static_field<"TIMER_PROCESS_STATE_BACKGROUND_MS", jint>(); }
	static jint TIMER_PROCESS_STATE_CACHED_MS() { return get_static_field<"TIMER_PROCESS_STATE_CACHED_MS", jint>(); }
	static jint TIMER_PROCESS_STATE_FOREGROUND_MS() { return get_static_field<"TIMER_PROCESS_STATE_FOREGROUND_MS", jint>(); }
	static jint TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS() { return get_static_field<"TIMER_PROCESS_STATE_FOREGROUND_SERVICE_MS", jint>(); }
	static jint TIMER_PROCESS_STATE_TOP_MS() { return get_static_field<"TIMER_PROCESS_STATE_TOP_MS", jint>(); }
	static jint TIMER_PROCESS_STATE_TOP_SLEEPING_MS() { return get_static_field<"TIMER_PROCESS_STATE_TOP_SLEEPING_MS", jint>(); }
	static jint TIMER_VIBRATOR() { return get_static_field<"TIMER_VIBRATOR", jint>(); }
	static jint TIMER_VIDEO() { return get_static_field<"TIMER_VIDEO", jint>(); }
	static jint TIMER_WIFI_SCAN() { return get_static_field<"TIMER_WIFI_SCAN", jint>(); }


protected:

	UidHealthStats(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_HEALTH_UIDHEALTHSTATS
