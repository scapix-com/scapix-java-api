// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/graphics/PathEffect.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class CornerPathEffect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::CornerPathEffect>
{
	static constexpr fixed_string class_name = "android/graphics/CornerPathEffect";
	using base_classes = std::tuple<scapix::java_api::android::graphics::PathEffect>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::CornerPathEffect : public jni::object_base<"android/graphics/CornerPathEffect",
	android::graphics::PathEffect>
{
public:

	static jni::ref<android::graphics::CornerPathEffect> new_object(jfloat radius) { return base_::new_object(radius); }

protected:

	CornerPathEffect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_CORNERPATHEFFECT