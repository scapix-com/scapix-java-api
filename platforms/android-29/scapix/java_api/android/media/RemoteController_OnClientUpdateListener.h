// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RemoteController_OnClientUpdateListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RemoteController_OnClientUpdateListener>
{
	static constexpr fixed_string class_name = "android/media/RemoteController$OnClientUpdateListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/RemoteController_MetadataEditor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RemoteController_OnClientUpdateListener : public jni::object_base<"android/media/RemoteController$OnClientUpdateListener",
	java::lang::Object>
{
public:

	void onClientChange(jboolean p1) { return call_method<"onClientChange", void>(p1); }
	void onClientPlaybackStateUpdate(jint p1) { return call_method<"onClientPlaybackStateUpdate", void>(p1); }
	void onClientPlaybackStateUpdate(jint p1, jlong p2, jlong p3, jfloat p4) { return call_method<"onClientPlaybackStateUpdate", void>(p1, p2, p3, p4); }
	void onClientTransportControlUpdate(jint p1) { return call_method<"onClientTransportControlUpdate", void>(p1); }
	void onClientMetadataUpdate(jni::ref<android::media::RemoteController_MetadataEditor> p1) { return call_method<"onClientMetadataUpdate", void>(p1); }

protected:

	RemoteController_OnClientUpdateListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLLER_ONCLIENTUPDATELISTENER
