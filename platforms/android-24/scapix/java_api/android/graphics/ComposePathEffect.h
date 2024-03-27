// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/PathEffect.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class ComposePathEffect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::ComposePathEffect>
{
	static constexpr fixed_string class_name = "android/graphics/ComposePathEffect";
	using base_classes = std::tuple<scapix::java_api::android::graphics::PathEffect>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::ComposePathEffect : public jni::object_base<"android/graphics/ComposePathEffect",
	android::graphics::PathEffect>
{
public:

	static jni::ref<android::graphics::ComposePathEffect> new_object(jni::ref<android::graphics::PathEffect> outerpe, jni::ref<android::graphics::PathEffect> innerpe) { return base_::new_object(outerpe, innerpe); }

protected:

	ComposePathEffect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_COMPOSEPATHEFFECT