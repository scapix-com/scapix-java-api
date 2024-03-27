// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_FWD
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::drm { class DrmManagerClient; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::drm::DrmManagerClient>
{
	static constexpr fixed_string class_name = "android/drm/DrmManagerClient";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT)
#define SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/ContentValues.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/drm/DrmConvertedStatus.h>
#include <scapix/java_api/android/drm/DrmInfo.h>
#include <scapix/java_api/android/drm/DrmInfoRequest.h>
#include <scapix/java_api/android/drm/DrmManagerClient_OnErrorListener.h>
#include <scapix/java_api/android/drm/DrmManagerClient_OnEventListener.h>
#include <scapix/java_api/android/drm/DrmManagerClient_OnInfoListener.h>
#include <scapix/java_api/android/drm/DrmRights.h>
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Collection.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::drm::DrmManagerClient : public jni::object_base<"android/drm/DrmManagerClient",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using OnInfoListener = DrmManagerClient_OnInfoListener;
	using OnEventListener = DrmManagerClient_OnEventListener;
	using OnErrorListener = DrmManagerClient_OnErrorListener;

	static jint ERROR_NONE() { return get_static_field<"ERROR_NONE", jint>(); }
	static jint ERROR_UNKNOWN() { return get_static_field<"ERROR_UNKNOWN", jint>(); }

	static jni::ref<android::drm::DrmManagerClient> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void close() { return call_method<"close", void>(); }
	void release() { return call_method<"release", void>(); }
	void setOnInfoListener(jni::ref<android::drm::DrmManagerClient_OnInfoListener> infoListener) { return call_method<"setOnInfoListener", void>(infoListener); }
	void setOnEventListener(jni::ref<android::drm::DrmManagerClient_OnEventListener> eventListener) { return call_method<"setOnEventListener", void>(eventListener); }
	void setOnErrorListener(jni::ref<android::drm::DrmManagerClient_OnErrorListener> errorListener) { return call_method<"setOnErrorListener", void>(errorListener); }
	jni::ref<jni::array<java::lang::String>> getAvailableDrmEngines() { return call_method<"getAvailableDrmEngines", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<java::util::Collection> getAvailableDrmSupportInfo() { return call_method<"getAvailableDrmSupportInfo", jni::ref<java::util::Collection>>(); }
	jni::ref<android::content::ContentValues> getConstraints(jni::ref<java::lang::String> path, jint action) { return call_method<"getConstraints", jni::ref<android::content::ContentValues>>(path, action); }
	jni::ref<android::content::ContentValues> getMetadata(jni::ref<java::lang::String> path) { return call_method<"getMetadata", jni::ref<android::content::ContentValues>>(path); }
	jni::ref<android::content::ContentValues> getConstraints(jni::ref<android::net::Uri> uri, jint action) { return call_method<"getConstraints", jni::ref<android::content::ContentValues>>(uri, action); }
	jni::ref<android::content::ContentValues> getMetadata(jni::ref<android::net::Uri> uri) { return call_method<"getMetadata", jni::ref<android::content::ContentValues>>(uri); }
	jint saveRights(jni::ref<android::drm::DrmRights> drmRights, jni::ref<java::lang::String> rightsPath, jni::ref<java::lang::String> contentPath) { return call_method<"saveRights", jint>(drmRights, rightsPath, contentPath); }
	jboolean canHandle(jni::ref<java::lang::String> path, jni::ref<java::lang::String> mimeType) { return call_method<"canHandle", jboolean>(path, mimeType); }
	jboolean canHandle(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeType) { return call_method<"canHandle", jboolean>(uri, mimeType); }
	jint processDrmInfo(jni::ref<android::drm::DrmInfo> drmInfo) { return call_method<"processDrmInfo", jint>(drmInfo); }
	jni::ref<android::drm::DrmInfo> acquireDrmInfo(jni::ref<android::drm::DrmInfoRequest> drmInfoRequest) { return call_method<"acquireDrmInfo", jni::ref<android::drm::DrmInfo>>(drmInfoRequest); }
	jint acquireRights(jni::ref<android::drm::DrmInfoRequest> drmInfoRequest) { return call_method<"acquireRights", jint>(drmInfoRequest); }
	jint getDrmObjectType(jni::ref<java::lang::String> path, jni::ref<java::lang::String> mimeType) { return call_method<"getDrmObjectType", jint>(path, mimeType); }
	jint getDrmObjectType(jni::ref<android::net::Uri> uri, jni::ref<java::lang::String> mimeType) { return call_method<"getDrmObjectType", jint>(uri, mimeType); }
	jni::ref<java::lang::String> getOriginalMimeType(jni::ref<java::lang::String> path) { return call_method<"getOriginalMimeType", jni::ref<java::lang::String>>(path); }
	jni::ref<java::lang::String> getOriginalMimeType(jni::ref<android::net::Uri> uri) { return call_method<"getOriginalMimeType", jni::ref<java::lang::String>>(uri); }
	jint checkRightsStatus(jni::ref<java::lang::String> path) { return call_method<"checkRightsStatus", jint>(path); }
	jint checkRightsStatus(jni::ref<android::net::Uri> uri) { return call_method<"checkRightsStatus", jint>(uri); }
	jint checkRightsStatus(jni::ref<java::lang::String> path, jint action) { return call_method<"checkRightsStatus", jint>(path, action); }
	jint checkRightsStatus(jni::ref<android::net::Uri> uri, jint action) { return call_method<"checkRightsStatus", jint>(uri, action); }
	jint removeRights(jni::ref<java::lang::String> path) { return call_method<"removeRights", jint>(path); }
	jint removeRights(jni::ref<android::net::Uri> uri) { return call_method<"removeRights", jint>(uri); }
	jint removeAllRights() { return call_method<"removeAllRights", jint>(); }
	jint openConvertSession(jni::ref<java::lang::String> mimeType) { return call_method<"openConvertSession", jint>(mimeType); }
	jni::ref<android::drm::DrmConvertedStatus> convertData(jint convertId, jni::ref<jni::array<jbyte>> inputData) { return call_method<"convertData", jni::ref<android::drm::DrmConvertedStatus>>(convertId, inputData); }
	jni::ref<android::drm::DrmConvertedStatus> closeConvertSession(jint convertId) { return call_method<"closeConvertSession", jni::ref<android::drm::DrmConvertedStatus>>(convertId); }

protected:

	DrmManagerClient(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_DRM_DRMMANAGERCLIENT