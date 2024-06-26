// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/test/InstrumentationTestCase.h>

#ifndef SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION_FWD
#define SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::test { class SyncBaseInstrumentation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::test::SyncBaseInstrumentation>
{
	static constexpr fixed_string class_name = "android/test/SyncBaseInstrumentation";
	using base_classes = std::tuple<scapix::java_api::android::test::InstrumentationTestCase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION)
#define SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::test::SyncBaseInstrumentation : public jni::object_base<"android/test/SyncBaseInstrumentation",
	android::test::InstrumentationTestCase>
{
public:

	static jni::ref<android::test::SyncBaseInstrumentation> new_object() { return base_::new_object(); }

protected:

	SyncBaseInstrumentation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_TEST_SYNCBASEINSTRUMENTATION
