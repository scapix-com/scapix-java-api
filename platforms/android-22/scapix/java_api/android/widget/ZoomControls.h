// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ZoomControls; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ZoomControls>
{
	static constexpr fixed_string class_name = "android/widget/ZoomControls";
	using base_classes = std::tuple<scapix::java_api::android::widget::LinearLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/View_OnClickListener.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ZoomControls : public jni::object_base<"android/widget/ZoomControls",
	android::widget::LinearLayout>
{
public:

	static jni::ref<android::widget::ZoomControls> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::ZoomControls> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	void setOnZoomInClickListener(jni::ref<android::view::View_OnClickListener> listener) { return call_method<"setOnZoomInClickListener", void>(listener); }
	void setOnZoomOutClickListener(jni::ref<android::view::View_OnClickListener> listener) { return call_method<"setOnZoomOutClickListener", void>(listener); }
	void setZoomSpeed(jlong speed) { return call_method<"setZoomSpeed", void>(speed); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	void show() { return call_method<"show", void>(); }
	void hide() { return call_method<"hide", void>(); }
	void setIsZoomInEnabled(jboolean isEnabled) { return call_method<"setIsZoomInEnabled", void>(isEnabled); }
	void setIsZoomOutEnabled(jboolean isEnabled) { return call_method<"setIsZoomOutEnabled", void>(isEnabled); }
	jboolean hasFocus() { return call_method<"hasFocus", jboolean>(); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	void onInitializeAccessibilityNodeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_method<"onInitializeAccessibilityNodeInfo", void>(info); }

protected:

	ZoomControls(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_ZOOMCONTROLS
