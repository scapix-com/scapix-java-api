// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class RemoteConnection_VideoProvider_Callback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::RemoteConnection_VideoProvider_Callback>
{
	static constexpr fixed_string class_name = "android/telecom/RemoteConnection$VideoProvider$Callback";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/telecom/RemoteConnection_VideoProvider.h>
#include <scapix/java_api/android/telecom/VideoProfile.h>
#include <scapix/java_api/android/telecom/VideoProfile_CameraCapabilities.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::RemoteConnection_VideoProvider_Callback : public jni::object_base<"android/telecom/RemoteConnection$VideoProvider$Callback",
	java::lang::Object>
{
public:

	static jni::ref<android::telecom::RemoteConnection_VideoProvider_Callback> new_object() { return base_::new_object(); }
	void onSessionModifyRequestReceived(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jni::ref<android::telecom::VideoProfile> videoProfile) { return call_method<"onSessionModifyRequestReceived", void>(videoProvider, videoProfile); }
	void onSessionModifyResponseReceived(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jint status, jni::ref<android::telecom::VideoProfile> requestedProfile, jni::ref<android::telecom::VideoProfile> responseProfile) { return call_method<"onSessionModifyResponseReceived", void>(videoProvider, status, requestedProfile, responseProfile); }
	void onCallSessionEvent(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jint event) { return call_method<"onCallSessionEvent", void>(videoProvider, event); }
	void onPeerDimensionsChanged(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jint width, jint height) { return call_method<"onPeerDimensionsChanged", void>(videoProvider, width, height); }
	void onCallDataUsageChanged(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jlong dataUsage) { return call_method<"onCallDataUsageChanged", void>(videoProvider, dataUsage); }
	void onCameraCapabilitiesChanged(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jni::ref<android::telecom::VideoProfile_CameraCapabilities> cameraCapabilities) { return call_method<"onCameraCapabilitiesChanged", void>(videoProvider, cameraCapabilities); }
	void onVideoQualityChanged(jni::ref<android::telecom::RemoteConnection_VideoProvider> videoProvider, jint videoQuality) { return call_method<"onVideoQualityChanged", void>(videoProvider, videoQuality); }

protected:

	RemoteConnection_VideoProvider_Callback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_REMOTECONNECTION_VIDEOPROVIDER_CALLBACK
