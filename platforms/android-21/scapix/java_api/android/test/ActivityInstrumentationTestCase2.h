// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/test/ActivityTestCase.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class ActivityInstrumentationTestCase2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::ActivityInstrumentationTestCase2>
{
	static constexpr fixed_string class_name = "android/test/ActivityInstrumentationTestCase2";
	using base_classes = std::tuple<scapix::java_api::android::test::ActivityTestCase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2)
#define SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::ActivityInstrumentationTestCase2 : public jni::object_base<"android/test/ActivityInstrumentationTestCase2",
	android::test::ActivityTestCase>
{
public:

	static jni::ref<android::test::ActivityInstrumentationTestCase2> new_object(jni::ref<java::lang::String> pkg, jni::ref<java::lang::Class> activityClass) { return base_::new_object(pkg, activityClass); }
	static jni::ref<android::test::ActivityInstrumentationTestCase2> new_object(jni::ref<java::lang::Class> activityClass) { return base_::new_object(activityClass); }
	jni::ref<android::app::Activity> getActivity() { return call_method<"getActivity", jni::ref<android::app::Activity>>(); }
	void setActivityIntent(jni::ref<android::content::Intent> i) { return call_method<"setActivityIntent", void>(i); }
	void setActivityInitialTouchMode(jboolean initialTouchMode) { return call_method<"setActivityInitialTouchMode", void>(initialTouchMode); }

protected:

	ActivityInstrumentationTestCase2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_ACTIVITYINSTRUMENTATIONTESTCASE2
