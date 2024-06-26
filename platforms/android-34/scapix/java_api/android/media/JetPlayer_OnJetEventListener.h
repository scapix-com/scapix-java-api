// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class JetPlayer_OnJetEventListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::JetPlayer_OnJetEventListener>
{
	static constexpr fixed_string class_name = "android/media/JetPlayer$OnJetEventListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/JetPlayer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::JetPlayer_OnJetEventListener : public jni::object_base<"android/media/JetPlayer$OnJetEventListener",
	java::lang::Object>
{
public:

	void onJetEvent(jni::ref<android::media::JetPlayer> p1, jshort p2, jbyte p3, jbyte p4, jbyte p5, jbyte p6) { return call_method<"onJetEvent", void>(p1, p2, p3, p4, p5, p6); }
	void onJetUserIdUpdate(jni::ref<android::media::JetPlayer> p1, jint p2, jint p3) { return call_method<"onJetUserIdUpdate", void>(p1, p2, p3); }
	void onJetNumQueuedSegmentUpdate(jni::ref<android::media::JetPlayer> p1, jint p2) { return call_method<"onJetNumQueuedSegmentUpdate", void>(p1, p2); }
	void onJetPauseUpdate(jni::ref<android::media::JetPlayer> p1, jint p2) { return call_method<"onJetPauseUpdate", void>(p1, p2); }

protected:

	JetPlayer_OnJetEventListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_JETPLAYER_ONJETEVENTLISTENER
