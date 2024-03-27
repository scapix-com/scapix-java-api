// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/ListActivity.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class LauncherActivity; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::LauncherActivity>
{
	static constexpr fixed_string class_name = "android/app/LauncherActivity";
	using base_classes = std::tuple<scapix::java_api::android::app::ListActivity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY)
#define SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/app/LauncherActivity_IconResizer.h>
#include <scapix/java_api/android/app/LauncherActivity_ListItem.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::LauncherActivity : public jni::object_base<"android/app/LauncherActivity",
	android::app::ListActivity>
{
public:

	using IconResizer = LauncherActivity_IconResizer;
	using ListItem = LauncherActivity_ListItem;

	static jni::ref<android::app::LauncherActivity> new_object() { return base_::new_object(); }
	void setTitle(jni::ref<java::lang::CharSequence> title) { return call_method<"setTitle", void>(title); }
	void setTitle(jint titleId) { return call_method<"setTitle", void>(titleId); }
	jni::ref<java::util::List> makeListItems() { return call_method<"makeListItems", jni::ref<java::util::List>>(); }

protected:

	LauncherActivity(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_LAUNCHERACTIVITY