// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::job { class JobParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::job::JobParameters>
{
	static constexpr fixed_string class_name = "android/app/job/JobParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS)
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/job/JobWorkItem.h>
#include <scapix/java_api/android/content/ClipData.h>
#include <scapix/java_api/android/net/Network.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/os/PersistableBundle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::job::JobParameters : public jni::object_base<"android/app/job/JobParameters",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint STOP_REASON_APP_STANDBY() { return get_static_field<"STOP_REASON_APP_STANDBY", jint>(); }
	static jint STOP_REASON_BACKGROUND_RESTRICTION() { return get_static_field<"STOP_REASON_BACKGROUND_RESTRICTION", jint>(); }
	static jint STOP_REASON_CANCELLED_BY_APP() { return get_static_field<"STOP_REASON_CANCELLED_BY_APP", jint>(); }
	static jint STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW() { return get_static_field<"STOP_REASON_CONSTRAINT_BATTERY_NOT_LOW", jint>(); }
	static jint STOP_REASON_CONSTRAINT_CHARGING() { return get_static_field<"STOP_REASON_CONSTRAINT_CHARGING", jint>(); }
	static jint STOP_REASON_CONSTRAINT_CONNECTIVITY() { return get_static_field<"STOP_REASON_CONSTRAINT_CONNECTIVITY", jint>(); }
	static jint STOP_REASON_CONSTRAINT_DEVICE_IDLE() { return get_static_field<"STOP_REASON_CONSTRAINT_DEVICE_IDLE", jint>(); }
	static jint STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW() { return get_static_field<"STOP_REASON_CONSTRAINT_STORAGE_NOT_LOW", jint>(); }
	static jint STOP_REASON_DEVICE_STATE() { return get_static_field<"STOP_REASON_DEVICE_STATE", jint>(); }
	static jint STOP_REASON_PREEMPT() { return get_static_field<"STOP_REASON_PREEMPT", jint>(); }
	static jint STOP_REASON_QUOTA() { return get_static_field<"STOP_REASON_QUOTA", jint>(); }
	static jint STOP_REASON_SYSTEM_PROCESSING() { return get_static_field<"STOP_REASON_SYSTEM_PROCESSING", jint>(); }
	static jint STOP_REASON_TIMEOUT() { return get_static_field<"STOP_REASON_TIMEOUT", jint>(); }
	static jint STOP_REASON_UNDEFINED() { return get_static_field<"STOP_REASON_UNDEFINED", jint>(); }
	static jint STOP_REASON_USER() { return get_static_field<"STOP_REASON_USER", jint>(); }

	jint getJobId() { return call_method<"getJobId", jint>(); }
	jint getStopReason() { return call_method<"getStopReason", jint>(); }
	jni::ref<android::os::PersistableBundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::PersistableBundle>>(); }
	jni::ref<android::os::Bundle> getTransientExtras() { return call_method<"getTransientExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::content::ClipData> getClipData() { return call_method<"getClipData", jni::ref<android::content::ClipData>>(); }
	jint getClipGrantFlags() { return call_method<"getClipGrantFlags", jint>(); }
	jboolean isExpeditedJob() { return call_method<"isExpeditedJob", jboolean>(); }
	jboolean isOverrideDeadlineExpired() { return call_method<"isOverrideDeadlineExpired", jboolean>(); }
	jni::ref<jni::array<android::net::Uri>> getTriggeredContentUris() { return call_method<"getTriggeredContentUris", jni::ref<jni::array<android::net::Uri>>>(); }
	jni::ref<jni::array<java::lang::String>> getTriggeredContentAuthorities() { return call_method<"getTriggeredContentAuthorities", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<android::net::Network> getNetwork() { return call_method<"getNetwork", jni::ref<android::net::Network>>(); }
	jni::ref<android::app::job::JobWorkItem> dequeueWork() { return call_method<"dequeueWork", jni::ref<android::app::job::JobWorkItem>>(); }
	void completeWork(jni::ref<android::app::job::JobWorkItem> work) { return call_method<"completeWork", void>(work); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> dest, jint flags) { return call_method<"writeToParcel", void>(dest, flags); }

protected:

	JobParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBPARAMETERS