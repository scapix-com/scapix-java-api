// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class AppOpsManager_OnOpChangedListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::AppOpsManager_OnOpChangedListener>
{
	static constexpr fixed_string class_name = "android/app/AppOpsManager$OnOpChangedListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER)
#define SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::AppOpsManager_OnOpChangedListener : public jni::object_base<"android/app/AppOpsManager$OnOpChangedListener",
	java::lang::Object>
{
public:

	void onOpChanged(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"onOpChanged", void>(p1, p2); }

protected:

	AppOpsManager_OnOpChangedListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_APPOPSMANAGER_ONOPCHANGEDLISTENER