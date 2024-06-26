// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/ImageButton.h>
#include <scapix/java_api/android/view/View_OnLongClickListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ZoomButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ZoomButton>
{
	static constexpr fixed_string class_name = "android/widget/ZoomButton";
	using base_classes = std::tuple<scapix::java_api::android::widget::ImageButton, scapix::java_api::android::view::View_OnLongClickListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ZoomButton : public jni::object_base<"android/widget/ZoomButton",
	android::widget::ImageButton,
	android::view::View_OnLongClickListener>
{
public:

	static jni::ref<android::widget::ZoomButton> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::ZoomButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::ZoomButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::ZoomButton> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	void setZoomSpeed(jlong speed) { return call_method<"setZoomSpeed", void>(speed); }
	jboolean onLongClick(jni::ref<android::view::View> v) { return call_method<"onLongClick", jboolean>(v); }
	jboolean onKeyUp(jint keyCode, jni::ref<android::view::KeyEvent> event) { return call_method<"onKeyUp", jboolean>(keyCode, event); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	jboolean dispatchUnhandledMove(jni::ref<android::view::View> focused, jint direction) { return call_method<"dispatchUnhandledMove", jboolean>(focused, direction); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	ZoomButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMBUTTON
