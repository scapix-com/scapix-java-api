// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/test/AssertionFailedError.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class ComparisonFailure; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::ComparisonFailure>
{
	static constexpr fixed_string class_name = "android/test/ComparisonFailure";
	using base_classes = std::tuple<scapix::java_api::android::test::AssertionFailedError>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE)
#define SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::ComparisonFailure : public jni::object_base<"android/test/ComparisonFailure",
	android::test::AssertionFailedError>
{
public:

	static jni::ref<android::test::ComparisonFailure> new_object(jni::ref<java::lang::String> message, jni::ref<java::lang::String> expected, jni::ref<java::lang::String> actual) { return base_::new_object(message, expected, actual); }
	jni::ref<java::lang::String> getMessage() { return call_method<"getMessage", jni::ref<java::lang::String>>(); }

protected:

	ComparisonFailure(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_COMPARISONFAILURE
