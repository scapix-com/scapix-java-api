// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class TouchUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::TouchUtils>
{
	static constexpr fixed_string class_name = "android/test/TouchUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS)
#define SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/test/ActivityInstrumentationTestCase.h>
#include <scapix/java_api/android/test/InstrumentationTestCase.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/ViewGroup.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::TouchUtils : public jni::object_base<"android/test/TouchUtils",
	java::lang::Object>
{
public:

	static jni::ref<android::test::TouchUtils> new_object() { return base_::new_object(); }
	static void dragQuarterScreenDown(jni::ref<android::test::ActivityInstrumentationTestCase> test) { return call_static_method<"dragQuarterScreenDown", void>(test); }
	static void dragQuarterScreenDown(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity) { return call_static_method<"dragQuarterScreenDown", void>(test, activity); }
	static void dragQuarterScreenUp(jni::ref<android::test::ActivityInstrumentationTestCase> test) { return call_static_method<"dragQuarterScreenUp", void>(test); }
	static void dragQuarterScreenUp(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity) { return call_static_method<"dragQuarterScreenUp", void>(test, activity); }
	static void scrollToBottom(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::ViewGroup> v) { return call_static_method<"scrollToBottom", void>(test, v); }
	static void scrollToBottom(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity, jni::ref<android::view::ViewGroup> v) { return call_static_method<"scrollToBottom", void>(test, activity, v); }
	static void scrollToTop(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::ViewGroup> v) { return call_static_method<"scrollToTop", void>(test, v); }
	static void scrollToTop(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity, jni::ref<android::view::ViewGroup> v) { return call_static_method<"scrollToTop", void>(test, activity, v); }
	static void dragViewToBottom(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"dragViewToBottom", void>(test, v); }
	static void dragViewToBottom(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity, jni::ref<android::view::View> v) { return call_static_method<"dragViewToBottom", void>(test, activity, v); }
	static void dragViewToBottom(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint stepCount) { return call_static_method<"dragViewToBottom", void>(test, v, stepCount); }
	static void dragViewToBottom(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::app::Activity> activity, jni::ref<android::view::View> v, jint stepCount) { return call_static_method<"dragViewToBottom", void>(test, activity, v, stepCount); }
	static void tapView(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"tapView", void>(test, v); }
	static void touchAndCancelView(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"touchAndCancelView", void>(test, v); }
	static void clickView(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"clickView", void>(test, v); }
	static void longClickView(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"longClickView", void>(test, v); }
	static void longClickView(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"longClickView", void>(test, v); }
	static void dragViewToTop(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"dragViewToTop", void>(test, v); }
	static void dragViewToTop(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint stepCount) { return call_static_method<"dragViewToTop", void>(test, v, stepCount); }
	static void dragViewToTop(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v) { return call_static_method<"dragViewToTop", void>(test, v); }
	static void dragViewToTop(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v, jint stepCount) { return call_static_method<"dragViewToTop", void>(test, v, stepCount); }
	static jint dragViewBy(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint deltaX, jint deltaY) { return call_static_method<"dragViewBy", jint>(test, v, gravity, deltaX, deltaY); }
	static jint dragViewBy(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint deltaX, jint deltaY) { return call_static_method<"dragViewBy", jint>(test, v, gravity, deltaX, deltaY); }
	static jint dragViewTo(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toX, jint toY) { return call_static_method<"dragViewTo", jint>(test, v, gravity, toX, toY); }
	static jint dragViewTo(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toX, jint toY) { return call_static_method<"dragViewTo", jint>(test, v, gravity, toX, toY); }
	static jint dragViewToX(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toX) { return call_static_method<"dragViewToX", jint>(test, v, gravity, toX); }
	static jint dragViewToX(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toX) { return call_static_method<"dragViewToX", jint>(test, v, gravity, toX); }
	static jint dragViewToY(jni::ref<android::test::ActivityInstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toY) { return call_static_method<"dragViewToY", jint>(test, v, gravity, toY); }
	static jint dragViewToY(jni::ref<android::test::InstrumentationTestCase> test, jni::ref<android::view::View> v, jint gravity, jint toY) { return call_static_method<"dragViewToY", jint>(test, v, gravity, toY); }
	static void drag(jni::ref<android::test::ActivityInstrumentationTestCase> test, jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jint stepCount) { return call_static_method<"drag", void>(test, fromX, toX, fromY, toY, stepCount); }
	static void drag(jni::ref<android::test::InstrumentationTestCase> test, jfloat fromX, jfloat toX, jfloat fromY, jfloat toY, jint stepCount) { return call_static_method<"drag", void>(test, fromX, toX, fromY, toY, stepCount); }

protected:

	TouchUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_TOUCHUTILS
