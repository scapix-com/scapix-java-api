// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::job { class JobService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::job::JobService>
{
	static constexpr fixed_string class_name = "android/app/job/JobService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE)
#define SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Notification.h>
#include <scapix/java_api/android/app/job/JobParameters.h>
#include <scapix/java_api/android/app/job/JobWorkItem.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::job::JobService : public jni::object_base<"android/app/job/JobService",
	android::app::Service>
{
public:

	static jint JOB_END_NOTIFICATION_POLICY_DETACH() { return get_static_field<"JOB_END_NOTIFICATION_POLICY_DETACH", jint>(); }
	static jint JOB_END_NOTIFICATION_POLICY_REMOVE() { return get_static_field<"JOB_END_NOTIFICATION_POLICY_REMOVE", jint>(); }
	static jni::ref<java::lang::String> PERMISSION_BIND() { return get_static_field<"PERMISSION_BIND", jni::ref<java::lang::String>>(); }

	static jni::ref<android::app::job::JobService> new_object() { return base_::new_object(); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }
	void jobFinished(jni::ref<android::app::job::JobParameters> params, jboolean wantsReschedule) { return call_method<"jobFinished", void>(params, wantsReschedule); }
	jboolean onStartJob(jni::ref<android::app::job::JobParameters> p1) { return call_method<"onStartJob", jboolean>(p1); }
	jboolean onStopJob(jni::ref<android::app::job::JobParameters> p1) { return call_method<"onStopJob", jboolean>(p1); }
	void onNetworkChanged(jni::ref<android::app::job::JobParameters> params) { return call_method<"onNetworkChanged", void>(params); }
	void updateEstimatedNetworkBytes(jni::ref<android::app::job::JobParameters> params, jlong downloadBytes, jlong p3) { return call_method<"updateEstimatedNetworkBytes", void>(params, downloadBytes, p3); }
	void updateEstimatedNetworkBytes(jni::ref<android::app::job::JobParameters> params, jni::ref<android::app::job::JobWorkItem> jobWorkItem, jlong downloadBytes, jlong p4) { return call_method<"updateEstimatedNetworkBytes", void>(params, jobWorkItem, downloadBytes, p4); }
	void updateTransferredNetworkBytes(jni::ref<android::app::job::JobParameters> params, jlong transferredDownloadBytes, jlong p3) { return call_method<"updateTransferredNetworkBytes", void>(params, transferredDownloadBytes, p3); }
	void updateTransferredNetworkBytes(jni::ref<android::app::job::JobParameters> params, jni::ref<android::app::job::JobWorkItem> item, jlong transferredDownloadBytes, jlong p4) { return call_method<"updateTransferredNetworkBytes", void>(params, item, transferredDownloadBytes, p4); }
	void setNotification(jni::ref<android::app::job::JobParameters> params, jint notificationId, jni::ref<android::app::Notification> notification, jint jobEndNotificationPolicy) { return call_method<"setNotification", void>(params, notificationId, notification, jobEndNotificationPolicy); }

protected:

	JobService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_JOB_JOBSERVICE
