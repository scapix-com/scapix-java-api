// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/widget/ViewAnimator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class ViewFlipper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::ViewFlipper>
{
	static constexpr fixed_string class_name = "android/widget/ViewFlipper";
	using base_classes = std::tuple<scapix::java_api::android::widget::ViewAnimator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::ViewFlipper : public jni::object_base<"android/widget/ViewFlipper",
	android::widget::ViewAnimator>
{
public:

	static jni::ref<android::widget::ViewFlipper> new_object(jni::ref<android::content::Context> context) { return base_::new_object(context); }
	static jni::ref<android::widget::ViewFlipper> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	void setFlipInterval(jint milliseconds) { return call_method<"setFlipInterval", void>(milliseconds); }
	void startFlipping() { return call_method<"startFlipping", void>(); }
	void stopFlipping() { return call_method<"stopFlipping", void>(); }
	jni::ref<java::lang::CharSequence> getAccessibilityClassName() { return call_method<"getAccessibilityClassName", jni::ref<java::lang::CharSequence>>(); }
	jboolean isFlipping() { return call_method<"isFlipping", jboolean>(); }
	void setAutoStart(jboolean autoStart) { return call_method<"setAutoStart", void>(autoStart); }
	jboolean isAutoStart() { return call_method<"isAutoStart", jboolean>(); }

protected:

	ViewFlipper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_VIEWFLIPPER
