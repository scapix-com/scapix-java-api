// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony::mbms { class DownloadStatusListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::mbms::DownloadStatusListener>
{
	static constexpr fixed_string class_name = "android/telephony/mbms/DownloadStatusListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telephony/mbms/DownloadRequest.h>
#include <scapix/java_api/android/telephony/mbms/FileInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::mbms::DownloadStatusListener : public jni::object_base<"android/telephony/mbms/DownloadStatusListener",
	java::lang::Object>
{
public:

	static jni::ref<android::telephony::mbms::DownloadStatusListener> new_object() { return base_::new_object(); }
	void onStatusUpdated(jni::ref<android::telephony::mbms::DownloadRequest> request, jni::ref<android::telephony::mbms::FileInfo> fileInfo, jint status) { return call_method<"onStatusUpdated", void>(request, fileInfo, status); }

protected:

	DownloadStatusListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMS_DOWNLOADSTATUSLISTENER
