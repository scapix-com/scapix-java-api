// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/text/method/ScrollingMovementMethod.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class LinkMovementMethod; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::LinkMovementMethod>
{
	static constexpr fixed_string class_name = "android/text/method/LinkMovementMethod";
	using base_classes = std::tuple<scapix::java_api::android::text::method::ScrollingMovementMethod>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/text/method/MovementMethod.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/widget/TextView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::LinkMovementMethod : public jni::object_base<"android/text/method/LinkMovementMethod",
	android::text::method::ScrollingMovementMethod>
{
public:

	static jni::ref<android::text::method::LinkMovementMethod> new_object() { return base_::new_object(); }
	jboolean canSelectArbitrarily() { return call_method<"canSelectArbitrarily", jboolean>(); }
	jboolean onTouchEvent(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Spannable> buffer, jni::ref<android::view::MotionEvent> event) { return call_method<"onTouchEvent", jboolean>(widget, buffer, event); }
	void initialize(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Spannable> text) { return call_method<"initialize", void>(widget, text); }
	void onTakeFocus(jni::ref<android::widget::TextView> view, jni::ref<android::text::Spannable> text, jint dir) { return call_method<"onTakeFocus", void>(view, text, dir); }
	static jni::ref<android::text::method::MovementMethod> getInstance() { return call_static_method<"getInstance", jni::ref<android::text::method::MovementMethod>>(); }

protected:

	LinkMovementMethod(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_LINKMOVEMENTMETHOD