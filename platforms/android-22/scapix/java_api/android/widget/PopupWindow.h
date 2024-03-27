// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class PopupWindow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::PopupWindow>
{
	static constexpr fixed_string class_name = "android/widget/PopupWindow";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/View_OnTouchListener.h>
#include <scapix/java_api/android/widget/PopupWindow_OnDismissListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::PopupWindow : public jni::object_base<"android/widget/PopupWindow",
	java::lang::Object>
{
public:

	using OnDismissListener = PopupWindow_OnDismissListener;

	static jint INPUT_METHOD_FROM_FOCUSABLE() { return get_static_field<"INPUT_METHOD_FROM_FOCUSABLE", jint>(); }
	static jint INPUT_METHOD_NEEDED() { return get_static_field<"INPUT_METHOD_NEEDED", jint>(); }
	static jint INPUT_METHOD_NOT_NEEDED() { return get_static_field<"INPUT_METHOD_NOT_NEEDED", jint>(); }

	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr) { return base_::new_object(context, attrs, defStyleAttr); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs, jint defStyleAttr, jint defStyleRes) { return base_::new_object(context, attrs, defStyleAttr, defStyleRes); }
	static jni::ref<android::widget::PopupWindow> new_object() { return base_::new_object(); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::view::View> contentView) { return base_::new_object(contentView); }
	static jni::ref<android::widget::PopupWindow> new_object(jint width, jint height) { return base_::new_object(width, height); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::view::View> contentView, jint width, jint height) { return base_::new_object(contentView, width, height); }
	static jni::ref<android::widget::PopupWindow> new_object(jni::ref<android::view::View> contentView, jint width, jint height, jboolean focusable) { return base_::new_object(contentView, width, height, focusable); }
	jni::ref<android::graphics::drawable::Drawable> getBackground() { return call_method<"getBackground", jni::ref<android::graphics::drawable::Drawable>>(); }
	void setBackgroundDrawable(jni::ref<android::graphics::drawable::Drawable> background) { return call_method<"setBackgroundDrawable", void>(background); }
	jfloat getElevation() { return call_method<"getElevation", jfloat>(); }
	void setElevation(jfloat elevation) { return call_method<"setElevation", void>(elevation); }
	jint getAnimationStyle() { return call_method<"getAnimationStyle", jint>(); }
	void setIgnoreCheekPress() { return call_method<"setIgnoreCheekPress", void>(); }
	void setAnimationStyle(jint animationStyle) { return call_method<"setAnimationStyle", void>(animationStyle); }
	jni::ref<android::view::View> getContentView() { return call_method<"getContentView", jni::ref<android::view::View>>(); }
	void setContentView(jni::ref<android::view::View> contentView) { return call_method<"setContentView", void>(contentView); }
	void setTouchInterceptor(jni::ref<android::view::View_OnTouchListener> l) { return call_method<"setTouchInterceptor", void>(l); }
	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	void setFocusable(jboolean focusable) { return call_method<"setFocusable", void>(focusable); }
	jint getInputMethodMode() { return call_method<"getInputMethodMode", jint>(); }
	void setInputMethodMode(jint mode) { return call_method<"setInputMethodMode", void>(mode); }
	void setSoftInputMode(jint mode) { return call_method<"setSoftInputMode", void>(mode); }
	jint getSoftInputMode() { return call_method<"getSoftInputMode", jint>(); }
	jboolean isTouchable() { return call_method<"isTouchable", jboolean>(); }
	void setTouchable(jboolean touchable) { return call_method<"setTouchable", void>(touchable); }
	jboolean isOutsideTouchable() { return call_method<"isOutsideTouchable", jboolean>(); }
	void setOutsideTouchable(jboolean touchable) { return call_method<"setOutsideTouchable", void>(touchable); }
	jboolean isClippingEnabled() { return call_method<"isClippingEnabled", jboolean>(); }
	void setClippingEnabled(jboolean enabled) { return call_method<"setClippingEnabled", void>(enabled); }
	jboolean isSplitTouchEnabled() { return call_method<"isSplitTouchEnabled", jboolean>(); }
	void setSplitTouchEnabled(jboolean enabled) { return call_method<"setSplitTouchEnabled", void>(enabled); }
	jboolean isAttachedInDecor() { return call_method<"isAttachedInDecor", jboolean>(); }
	void setAttachedInDecor(jboolean enabled) { return call_method<"setAttachedInDecor", void>(enabled); }
	void setWindowLayoutMode(jint widthSpec, jint heightSpec) { return call_method<"setWindowLayoutMode", void>(widthSpec, heightSpec); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	void setHeight(jint height) { return call_method<"setHeight", void>(height); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	void setWidth(jint width) { return call_method<"setWidth", void>(width); }
	jboolean isShowing() { return call_method<"isShowing", jboolean>(); }
	void showAtLocation(jni::ref<android::view::View> parent, jint gravity, jint x, jint y) { return call_method<"showAtLocation", void>(parent, gravity, x, y); }
	void showAsDropDown(jni::ref<android::view::View> anchor) { return call_method<"showAsDropDown", void>(anchor); }
	void showAsDropDown(jni::ref<android::view::View> anchor, jint xoff, jint yoff) { return call_method<"showAsDropDown", void>(anchor, xoff, yoff); }
	void showAsDropDown(jni::ref<android::view::View> anchor, jint xoff, jint yoff, jint gravity) { return call_method<"showAsDropDown", void>(anchor, xoff, yoff, gravity); }
	jboolean isAboveAnchor() { return call_method<"isAboveAnchor", jboolean>(); }
	jint getMaxAvailableHeight(jni::ref<android::view::View> anchor) { return call_method<"getMaxAvailableHeight", jint>(anchor); }
	jint getMaxAvailableHeight(jni::ref<android::view::View> anchor, jint yOffset) { return call_method<"getMaxAvailableHeight", jint>(anchor, yOffset); }
	void dismiss() { return call_method<"dismiss", void>(); }
	void setOnDismissListener(jni::ref<android::widget::PopupWindow_OnDismissListener> onDismissListener) { return call_method<"setOnDismissListener", void>(onDismissListener); }
	void update() { return call_method<"update", void>(); }
	void update(jint width, jint height) { return call_method<"update", void>(width, height); }
	void update(jint x, jint y, jint width, jint height) { return call_method<"update", void>(x, y, width, height); }
	void update(jint x, jint y, jint width, jint height, jboolean force) { return call_method<"update", void>(x, y, width, height, force); }
	void update(jni::ref<android::view::View> anchor, jint width, jint height) { return call_method<"update", void>(anchor, width, height); }
	void update(jni::ref<android::view::View> anchor, jint xoff, jint yoff, jint width, jint height) { return call_method<"update", void>(anchor, xoff, yoff, width, height); }

protected:

	PopupWindow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_POPUPWINDOW
