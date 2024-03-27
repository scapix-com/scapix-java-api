// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telephony { class MbmsDownloadSession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telephony::MbmsDownloadSession>
{
	static constexpr fixed_string class_name = "android/telephony/MbmsDownloadSession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION)
#define SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/telephony/mbms/DownloadProgressListener.h>
#include <scapix/java_api/android/telephony/mbms/DownloadRequest.h>
#include <scapix/java_api/android/telephony/mbms/DownloadStatusListener.h>
#include <scapix/java_api/android/telephony/mbms/FileInfo.h>
#include <scapix/java_api/android/telephony/mbms/MbmsDownloadSessionCallback.h>
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telephony::MbmsDownloadSession : public jni::object_base<"android/telephony/MbmsDownloadSession",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	static jni::ref<java::lang::String> DEFAULT_TOP_LEVEL_TEMP_DIRECTORY() { return get_static_field<"DEFAULT_TOP_LEVEL_TEMP_DIRECTORY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MBMS_COMPLETED_FILE_URI() { return get_static_field<"EXTRA_MBMS_COMPLETED_FILE_URI", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MBMS_DOWNLOAD_REQUEST() { return get_static_field<"EXTRA_MBMS_DOWNLOAD_REQUEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MBMS_DOWNLOAD_RESULT() { return get_static_field<"EXTRA_MBMS_DOWNLOAD_RESULT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_MBMS_FILE_INFO() { return get_static_field<"EXTRA_MBMS_FILE_INFO", jni::ref<java::lang::String>>(); }
	static jint RESULT_CANCELLED() { return get_static_field<"RESULT_CANCELLED", jint>(); }
	static jint RESULT_DOWNLOAD_FAILURE() { return get_static_field<"RESULT_DOWNLOAD_FAILURE", jint>(); }
	static jint RESULT_EXPIRED() { return get_static_field<"RESULT_EXPIRED", jint>(); }
	static jint RESULT_FILE_ROOT_UNREACHABLE() { return get_static_field<"RESULT_FILE_ROOT_UNREACHABLE", jint>(); }
	static jint RESULT_IO_ERROR() { return get_static_field<"RESULT_IO_ERROR", jint>(); }
	static jint RESULT_OUT_OF_STORAGE() { return get_static_field<"RESULT_OUT_OF_STORAGE", jint>(); }
	static jint RESULT_SERVICE_ID_NOT_DEFINED() { return get_static_field<"RESULT_SERVICE_ID_NOT_DEFINED", jint>(); }
	static jint RESULT_SUCCESSFUL() { return get_static_field<"RESULT_SUCCESSFUL", jint>(); }
	static jint STATUS_ACTIVELY_DOWNLOADING() { return get_static_field<"STATUS_ACTIVELY_DOWNLOADING", jint>(); }
	static jint STATUS_PENDING_DOWNLOAD() { return get_static_field<"STATUS_PENDING_DOWNLOAD", jint>(); }
	static jint STATUS_PENDING_DOWNLOAD_WINDOW() { return get_static_field<"STATUS_PENDING_DOWNLOAD_WINDOW", jint>(); }
	static jint STATUS_PENDING_REPAIR() { return get_static_field<"STATUS_PENDING_REPAIR", jint>(); }
	static jint STATUS_UNKNOWN() { return get_static_field<"STATUS_UNKNOWN", jint>(); }

	static jni::ref<android::telephony::MbmsDownloadSession> create(jni::ref<android::content::Context> context, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::telephony::mbms::MbmsDownloadSessionCallback> callback) { return call_static_method<"create", jni::ref<android::telephony::MbmsDownloadSession>>(context, executor, callback); }
	static jni::ref<android::telephony::MbmsDownloadSession> create(jni::ref<android::content::Context> context, jni::ref<java::util::concurrent::Executor> executor, jint subscriptionId, jni::ref<android::telephony::mbms::MbmsDownloadSessionCallback> callback) { return call_static_method<"create", jni::ref<android::telephony::MbmsDownloadSession>>(context, executor, subscriptionId, callback); }
	static jint getMaximumServiceAnnouncementSize() { return call_static_method<"getMaximumServiceAnnouncementSize", jint>(); }
	void requestUpdateFileServices(jni::ref<java::util::List> classList) { return call_method<"requestUpdateFileServices", void>(classList); }
	void addServiceAnnouncement(jni::ref<jni::array<jbyte>> contents) { return call_method<"addServiceAnnouncement", void>(contents); }
	void setTempFileRootDirectory(jni::ref<java::io::File> tempFileRootDirectory) { return call_method<"setTempFileRootDirectory", void>(tempFileRootDirectory); }
	jni::ref<java::io::File> getTempFileRootDirectory() { return call_method<"getTempFileRootDirectory", jni::ref<java::io::File>>(); }
	void download(jni::ref<android::telephony::mbms::DownloadRequest> request) { return call_method<"download", void>(request); }
	jni::ref<java::util::List> listPendingDownloads() { return call_method<"listPendingDownloads", jni::ref<java::util::List>>(); }
	void addStatusListener(jni::ref<android::telephony::mbms::DownloadRequest> request, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::telephony::mbms::DownloadStatusListener> listener) { return call_method<"addStatusListener", void>(request, executor, listener); }
	void removeStatusListener(jni::ref<android::telephony::mbms::DownloadRequest> request, jni::ref<android::telephony::mbms::DownloadStatusListener> listener) { return call_method<"removeStatusListener", void>(request, listener); }
	void addProgressListener(jni::ref<android::telephony::mbms::DownloadRequest> request, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::telephony::mbms::DownloadProgressListener> listener) { return call_method<"addProgressListener", void>(request, executor, listener); }
	void removeProgressListener(jni::ref<android::telephony::mbms::DownloadRequest> request, jni::ref<android::telephony::mbms::DownloadProgressListener> listener) { return call_method<"removeProgressListener", void>(request, listener); }
	void cancelDownload(jni::ref<android::telephony::mbms::DownloadRequest> downloadRequest) { return call_method<"cancelDownload", void>(downloadRequest); }
	void requestDownloadState(jni::ref<android::telephony::mbms::DownloadRequest> downloadRequest, jni::ref<android::telephony::mbms::FileInfo> fileInfo) { return call_method<"requestDownloadState", void>(downloadRequest, fileInfo); }
	void resetDownloadKnowledge(jni::ref<android::telephony::mbms::DownloadRequest> downloadRequest) { return call_method<"resetDownloadKnowledge", void>(downloadRequest); }
	void close() { return call_method<"close", void>(); }

protected:

	MbmsDownloadSession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELEPHONY_MBMSDOWNLOADSESSION
