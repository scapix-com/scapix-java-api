// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/AbsSpinner.h>
#include <scapix/java_api/android/view/GestureDetector_OnGestureListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Gallery; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Gallery>
{
	static constexpr fixed_string class_name = "android/widget/Gallery";
	using base_classes = std::tuple<scapix::java_api::android::widget::AbsSpinner, scapix::java_api::android::view::GestureDetector_OnGestureListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup_LayoutParams.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/android/widget/Gallery_LayoutParams.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Gallery : public jni::object_base<"android/widget/Gallery",
	android::widget::AbsSpinner,
	android::view::GestureDetector_OnGestureListener>
{
public:

	using LayoutParams = Gallery_LayoutParams;

	static jni::ref<android::widget::Gallery> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::Gallery> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::Gallery> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::Gallery> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	void setCallbackDuringFling(jboolean shouldCallback) { return call_method<"setCallbackDuringFling", void>(shouldCallback); }
	void setAnimationDuration(jint animationDurationMillis) { return call_method<"setAnimationDuration", void>(animationDurationMillis); }
	void setSpacing(jint spacing) { return call_method<"setSpacing", void>(spacing); }
	void setUnselectedAlpha(jfloat unselectedAlpha) { return call_method<"setUnselectedAlpha", void>(unselectedAlpha); }
	jni::ref<android::view::ViewGroup_LayoutParams> generateLayoutParams(jni::ref<android::util::AttributeSet> attrs) { return call_method<"generateLayoutParams", jni::ref<android::view::ViewGroup_LayoutParams>>(attrs); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean onSingleTapUp(jni::ref<android::view::MotionEvent> e) { return call_method<"onSingleTapUp", jboolean>(e); }
	jboolean onFling(jni::ref<android::view::MotionEvent> e1, jni::ref<android::view::MotionEvent> e2, jfloat velocityX, jfloat velocityY) { return call_method<"onFling", jboolean>(e1, e2, velocityX, velocityY); }
	jboolean onScroll(jni::ref<android::view::MotionEvent> e1, jni::ref<android::view::MotionEvent> e2, jfloat distanceX, jfloat distanceY) { return call_method<"onScroll", jboolean>(e1, e2, distanceX, distanceY); }
	jboolean onDown(jni::ref<android::view::MotionEvent> e) { return call_method<"onDown", jboolean>(e); }
	void onLongPress(jni::ref<android::view::MotionEvent> e) { return call_method<"onLongPress", void>(e); }
	void onShowPress(jni::ref<android::view::MotionEvent> e) { return call_method<"onShowPress", void>(e); }
	void dispatchSetSelected(jboolean selected) { return call_method<"dispatchSetSelected", void>(selected); }
	jboolean showContextMenuForChild(jni::ref<android::view::View> originalView) { return call_method<"showContextMenuForChild", jboolean>(originalView); }
	jboolean showContextMenu() { return call_method<"showContextMenu", jboolean>(); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	jboolean onKeyDown(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyDown", jboolean>(keyCode, event); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	void setGravity(jint gravity) { return call_method<"setGravity", void>(gravity); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }
	jboolean performAccessibilityAction(jint action, jni::ref<android::os::Bundle> arguments) { return call_method<"performAccessibilityAction", jboolean>(action, arguments); }

protected:

	Gallery(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_GALLERY
