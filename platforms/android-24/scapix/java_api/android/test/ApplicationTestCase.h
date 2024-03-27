// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/test/AndroidTestCase.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class ApplicationTestCase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::ApplicationTestCase>
{
	static constexpr fixed_string class_name = "android/test/ApplicationTestCase";
	using base_classes = std::tuple<scapix::java_api::android::test::AndroidTestCase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE)
#define SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Application.h>
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/Class.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::ApplicationTestCase : public jni::object_base<"android/test/ApplicationTestCase",
	android::test::AndroidTestCase>
{
public:

	static jni::ref<android::test::ApplicationTestCase> new_object(jni::ref<java::lang::Class> applicationClass) { return base_::new_object(applicationClass); }
	jni::ref<android::app::Application> getApplication() { return call_method<"getApplication", jni::ref<android::app::Application>>(); }
	jni::ref<android::content::Context> getSystemContext() { return call_method<"getSystemContext", jni::ref<android::content::Context>>(); }
	void testApplicationTestCaseSetUpProperly() { return call_method<"testApplicationTestCaseSetUpProperly", void>(); }

protected:

	ApplicationTestCase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_APPLICATIONTESTCASE
