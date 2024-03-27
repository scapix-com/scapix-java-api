// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::platform { class Metrics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::platform::Metrics>
{
	static constexpr fixed_string class_name = "jdk/internal/platform/Metrics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::platform::Metrics : public jni::object_base<"jdk/internal/platform/Metrics",
	java::lang::Object>
{
public:

	static jlong LONG_RETVAL_UNLIMITED() { return get_static_field<"LONG_RETVAL_UNLIMITED", jlong>(); }

	static jni::ref<jdk::internal::platform::Metrics> systemMetrics() { return call_static_method<"systemMetrics", jni::ref<jdk::internal::platform::Metrics>>(); }
	jni::ref<java::lang::String> getProvider() { return call_method<"getProvider", jni::ref<java::lang::String>>(); }
	jlong getCpuUsage() { return call_method<"getCpuUsage", jlong>(); }
	jni::ref<jni::array<jlong>> getPerCpuUsage() { return call_method<"getPerCpuUsage", jni::ref<jni::array<jlong>>>(); }
	jlong getCpuUserUsage() { return call_method<"getCpuUserUsage", jlong>(); }
	jlong getCpuSystemUsage() { return call_method<"getCpuSystemUsage", jlong>(); }
	jlong getCpuPeriod() { return call_method<"getCpuPeriod", jlong>(); }
	jlong getCpuQuota() { return call_method<"getCpuQuota", jlong>(); }
	jlong getCpuShares() { return call_method<"getCpuShares", jlong>(); }
	jlong getCpuNumPeriods() { return call_method<"getCpuNumPeriods", jlong>(); }
	jlong getCpuNumThrottled() { return call_method<"getCpuNumThrottled", jlong>(); }
	jlong getCpuThrottledTime() { return call_method<"getCpuThrottledTime", jlong>(); }
	jlong getEffectiveCpuCount() { return call_method<"getEffectiveCpuCount", jlong>(); }
	jni::ref<jni::array<jint>> getCpuSetCpus() { return call_method<"getCpuSetCpus", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getEffectiveCpuSetCpus() { return call_method<"getEffectiveCpuSetCpus", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getCpuSetMems() { return call_method<"getCpuSetMems", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getEffectiveCpuSetMems() { return call_method<"getEffectiveCpuSetMems", jni::ref<jni::array<jint>>>(); }
	jlong getMemoryFailCount() { return call_method<"getMemoryFailCount", jlong>(); }
	jlong getMemoryLimit() { return call_method<"getMemoryLimit", jlong>(); }
	jlong getMemoryUsage() { return call_method<"getMemoryUsage", jlong>(); }
	jlong getTcpMemoryUsage() { return call_method<"getTcpMemoryUsage", jlong>(); }
	jlong getMemoryAndSwapLimit() { return call_method<"getMemoryAndSwapLimit", jlong>(); }
	jlong getMemoryAndSwapUsage() { return call_method<"getMemoryAndSwapUsage", jlong>(); }
	jlong getMemorySoftLimit() { return call_method<"getMemorySoftLimit", jlong>(); }
	jlong getPidsMax() { return call_method<"getPidsMax", jlong>(); }
	jlong getPidsCurrent() { return call_method<"getPidsCurrent", jlong>(); }
	jlong getBlkIOServiceCount() { return call_method<"getBlkIOServiceCount", jlong>(); }
	jlong getBlkIOServiced() { return call_method<"getBlkIOServiced", jlong>(); }

protected:

	Metrics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_PLATFORM_METRICS