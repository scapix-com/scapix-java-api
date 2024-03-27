// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER_FWD
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::telecom { class Connection_VideoProvider; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::telecom::Connection_VideoProvider>
{
	static constexpr fixed_string class_name = "android/telecom/Connection$VideoProvider";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER)
#define SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/net/Uri.h>
#include <scapix/java_api/android/telecom/VideoProfile.h>
#include <scapix/java_api/android/telecom/VideoProfile_CameraCapabilities.h>
#include <scapix/java_api/android/view/Surface.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::telecom::Connection_VideoProvider : public jni::object_base<"android/telecom/Connection$VideoProvider",
	java::lang::Object>
{
public:

	static jint SESSION_EVENT_CAMERA_FAILURE() { return get_static_field<"SESSION_EVENT_CAMERA_FAILURE", jint>(); }
	static jint SESSION_EVENT_CAMERA_PERMISSION_ERROR() { return get_static_field<"SESSION_EVENT_CAMERA_PERMISSION_ERROR", jint>(); }
	static jint SESSION_EVENT_CAMERA_READY() { return get_static_field<"SESSION_EVENT_CAMERA_READY", jint>(); }
	static jint SESSION_EVENT_RX_PAUSE() { return get_static_field<"SESSION_EVENT_RX_PAUSE", jint>(); }
	static jint SESSION_EVENT_RX_RESUME() { return get_static_field<"SESSION_EVENT_RX_RESUME", jint>(); }
	static jint SESSION_EVENT_TX_START() { return get_static_field<"SESSION_EVENT_TX_START", jint>(); }
	static jint SESSION_EVENT_TX_STOP() { return get_static_field<"SESSION_EVENT_TX_STOP", jint>(); }
	static jint SESSION_MODIFY_REQUEST_FAIL() { return get_static_field<"SESSION_MODIFY_REQUEST_FAIL", jint>(); }
	static jint SESSION_MODIFY_REQUEST_INVALID() { return get_static_field<"SESSION_MODIFY_REQUEST_INVALID", jint>(); }
	static jint SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE() { return get_static_field<"SESSION_MODIFY_REQUEST_REJECTED_BY_REMOTE", jint>(); }
	static jint SESSION_MODIFY_REQUEST_SUCCESS() { return get_static_field<"SESSION_MODIFY_REQUEST_SUCCESS", jint>(); }
	static jint SESSION_MODIFY_REQUEST_TIMED_OUT() { return get_static_field<"SESSION_MODIFY_REQUEST_TIMED_OUT", jint>(); }

	static jni::ref<android::telecom::Connection_VideoProvider> new_object() { return base_::new_object(); }
	void onSetCamera(jni::ref<java::lang::String> p1) { return call_method<"onSetCamera", void>(p1); }
	void onSetPreviewSurface(jni::ref<android::view::Surface> p1) { return call_method<"onSetPreviewSurface", void>(p1); }
	void onSetDisplaySurface(jni::ref<android::view::Surface> p1) { return call_method<"onSetDisplaySurface", void>(p1); }
	void onSetDeviceOrientation(jint p1) { return call_method<"onSetDeviceOrientation", void>(p1); }
	void onSetZoom(jfloat p1) { return call_method<"onSetZoom", void>(p1); }
	void onSendSessionModifyRequest(jni::ref<android::telecom::VideoProfile> p1, jni::ref<android::telecom::VideoProfile> p2) { return call_method<"onSendSessionModifyRequest", void>(p1, p2); }
	void onSendSessionModifyResponse(jni::ref<android::telecom::VideoProfile> p1) { return call_method<"onSendSessionModifyResponse", void>(p1); }
	void onRequestCameraCapabilities() { return call_method<"onRequestCameraCapabilities", void>(); }
	void onRequestConnectionDataUsage() { return call_method<"onRequestConnectionDataUsage", void>(); }
	void onSetPauseImage(jni::ref<android::net::Uri> p1) { return call_method<"onSetPauseImage", void>(p1); }
	void receiveSessionModifyRequest(jni::ref<android::telecom::VideoProfile> videoProfile) { return call_method<"receiveSessionModifyRequest", void>(videoProfile); }
	void receiveSessionModifyResponse(jint status, jni::ref<android::telecom::VideoProfile> requestedProfile, jni::ref<android::telecom::VideoProfile> responseProfile) { return call_method<"receiveSessionModifyResponse", void>(status, requestedProfile, responseProfile); }
	void handleCallSessionEvent(jint event) { return call_method<"handleCallSessionEvent", void>(event); }
	void changePeerDimensions(jint width, jint height) { return call_method<"changePeerDimensions", void>(width, height); }
	void setCallDataUsage(jlong dataUsage) { return call_method<"setCallDataUsage", void>(dataUsage); }
	void changeCameraCapabilities(jni::ref<android::telecom::VideoProfile_CameraCapabilities> cameraCapabilities) { return call_method<"changeCameraCapabilities", void>(cameraCapabilities); }
	void changeVideoQuality(jint videoQuality) { return call_method<"changeVideoQuality", void>(videoQuality); }

protected:

	Connection_VideoProvider(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TELECOM_CONNECTION_VIDEOPROVIDER