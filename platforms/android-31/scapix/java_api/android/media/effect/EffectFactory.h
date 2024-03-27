// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_FWD
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::media::effect { class EffectFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::media::effect::EffectFactory>
{
	static constexpr fixed_string class_name = "android/media/effect/EffectFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY)
#define SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/media/effect/Effect.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::media::effect::EffectFactory : public jni::object_base<"android/media/effect/EffectFactory",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> EFFECT_AUTOFIX() { return get_static_field<"EFFECT_AUTOFIX", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_BACKDROPPER() { return get_static_field<"EFFECT_BACKDROPPER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_BITMAPOVERLAY() { return get_static_field<"EFFECT_BITMAPOVERLAY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_BLACKWHITE() { return get_static_field<"EFFECT_BLACKWHITE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_BRIGHTNESS() { return get_static_field<"EFFECT_BRIGHTNESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_CONTRAST() { return get_static_field<"EFFECT_CONTRAST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_CROP() { return get_static_field<"EFFECT_CROP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_CROSSPROCESS() { return get_static_field<"EFFECT_CROSSPROCESS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_DOCUMENTARY() { return get_static_field<"EFFECT_DOCUMENTARY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_DUOTONE() { return get_static_field<"EFFECT_DUOTONE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_FILLLIGHT() { return get_static_field<"EFFECT_FILLLIGHT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_FISHEYE() { return get_static_field<"EFFECT_FISHEYE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_FLIP() { return get_static_field<"EFFECT_FLIP", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_GRAIN() { return get_static_field<"EFFECT_GRAIN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_GRAYSCALE() { return get_static_field<"EFFECT_GRAYSCALE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_LOMOISH() { return get_static_field<"EFFECT_LOMOISH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_NEGATIVE() { return get_static_field<"EFFECT_NEGATIVE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_POSTERIZE() { return get_static_field<"EFFECT_POSTERIZE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_REDEYE() { return get_static_field<"EFFECT_REDEYE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_ROTATE() { return get_static_field<"EFFECT_ROTATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_SATURATE() { return get_static_field<"EFFECT_SATURATE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_SEPIA() { return get_static_field<"EFFECT_SEPIA", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_SHARPEN() { return get_static_field<"EFFECT_SHARPEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_STRAIGHTEN() { return get_static_field<"EFFECT_STRAIGHTEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_TEMPERATURE() { return get_static_field<"EFFECT_TEMPERATURE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_TINT() { return get_static_field<"EFFECT_TINT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EFFECT_VIGNETTE() { return get_static_field<"EFFECT_VIGNETTE", jni::ref<java::lang::String>>(); }

	jni::ref<android::media::effect::Effect> createEffect(jni::ref<java::lang::String> effectName) { return call_method<"createEffect", jni::ref<android::media::effect::Effect>>(effectName); }
	static jboolean isEffectSupported(jni::ref<java::lang::String> effectName) { return call_static_method<"isEffectSupported", jboolean>(effectName); }

protected:

	EffectFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_MEDIA_EFFECT_EFFECTFACTORY
