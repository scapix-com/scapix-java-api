// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class PerformanceTestCase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::PerformanceTestCase>
{
	static constexpr fixed_string class_name = "android/test/PerformanceTestCase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE)
#define SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/test/PerformanceTestCase_Intermediates.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::PerformanceTestCase : public jni::object_base<"android/test/PerformanceTestCase",
	java::lang::Object>
{
public:

	using Intermediates = PerformanceTestCase_Intermediates;

	jint startPerformance(jni::ref<android::test::PerformanceTestCase_Intermediates> p1) { return call_method<"startPerformance", jint>(p1); }
	jboolean isPerformanceOnly() { return call_method<"isPerformanceOnly", jboolean>(); }

protected:

	PerformanceTestCase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_PERFORMANCETESTCASE