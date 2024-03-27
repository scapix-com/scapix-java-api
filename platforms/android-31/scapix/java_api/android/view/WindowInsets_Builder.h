// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class WindowInsets_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::WindowInsets_Builder>
{
	static constexpr fixed_string class_name = "android/view/WindowInsets$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Insets.h>
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/view/DisplayCutout.h>
#include <scapix/java_api/android/view/RoundedCorner.h>
#include <scapix/java_api/android/view/WindowInsets.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::WindowInsets_Builder : public jni::object_base<"android/view/WindowInsets$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::view::WindowInsets_Builder> new_object() { return base_::new_object(); }
	static jni::ref<android::view::WindowInsets_Builder> new_object(jni::ref<android::view::WindowInsets> insets) { return base_::new_object(insets); }
	jni::ref<android::view::WindowInsets_Builder> setSystemWindowInsets(jni::ref<android::graphics::Insets> systemWindowInsets) { return call_method<"setSystemWindowInsets", jni::ref<android::view::WindowInsets_Builder>>(systemWindowInsets); }
	jni::ref<android::view::WindowInsets_Builder> setSystemGestureInsets(jni::ref<android::graphics::Insets> insets) { return call_method<"setSystemGestureInsets", jni::ref<android::view::WindowInsets_Builder>>(insets); }
	jni::ref<android::view::WindowInsets_Builder> setMandatorySystemGestureInsets(jni::ref<android::graphics::Insets> insets) { return call_method<"setMandatorySystemGestureInsets", jni::ref<android::view::WindowInsets_Builder>>(insets); }
	jni::ref<android::view::WindowInsets_Builder> setTappableElementInsets(jni::ref<android::graphics::Insets> insets) { return call_method<"setTappableElementInsets", jni::ref<android::view::WindowInsets_Builder>>(insets); }
	jni::ref<android::view::WindowInsets_Builder> setInsets(jint typeMask, jni::ref<android::graphics::Insets> insets) { return call_method<"setInsets", jni::ref<android::view::WindowInsets_Builder>>(typeMask, insets); }
	jni::ref<android::view::WindowInsets_Builder> setInsetsIgnoringVisibility(jint typeMask, jni::ref<android::graphics::Insets> insets) { return call_method<"setInsetsIgnoringVisibility", jni::ref<android::view::WindowInsets_Builder>>(typeMask, insets); }
	jni::ref<android::view::WindowInsets_Builder> setVisible(jint typeMask, jboolean visible) { return call_method<"setVisible", jni::ref<android::view::WindowInsets_Builder>>(typeMask, visible); }
	jni::ref<android::view::WindowInsets_Builder> setStableInsets(jni::ref<android::graphics::Insets> stableInsets) { return call_method<"setStableInsets", jni::ref<android::view::WindowInsets_Builder>>(stableInsets); }
	jni::ref<android::view::WindowInsets_Builder> setDisplayCutout(jni::ref<android::view::DisplayCutout> displayCutout) { return call_method<"setDisplayCutout", jni::ref<android::view::WindowInsets_Builder>>(displayCutout); }
	jni::ref<android::view::WindowInsets_Builder> setRoundedCorner(jint position, jni::ref<android::view::RoundedCorner> roundedCorner) { return call_method<"setRoundedCorner", jni::ref<android::view::WindowInsets_Builder>>(position, roundedCorner); }
	jni::ref<android::view::WindowInsets_Builder> setPrivacyIndicatorBounds(jni::ref<android::graphics::Rect> bounds) { return call_method<"setPrivacyIndicatorBounds", jni::ref<android::view::WindowInsets_Builder>>(bounds); }
	jni::ref<android::view::WindowInsets> build() { return call_method<"build", jni::ref<android::view::WindowInsets>>(); }

protected:

	WindowInsets_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_WINDOWINSETS_BUILDER
