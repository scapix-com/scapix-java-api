// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::effect { class EffectUpdateListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::effect::EffectUpdateListener>
{
	static constexpr fixed_string class_name = "android/media/effect/EffectUpdateListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/effect/Effect.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::effect::EffectUpdateListener : public jni::object_base<"android/media/effect/EffectUpdateListener",
	java::lang::Object>
{
public:

	void onEffectUpdated(jni::ref<android::media::effect::Effect> p1, jni::ref<java::lang::Object> p2) { return call_method<"onEffectUpdated", void>(p1, p2); }

protected:

	EffectUpdateListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTUPDATELISTENER
