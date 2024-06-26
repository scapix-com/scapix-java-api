// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/LinearLayout.h>
#include <scapix/java_api/android/view/View_OnFocusChangeListener.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class TabWidget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::TabWidget>
{
	static constexpr fixed_string class_name = "android/widget/TabWidget";
	using base_classes = std::tuple<scapix::java_api::android::widget::LinearLayout, scapix::java_api::android::view::View_OnFocusChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/Canvas.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::TabWidget : public jni::object_base<"android/widget/TabWidget",
	android::widget::LinearLayout,
	android::view::View_OnFocusChangeListener>
{
public:

	static jni::ref<android::widget::TabWidget> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::TabWidget> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::TabWidget> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::TabWidget> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	jni::ref<android::view::View> getChildTabViewAt(jint index) { return call_method<"getChildTabViewAt", jni::ref<android::view::View>>(index); }
	jint getTabCount() { return call_method<"getTabCount", jint>(); }
	void setDividerDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setDividerDrawable", void>(drawable); }
	void setDividerDrawable(jint resId) { return call_method<"setDividerDrawable", void>(resId); }
	void setLeftStripDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setLeftStripDrawable", void>(drawable); }
	void setLeftStripDrawable(jint resId) { return call_method<"setLeftStripDrawable", void>(resId); }
	jni::ref<android::graphics::drawable::Drawable> getLeftStripDrawable() { return call_method<"getLeftStripDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setRightStripDrawable(jni::ref<android::graphics::drawable::Drawable> drawable) { return call_method<"setRightStripDrawable", void>(drawable); }
	void setRightStripDrawable(jint resId) { return call_method<"setRightStripDrawable", void>(resId); }
	jni::ref<android::graphics::drawable::Drawable> getRightStripDrawable() { return call_method<"getRightStripDrawable", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setStripEnabled(jboolean stripEnabled) { return call_method<"setStripEnabled", void>(stripEnabled); }
	jboolean isStripEnabled() { return call_method<"isStripEnabled", jboolean>(); }
	void childDrawableStateChanged(jni::ref<android::view::View> child) { return call_method<"childDrawableStateChanged", void>(child); }
	void dispatchDraw(jni::ref<android::graphics::Canvas> canvas) { return call_method<"dispatchDraw", void>(canvas); }
	void setCurrentTab(jint index) { return call_method<"setCurrentTab", void>(index); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	void focusCurrentTab(jint index) { return call_method<"focusCurrentTab", void>(index); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	void addView(jni::ref<android::view::View> child) { return call_method<"addView", void>(child); }
	void removeAllViews() { return call_method<"removeAllViews", void>(); }
	void onFocusChange(jni::ref<android::view::View> v, jboolean hasFocus) { return call_method<"onFocusChange", void>(v, hasFocus); }

protected:

	TabWidget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TABWIDGET
