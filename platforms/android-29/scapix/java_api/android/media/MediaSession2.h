// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/AutoCloseable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class MediaSession2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::MediaSession2>
{
	static constexpr fixed_string class_name = "android/media/MediaSession2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::AutoCloseable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/MediaSession2_ControllerInfo.h>
#include <scapix/java_api/android/media/Session2Command.h>
#include <scapix/java_api/android/media/Session2Token.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/media/MediaSession2_SessionCallback.h>
#include <scapix/java_api/android/media/MediaSession2_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::MediaSession2 : public jni::object_base<"android/media/MediaSession2",
	java::lang::Object,
	java::lang::AutoCloseable>
{
public:

	using SessionCallback = MediaSession2_SessionCallback;
	using ControllerInfo = MediaSession2_ControllerInfo;
	using Builder = MediaSession2_Builder;

	void close() { return call_method<"close", void>(); }
	jni::ref<java::lang::String> getId() { return call_method<"getId", jni::ref<java::lang::String>>(); }
	jni::ref<android::media::Session2Token> getToken() { return call_method<"getToken", jni::ref<android::media::Session2Token>>(); }
	void broadcastSessionCommand(jni::ref<android::media::Session2Command> command, jni::ref<android::os::Bundle> args) { return call_method<"broadcastSessionCommand", void>(command, args); }
	jni::ref<java::lang::Object> sendSessionCommand(jni::ref<android::media::MediaSession2_ControllerInfo> controller, jni::ref<android::media::Session2Command> command, jni::ref<android::os::Bundle> args) { return call_method<"sendSessionCommand", jni::ref<java::lang::Object>>(controller, command, args); }
	void cancelSessionCommand(jni::ref<android::media::MediaSession2_ControllerInfo> controller, jni::ref<java::lang::Object> token) { return call_method<"cancelSessionCommand", void>(controller, token); }
	void setPlaybackActive(jboolean playbackActive) { return call_method<"setPlaybackActive", void>(playbackActive); }
	jboolean isPlaybackActive() { return call_method<"isPlaybackActive", jboolean>(); }
	jni::ref<java::util::List> getConnectedControllers() { return call_method<"getConnectedControllers", jni::ref<java::util::List>>(); }

protected:

	MediaSession2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_MEDIASESSION2
