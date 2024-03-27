// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Activity.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ActivityGroup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ActivityGroup>
{
	static constexpr fixed_string class_name = "android/app/ActivityGroup";
	using base_classes = std::tuple<scapix::java_api::android::app::Activity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP)
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/LocalActivityManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ActivityGroup : public jni::object_base<"android/app/ActivityGroup",
	android::app::Activity>
{
public:

	static jni::ref<android::app::ActivityGroup> new_object() { return base_::new_object(); }
	static jni::ref<android::app::ActivityGroup> new_object(jboolean singleActivityMode) { return base_::new_object(singleActivityMode); }
	jni::ref<android::app::Activity> getCurrentActivity() { return call_method<"getCurrentActivity", jni::ref<android::app::Activity>>(); }
	jni::ref<android::app::LocalActivityManager> getLocalActivityManager() { return call_method<"getLocalActivityManager", jni::ref<android::app::LocalActivityManager>>(); }

protected:

	ActivityGroup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIVITYGROUP