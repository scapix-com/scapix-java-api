// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::effect { class EffectContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::effect::EffectContext>
{
	static constexpr fixed_string class_name = "android/media/effect/EffectContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/effect/EffectFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::effect::EffectContext : public jni::object_base<"android/media/effect/EffectContext",
	java::lang::Object>
{
public:

	static jni::ref<android::media::effect::EffectContext> createWithCurrentGlContext() { return call_static_method<"createWithCurrentGlContext", jni::ref<android::media::effect::EffectContext>>(); }
	jni::ref<android::media::effect::EffectFactory> getFactory() { return call_method<"getFactory", jni::ref<android::media::effect::EffectFactory>>(); }
	void release() { return call_method<"release", void>(); }

protected:

	EffectContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTCONTEXT
