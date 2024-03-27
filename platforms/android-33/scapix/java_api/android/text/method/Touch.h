// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH_FWD
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::text::method { class Touch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::text::method::Touch>
{
	static constexpr fixed_string class_name = "android/text/method/Touch";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH)
#define SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/text/Layout.h>
#include <scapix/java_api/android/text/Spannable.h>
#include <scapix/java_api/android/view/MotionEvent.h>
#include <scapix/java_api/android/widget/TextView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::text::method::Touch : public jni::object_base<"android/text/method/Touch",
	java::lang::Object>
{
public:

	static void scrollTo(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Layout> layout, jint x, jint y) { return call_static_method<"scrollTo", void>(widget, layout, x, y); }
	static jboolean onTouchEvent(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Spannable> buffer, jni::ref<android::view::MotionEvent> event) { return call_static_method<"onTouchEvent", jboolean>(widget, buffer, event); }
	static jint getInitialScrollX(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Spannable> buffer) { return call_static_method<"getInitialScrollX", jint>(widget, buffer); }
	static jint getInitialScrollY(jni::ref<android::widget::TextView> widget, jni::ref<android::text::Spannable> buffer) { return call_static_method<"getInitialScrollY", jint>(widget, buffer); }

protected:

	Touch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEXT_METHOD_TOUCH