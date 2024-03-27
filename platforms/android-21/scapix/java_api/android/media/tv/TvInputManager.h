// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::tv { class TvInputManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::tv::TvInputManager>
{
	static constexpr fixed_string class_name = "android/media/tv/TvInputManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/tv/TvContentRating.h>
#include <scapix/java_api/android/media/tv/TvInputInfo.h>
#include <scapix/java_api/android/media/tv/TvInputManager_TvInputCallback.h>
#include <scapix/java_api/android/os/Handler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::tv::TvInputManager : public jni::object_base<"android/media/tv/TvInputManager",
	java::lang::Object>
{
public:

	using TvInputCallback = TvInputManager_TvInputCallback;

	static jni::ref<java::lang::String> ACTION_BLOCKED_RATINGS_CHANGED() { return get_static_field<"ACTION_BLOCKED_RATINGS_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED() { return get_static_field<"ACTION_PARENTAL_CONTROLS_ENABLED_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_QUERY_CONTENT_RATING_SYSTEMS() { return get_static_field<"ACTION_QUERY_CONTENT_RATING_SYSTEMS", jni::ref<java::lang::String>>(); }
	static jint INPUT_STATE_CONNECTED() { return get_static_field<"INPUT_STATE_CONNECTED", jint>(); }
	static jint INPUT_STATE_CONNECTED_STANDBY() { return get_static_field<"INPUT_STATE_CONNECTED_STANDBY", jint>(); }
	static jint INPUT_STATE_DISCONNECTED() { return get_static_field<"INPUT_STATE_DISCONNECTED", jint>(); }
	static jni::ref<java::lang::String> META_DATA_CONTENT_RATING_SYSTEMS() { return get_static_field<"META_DATA_CONTENT_RATING_SYSTEMS", jni::ref<java::lang::String>>(); }
	static jint VIDEO_UNAVAILABLE_REASON_BUFFERING() { return get_static_field<"VIDEO_UNAVAILABLE_REASON_BUFFERING", jint>(); }
	static jint VIDEO_UNAVAILABLE_REASON_TUNING() { return get_static_field<"VIDEO_UNAVAILABLE_REASON_TUNING", jint>(); }
	static jint VIDEO_UNAVAILABLE_REASON_UNKNOWN() { return get_static_field<"VIDEO_UNAVAILABLE_REASON_UNKNOWN", jint>(); }
	static jint VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL() { return get_static_field<"VIDEO_UNAVAILABLE_REASON_WEAK_SIGNAL", jint>(); }

	jni::ref<java::util::List> getTvInputList() { return call_method<"getTvInputList", jni::ref<java::util::List>>(); }
	jni::ref<android::media::tv::TvInputInfo> getTvInputInfo(jni::ref<java::lang::String> inputId) { return call_method<"getTvInputInfo", jni::ref<android::media::tv::TvInputInfo>>(inputId); }
	jint getInputState(jni::ref<java::lang::String> inputId) { return call_method<"getInputState", jint>(inputId); }
	void registerCallback(jni::ref<android::media::tv::TvInputManager_TvInputCallback> callback, jni::ref<android::os::Handler> handler) { return call_method<"registerCallback", void>(callback, handler); }
	void unregisterCallback(jni::ref<android::media::tv::TvInputManager_TvInputCallback> callback) { return call_method<"unregisterCallback", void>(callback); }
	jboolean isParentalControlsEnabled() { return call_method<"isParentalControlsEnabled", jboolean>(); }
	jboolean isRatingBlocked(jni::ref<android::media::tv::TvContentRating> rating) { return call_method<"isRatingBlocked", jboolean>(rating); }

protected:

	TvInputManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_TV_TVINPUTMANAGER