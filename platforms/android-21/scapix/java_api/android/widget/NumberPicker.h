// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class NumberPicker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::NumberPicker>
{
	static constexpr fixed_string class_name = "android/widget/NumberPicker";
	using base_classes = std::tuple<scapix::java_api::android::widget::LinearLayout>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/KeyEvent.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeProvider.h>
#include <scapix/java_api/android/widget/NumberPicker_Formatter.h>
#include <scapix/java_api/android/widget/NumberPicker_OnScrollListener.h>
#include <scapix/java_api/android/widget/NumberPicker_OnValueChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::NumberPicker : public jni::object_base<"android/widget/NumberPicker",
	android::widget::LinearLayout>
{
public:

	using Formatter = NumberPicker_Formatter;
	using OnScrollListener = NumberPicker_OnScrollListener;
	using OnValueChangeListener = NumberPicker_OnValueChangeListener;

	static jni::ref<android::widget::NumberPicker> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::NumberPicker> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::NumberPicker> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::NumberPicker> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jboolean onInterceptTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onInterceptTouchEvent", jboolean>(event); }
	jboolean onTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(event); }
	jboolean dispatchTouchEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"dispatchTouchEvent", jboolean>(event); }
	jboolean dispatchKeyEvent(jni::ref<android::view::KeyEvent> event) { return call_method<"dispatchKeyEvent", jboolean>(event); }
	jboolean dispatchTrackballEvent(jni::ref<android::view::MotionEvent> event) { return call_method<"dispatchTrackballEvent", jboolean>(event); }
	void computeScroll() { return call_method<"computeScroll", void>(); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	void scrollBy(jint x, jint y) { return call_method<"scrollBy", void>(x, y); }
	jint getSolidColor() { return call_method<"getSolidColor", jint>(); }
	void setOnValueChangedListener(jni::ref<android::widget::NumberPicker_OnValueChangeListener> onValueChangedListener) { return call_method<"setOnValueChangedListener", void>(onValueChangedListener); }
	void setOnScrollListener(jni::ref<android::widget::NumberPicker_OnScrollListener> onScrollListener) { return call_method<"setOnScrollListener", void>(onScrollListener); }
	void setFormatter(jni::ref<android::widget::NumberPicker_Formatter> formatter) { return call_method<"setFormatter", void>(formatter); }
	void setValue(jint value) { return call_method<"setValue", void>(value); }
	jboolean performClick() { return call_method<"performClick", jboolean>(); }
	jboolean performLongClick() { return call_method<"performLongClick", jboolean>(); }
	jboolean getWrapSelectorWheel() { return call_method<"getWrapSelectorWheel", jboolean>(); }
	void setWrapSelectorWheel(jboolean wrapSelectorWheel) { return call_method<"setWrapSelectorWheel", void>(wrapSelectorWheel); }
	void setOnLongPressUpdateInterval(jlong intervalMillis) { return call_method<"setOnLongPressUpdateInterval", void>(intervalMillis); }
	jint getValue() { return call_method<"getValue", jint>(); }
	jint getMinValue() { return call_method<"getMinValue", jint>(); }
	void setMinValue(jint minValue) { return call_method<"setMinValue", void>(minValue); }
	jint getMaxValue() { return call_method<"getMaxValue", jint>(); }
	void setMaxValue(jint maxValue) { return call_method<"setMaxValue", void>(maxValue); }
	jni::ref<jni::array<java::lang::String>> getDisplayedValues() { return call_method<"getDisplayedValues", jni::ref<jni::array<java::lang::String>>>(); }
	void setDisplayedValues(jni::ref<jni::array<java::lang::String>> displayedValues) { return call_method<"setDisplayedValues", void>(displayedValues); }
	void onInitializeAccessibilityEvent(jni::ref<android::view::accessibility::AccessibilityEvent> event) { return call_method<"onInitializeAccessibilityEvent", void>(event); }
	jni::ref<android::view::accessibility::AccessibilityNodeProvider> getAccessibilityNodeProvider() { return call_method<"getAccessibilityNodeProvider", jni::ref<android::view::accessibility::AccessibilityNodeProvider>>(); }

protected:

	NumberPicker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_NUMBERPICKER
