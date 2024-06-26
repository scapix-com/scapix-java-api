// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class RemoteControlClient_OnMetadataUpdateListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::RemoteControlClient_OnMetadataUpdateListener>
{
	static constexpr fixed_string class_name = "android/media/RemoteControlClient$OnMetadataUpdateListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::RemoteControlClient_OnMetadataUpdateListener : public jni::object_base<"android/media/RemoteControlClient$OnMetadataUpdateListener",
	java::lang::Object>
{
public:

	void onMetadataUpdate(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"onMetadataUpdate", void>(p1, p2); }

protected:

	RemoteControlClient_OnMetadataUpdateListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_REMOTECONTROLCLIENT_ONMETADATAUPDATELISTENER
