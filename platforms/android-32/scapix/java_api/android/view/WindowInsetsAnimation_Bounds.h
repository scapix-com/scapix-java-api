// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class WindowInsetsAnimation_Bounds; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::WindowInsetsAnimation_Bounds>
{
	static constexpr fixed_string class_name = "android/view/WindowInsetsAnimation$Bounds";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS)
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Insets.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::WindowInsetsAnimation_Bounds : public jni::object_base<"android/view/WindowInsetsAnimation$Bounds",
	java::lang::Object>
{
public:

	static jni::ref<android::view::WindowInsetsAnimation_Bounds> new_object(jni::ref<android::graphics::Insets> lowerBound, jni::ref<android::graphics::Insets> upperBound) { return base_::new_object(lowerBound, upperBound); }
	jni::ref<android::graphics::Insets> getLowerBound() { return call_method<"getLowerBound", jni::ref<android::graphics::Insets>>(); }
	jni::ref<android::graphics::Insets> getUpperBound() { return call_method<"getUpperBound", jni::ref<android::graphics::Insets>>(); }
	jni::ref<android::view::WindowInsetsAnimation_Bounds> inset(jni::ref<android::graphics::Insets> insets) { return call_method<"inset", jni::ref<android::view::WindowInsetsAnimation_Bounds>>(insets); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	WindowInsetsAnimation_Bounds(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETSANIMATION_BOUNDS