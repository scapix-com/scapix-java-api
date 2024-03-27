// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class ActionBar_OnNavigationListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::ActionBar_OnNavigationListener>
{
	static constexpr fixed_string class_name = "android/app/ActionBar$OnNavigationListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::ActionBar_OnNavigationListener : public jni::object_base<"android/app/ActionBar$OnNavigationListener",
	java::lang::Object>
{
public:

	jboolean onNavigationItemSelected(jint p1, jlong p2) { return call_method<"onNavigationItemSelected", jboolean>(p1, p2); }

protected:

	ActionBar_OnNavigationListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ACTIONBAR_ONNAVIGATIONLISTENER