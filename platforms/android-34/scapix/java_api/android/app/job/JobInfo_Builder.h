// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::job { class JobInfo_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::job::JobInfo_Builder>
{
	static constexpr fixed_string class_name = "android/app/job/JobInfo$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/job/JobInfo.h>
#include <scapix/java_api/android/app/job/JobInfo_TriggerContentUri.h>
#include <scapix/java_api/android/content/ClipData.h>
#include <scapix/java_api/android/content/ComponentName.h>
#include <scapix/java_api/android/net/NetworkRequest.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::job::JobInfo_Builder : public jni::object_base<"android/app/job/JobInfo$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::job::JobInfo_Builder> new_object(jint jobId, jni::ref<android::content::ComponentName> jobService) { return base_::new_object(jobId, jobService); }
	jni::ref<android::app::job::JobInfo_Builder> setPriority(jint priority) { return call_method<"setPriority", jni::ref<android::app::job::JobInfo_Builder>>(priority); }
	jni::ref<android::app::job::JobInfo_Builder> setExtras(jni::ref<android::os::PersistableBundle> extras) { return call_method<"setExtras", jni::ref<android::app::job::JobInfo_Builder>>(extras); }
	jni::ref<android::app::job::JobInfo_Builder> setTransientExtras(jni::ref<android::os::Bundle> extras) { return call_method<"setTransientExtras", jni::ref<android::app::job::JobInfo_Builder>>(extras); }
	jni::ref<android::app::job::JobInfo_Builder> setClipData(jni::ref<android::content::ClipData> clip, jint grantFlags) { return call_method<"setClipData", jni::ref<android::app::job::JobInfo_Builder>>(clip, grantFlags); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiredNetworkType(jint networkType) { return call_method<"setRequiredNetworkType", jni::ref<android::app::job::JobInfo_Builder>>(networkType); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiredNetwork(jni::ref<android::net::NetworkRequest> networkRequest) { return call_method<"setRequiredNetwork", jni::ref<android::app::job::JobInfo_Builder>>(networkRequest); }
	jni::ref<android::app::job::JobInfo_Builder> setEstimatedNetworkBytes(jlong downloadBytes, jlong p2) { return call_method<"setEstimatedNetworkBytes", jni::ref<android::app::job::JobInfo_Builder>>(downloadBytes, p2); }
	jni::ref<android::app::job::JobInfo_Builder> setMinimumNetworkChunkBytes(jlong chunkSizeBytes) { return call_method<"setMinimumNetworkChunkBytes", jni::ref<android::app::job::JobInfo_Builder>>(chunkSizeBytes); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiresCharging(jboolean requiresCharging) { return call_method<"setRequiresCharging", jni::ref<android::app::job::JobInfo_Builder>>(requiresCharging); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiresBatteryNotLow(jboolean batteryNotLow) { return call_method<"setRequiresBatteryNotLow", jni::ref<android::app::job::JobInfo_Builder>>(batteryNotLow); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiresDeviceIdle(jboolean requiresDeviceIdle) { return call_method<"setRequiresDeviceIdle", jni::ref<android::app::job::JobInfo_Builder>>(requiresDeviceIdle); }
	jni::ref<android::app::job::JobInfo_Builder> setRequiresStorageNotLow(jboolean storageNotLow) { return call_method<"setRequiresStorageNotLow", jni::ref<android::app::job::JobInfo_Builder>>(storageNotLow); }
	jni::ref<android::app::job::JobInfo_Builder> addTriggerContentUri(jni::ref<android::app::job::JobInfo_TriggerContentUri> uri) { return call_method<"addTriggerContentUri", jni::ref<android::app::job::JobInfo_Builder>>(uri); }
	jni::ref<android::app::job::JobInfo_Builder> setTriggerContentUpdateDelay(jlong durationMs) { return call_method<"setTriggerContentUpdateDelay", jni::ref<android::app::job::JobInfo_Builder>>(durationMs); }
	jni::ref<android::app::job::JobInfo_Builder> setTriggerContentMaxDelay(jlong durationMs) { return call_method<"setTriggerContentMaxDelay", jni::ref<android::app::job::JobInfo_Builder>>(durationMs); }
	jni::ref<android::app::job::JobInfo_Builder> setPeriodic(jlong intervalMillis) { return call_method<"setPeriodic", jni::ref<android::app::job::JobInfo_Builder>>(intervalMillis); }
	jni::ref<android::app::job::JobInfo_Builder> setPeriodic(jlong intervalMillis, jlong p2) { return call_method<"setPeriodic", jni::ref<android::app::job::JobInfo_Builder>>(intervalMillis, p2); }
	jni::ref<android::app::job::JobInfo_Builder> setMinimumLatency(jlong minLatencyMillis) { return call_method<"setMinimumLatency", jni::ref<android::app::job::JobInfo_Builder>>(minLatencyMillis); }
	jni::ref<android::app::job::JobInfo_Builder> setOverrideDeadline(jlong maxExecutionDelayMillis) { return call_method<"setOverrideDeadline", jni::ref<android::app::job::JobInfo_Builder>>(maxExecutionDelayMillis); }
	jni::ref<android::app::job::JobInfo_Builder> setBackoffCriteria(jlong initialBackoffMillis, jint p2) { return call_method<"setBackoffCriteria", jni::ref<android::app::job::JobInfo_Builder>>(initialBackoffMillis, p2); }
	jni::ref<android::app::job::JobInfo_Builder> setExpedited(jboolean expedited) { return call_method<"setExpedited", jni::ref<android::app::job::JobInfo_Builder>>(expedited); }
	jni::ref<android::app::job::JobInfo_Builder> setUserInitiated(jboolean userInitiated) { return call_method<"setUserInitiated", jni::ref<android::app::job::JobInfo_Builder>>(userInitiated); }
	jni::ref<android::app::job::JobInfo_Builder> setImportantWhileForeground(jboolean importantWhileForeground) { return call_method<"setImportantWhileForeground", jni::ref<android::app::job::JobInfo_Builder>>(importantWhileForeground); }
	jni::ref<android::app::job::JobInfo_Builder> setPrefetch(jboolean prefetch) { return call_method<"setPrefetch", jni::ref<android::app::job::JobInfo_Builder>>(prefetch); }
	jni::ref<android::app::job::JobInfo_Builder> setPersisted(jboolean isPersisted) { return call_method<"setPersisted", jni::ref<android::app::job::JobInfo_Builder>>(isPersisted); }
	jni::ref<android::app::job::JobInfo> build() { return call_method<"build", jni::ref<android::app::job::JobInfo>>(); }

protected:

	JobInfo_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBINFO_BUILDER
