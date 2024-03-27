// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class DownloadManager_Request; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::DownloadManager_Request>
{
	static constexpr fixed_string class_name = "android/app/DownloadManager$Request";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST)
#define SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::DownloadManager_Request : public jni::object_base<"android/app/DownloadManager$Request",
	java::lang::Object>
{
public:

	static jint NETWORK_MOBILE() { return get_static_field<"NETWORK_MOBILE", jint>(); }
	static jint NETWORK_WIFI() { return get_static_field<"NETWORK_WIFI", jint>(); }
	static jint VISIBILITY_HIDDEN() { return get_static_field<"VISIBILITY_HIDDEN", jint>(); }
	static jint VISIBILITY_VISIBLE() { return get_static_field<"VISIBILITY_VISIBLE", jint>(); }
	static jint VISIBILITY_VISIBLE_NOTIFY_COMPLETED() { return get_static_field<"VISIBILITY_VISIBLE_NOTIFY_COMPLETED", jint>(); }
	static jint VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION() { return get_static_field<"VISIBILITY_VISIBLE_NOTIFY_ONLY_COMPLETION", jint>(); }

	static jni::ref<android::app::DownloadManager_Request> new_object(jni::ref<android::net::Uri> uri) { return base_::new_object(uri); }
	jni::ref<android::app::DownloadManager_Request> setDestinationUri(jni::ref<android::net::Uri> uri) { return call_method<"setDestinationUri", jni::ref<android::app::DownloadManager_Request>>(uri); }
	jni::ref<android::app::DownloadManager_Request> setDestinationInExternalFilesDir(jni::ref<android::content::Context> context, jni::ref<java::lang::String> dirType, jni::ref<java::lang::String> subPath) { return call_method<"setDestinationInExternalFilesDir", jni::ref<android::app::DownloadManager_Request>>(context, dirType, subPath); }
	jni::ref<android::app::DownloadManager_Request> setDestinationInExternalPublicDir(jni::ref<java::lang::String> dirType, jni::ref<java::lang::String> subPath) { return call_method<"setDestinationInExternalPublicDir", jni::ref<android::app::DownloadManager_Request>>(dirType, subPath); }
	void allowScanningByMediaScanner() { return call_method<"allowScanningByMediaScanner", void>(); }
	jni::ref<android::app::DownloadManager_Request> addRequestHeader(jni::ref<java::lang::String> header, jni::ref<java::lang::String> value) { return call_method<"addRequestHeader", jni::ref<android::app::DownloadManager_Request>>(header, value); }
	jni::ref<android::app::DownloadManager_Request> setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", jni::ref<android::app::DownloadManager_Request>>(title); }
	jni::ref<android::app::DownloadManager_Request> setDescription(jni::ref<java::lang::CharSequence> description) { return call_method<"setDescription", jni::ref<android::app::DownloadManager_Request>>(description); }
	jni::ref<android::app::DownloadManager_Request> setMimeType(jni::ref<java::lang::String> mimeType) { return call_method<"setMimeType", jni::ref<android::app::DownloadManager_Request>>(mimeType); }
	jni::ref<android::app::DownloadManager_Request> setShowRunningNotification(jboolean show) { return call_method<"setShowRunningNotification", jni::ref<android::app::DownloadManager_Request>>(show); }
	jni::ref<android::app::DownloadManager_Request> setNotificationVisibility(jint visibility) { return call_method<"setNotificationVisibility", jni::ref<android::app::DownloadManager_Request>>(visibility); }
	jni::ref<android::app::DownloadManager_Request> setAllowedNetworkTypes(jint flags) { return call_method<"setAllowedNetworkTypes", jni::ref<android::app::DownloadManager_Request>>(flags); }
	jni::ref<android::app::DownloadManager_Request> setAllowedOverRoaming(jboolean allowed) { return call_method<"setAllowedOverRoaming", jni::ref<android::app::DownloadManager_Request>>(allowed); }
	jni::ref<android::app::DownloadManager_Request> setAllowedOverMetered(jboolean allow) { return call_method<"setAllowedOverMetered", jni::ref<android::app::DownloadManager_Request>>(allow); }
	jni::ref<android::app::DownloadManager_Request> setRequiresCharging(jboolean requiresCharging) { return call_method<"setRequiresCharging", jni::ref<android::app::DownloadManager_Request>>(requiresCharging); }
	jni::ref<android::app::DownloadManager_Request> setRequiresDeviceIdle(jboolean requiresDeviceIdle) { return call_method<"setRequiresDeviceIdle", jni::ref<android::app::DownloadManager_Request>>(requiresDeviceIdle); }
	jni::ref<android::app::DownloadManager_Request> setVisibleInDownloadsUi(jboolean isVisible) { return call_method<"setVisibleInDownloadsUi", jni::ref<android::app::DownloadManager_Request>>(isVisible); }

protected:

	DownloadManager_Request(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_DOWNLOADMANAGER_REQUEST
