// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view { class TouchDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::TouchDelegate>
{
	static constexpr fixed_string class_name = "android/view/TouchDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE)
#define SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo_TouchDelegateInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::TouchDelegate : public jni::object_base<"android/view/TouchDelegate",
	java::lang::Object>
{
public:

	static jint ABOVE() { return get_static_field<"ABOVE", jint>(); }
	static jint BELOW() { return get_static_field<"BELOW", jint>(); }
	static jint TO_LEFT() { return get_static_field<"TO_LEFT", jint>(); }
	static jint TO_RIGHT() { return get_static_field<"TO_RIGHT", jint>(); }

	static jni::ref<android::view::TouchDelegate> new_object(jni::ref<android::graphics::Rect> bounds, jni::ref<android::view::View> delegateView) { return base_::new_object(bounds, delegateView); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onTouchExplorationHoverEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchExplorationHoverEvent", jboolean>(event); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo> getTouchDelegateInfo() { return call_method<"getTouchDelegateInfo", jni::ref<android::view::accessibility::AccessibilityNodeInfo_TouchDelegateInfo>>(); }

protected:

	TouchDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_TOUCHDELEGATE
