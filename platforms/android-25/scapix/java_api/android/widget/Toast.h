// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Toast; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Toast>
{
	static constexpr fixed_string class_name = "android/widget/Toast";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Toast : public jni::object_base<"android/widget/Toast",
	java::lang::Object>
{
public:

	static jint LENGTH_LONG() { return get_static_field<"LENGTH_LONG", jint>(); }
	static jint LENGTH_SHORT() { return get_static_field<"LENGTH_SHORT", jint>(); }

	static jni::ref<android::widget::Toast> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	void show() { return call_method<"show", void>(); }
	void cancel() { return call_method<"cancel", void>(); }
	void setView(jni::ref<android::view::View> view) { return call_method<"setView", void>(view); }
	jni::ref<android::view::View> getView() { return call_method<"getView", jni::ref<android::view::View>>(); }
	void setDuration(jint duration) { return call_method<"setDuration", void>(duration); }
	jint getDuration() { return call_method<"getDuration", jint>(); }
	void setMargin(jfloat horizontalMargin, jfloat verticalMargin) { return call_method<"setMargin", void>(horizontalMargin, verticalMargin); }
	jfloat getHorizontalMargin() { return call_method<"getHorizontalMargin", jfloat>(); }
	jfloat getVerticalMargin() { return call_method<"getVerticalMargin", jfloat>(); }
	void setGravity(jint gravity, jint xOffset, jint yOffset) { return call_method<"setGravity", void>(gravity, xOffset, yOffset); }
	jint getGravity() { return call_method<"getGravity", jint>(); }
	jint getXOffset() { return call_method<"getXOffset", jint>(); }
	jint getYOffset() { return call_method<"getYOffset", jint>(); }
	static jni::ref<android::widget::Toast> makeText(jni::ref<android::content::Context> context, jni::ref<java::lang::CharSequence> text, jint duration) { return call_static_method<"makeText", jni::ref<android::widget::Toast>>(context, text, duration); }
	static jni::ref<android::widget::Toast> makeText(jni::ref<android::content::Context> context, jint resId, jint duration) { return call_static_method<"makeText", jni::ref<android::widget::Toast>>(context, resId, duration); }
	void setText(jint resId) { return call_method<"setText", void>(resId); }
	void setText(jni::ref<java::lang::CharSequence> s) { return call_method<"setText", void>(s); }

protected:

	Toast(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_TOAST
