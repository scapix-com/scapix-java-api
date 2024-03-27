// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT_FWD
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::graphics { class PathEffect; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::graphics::PathEffect>
{
	static constexpr fixed_string class_name = "android/graphics/PathEffect";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT)
#define SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::graphics::PathEffect : public jni::object_base<"android/graphics/PathEffect",
	java::lang::Object>
{
public:

	static jni::ref<android::graphics::PathEffect> new_object() { return base_::new_object(); }

protected:

	PathEffect(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_GRAPHICS_PATHEFFECT
