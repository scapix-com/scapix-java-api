// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media { class SoundPool; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::SoundPool>
{
	static constexpr fixed_string class_name = "android/media/SoundPool";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/content/res/AssetFileDescriptor.h>
#include <scapix/java_api/android/media/SoundPool_OnLoadCompleteListener.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/android/media/SoundPool_Builder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::SoundPool : public jni::object_base<"android/media/SoundPool",
	java::lang::Object>
{
public:

	using OnLoadCompleteListener = SoundPool_OnLoadCompleteListener;
	using Builder = SoundPool_Builder;

	static jni::ref<android::media::SoundPool> new_object(jint maxStreams, jint streamType, jint srcQuality) { return base_::new_object(maxStreams, streamType, srcQuality); }
	jint load(jni::ref<java::lang::String> path, jint priority) { return call_method<"load", jint>(path, priority); }
	jint load(jni::ref<android::content::Context> context, jint resId, jint priority) { return call_method<"load", jint>(context, resId, priority); }
	jint load(jni::ref<android::content::res::AssetFileDescriptor> afd, jint priority) { return call_method<"load", jint>(afd, priority); }
	jint load(jni::ref<java::io::FileDescriptor> fd, jlong offset, jlong p3, jint length) { return call_method<"load", jint>(fd, offset, p3, length); }
	jboolean unload(jint soundID) { return call_method<"unload", jboolean>(soundID); }
	jint play(jint soundID, jfloat leftVolume, jfloat rightVolume, jint priority, jint loop, jfloat rate) { return call_method<"play", jint>(soundID, leftVolume, rightVolume, priority, loop, rate); }
	void pause(jint streamID) { return call_method<"pause", void>(streamID); }
	void resume(jint streamID) { return call_method<"resume", void>(streamID); }
	void autoPause() { return call_method<"autoPause", void>(); }
	void autoResume() { return call_method<"autoResume", void>(); }
	void stop(jint streamID) { return call_method<"stop", void>(streamID); }
	void setVolume(jint streamID, jfloat leftVolume, jfloat rightVolume) { return call_method<"setVolume", void>(streamID, leftVolume, rightVolume); }
	void setPriority(jint streamID, jint priority) { return call_method<"setPriority", void>(streamID, priority); }
	void setLoop(jint streamID, jint loop) { return call_method<"setLoop", void>(streamID, loop); }
	void setRate(jint streamID, jfloat rate) { return call_method<"setRate", void>(streamID, rate); }
	void setOnLoadCompleteListener(jni::ref<android::media::SoundPool_OnLoadCompleteListener> listener) { return call_method<"setOnLoadCompleteListener", void>(listener); }
	void release() { return call_method<"release", void>(); }

protected:

	SoundPool(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_SOUNDPOOL
