// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class JetPlayer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::JetPlayer>
{
	static constexpr fixed_string class_name = "android/media/JetPlayer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/media/JetPlayer_OnJetEventListener.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::JetPlayer : public jni::object_base<"android/media/JetPlayer",
	java::lang::Object>
{
public:

	using OnJetEventListener = JetPlayer_OnJetEventListener;

	static jni::ref<android::media::JetPlayer> getJetPlayer() { return call_static_method<"getJetPlayer", jni::ref<android::media::JetPlayer>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	void release() { return call_method<"release", void>(); }
	static jint getMaxTracks() { return call_static_method<"getMaxTracks", jint>(); }
	jboolean loadJetFile(jni::ref<java::lang::String> path) { return call_method<"loadJetFile", jboolean>(path); }
	jboolean loadJetFile(jni::ref<android::content::res::AssetFileDescriptor> afd) { return call_method<"loadJetFile", jboolean>(afd); }
	jboolean closeJetFile() { return call_method<"closeJetFile", jboolean>(); }
	jboolean play() { return call_method<"play", jboolean>(); }
	jboolean pause() { return call_method<"pause", jboolean>(); }
	jboolean queueJetSegment(jint segmentNum, jint libNum, jint repeatCount, jint transpose, jint muteFlags, jbyte userID) { return call_method<"queueJetSegment", jboolean>(segmentNum, libNum, repeatCount, transpose, muteFlags, userID); }
	jboolean queueJetSegmentMuteArray(jint segmentNum, jint libNum, jint repeatCount, jint transpose, jni::ref<jni::array<jboolean>> muteArray, jbyte userID) { return call_method<"queueJetSegmentMuteArray", jboolean>(segmentNum, libNum, repeatCount, transpose, muteArray, userID); }
	jboolean setMuteFlags(jint muteFlags, jboolean sync) { return call_method<"setMuteFlags", jboolean>(muteFlags, sync); }
	jboolean setMuteArray(jni::ref<jni::array<jboolean>> muteArray, jboolean sync) { return call_method<"setMuteArray", jboolean>(muteArray, sync); }
	jboolean setMuteFlag(jint trackId, jboolean muteFlag, jboolean sync) { return call_method<"setMuteFlag", jboolean>(trackId, muteFlag, sync); }
	jboolean triggerClip(jint clipId) { return call_method<"triggerClip", jboolean>(clipId); }
	jboolean clearQueue() { return call_method<"clearQueue", jboolean>(); }
	void setEventListener(jni::ref<android::media::JetPlayer_OnJetEventListener> listener) { return call_method<"setEventListener", void>(listener); }
	void setEventListener(jni::ref<android::media::JetPlayer_OnJetEventListener> listener, jni::ref<android::os::Handler> handler) { return call_method<"setEventListener", void>(listener, handler); }

protected:

	JetPlayer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER
