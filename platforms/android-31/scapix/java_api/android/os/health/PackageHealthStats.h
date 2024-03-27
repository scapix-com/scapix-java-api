// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS_FWD
#define SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::os::health { class PackageHealthStats; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::os::health::PackageHealthStats>
{
	static constexpr fixed_string class_name = "android/os/health/PackageHealthStats";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS)
#define SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::os::health::PackageHealthStats : public jni::object_base<"android/os/health/PackageHealthStats",
	java::lang::Object>
{
public:

	static jint MEASUREMENTS_WAKEUP_ALARMS_COUNT() { return get_static_field<"MEASUREMENTS_WAKEUP_ALARMS_COUNT", jint>(); }
	static jint STATS_SERVICES() { return get_static_field<"STATS_SERVICES", jint>(); }


protected:

	PackageHealthStats(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_OS_HEALTH_PACKAGEHEALTHSTATS
