// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::window { class SplashScreen_OnExitAnimationListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::window::SplashScreen_OnExitAnimationListener>
{
	static constexpr fixed_string class_name = "android/window/SplashScreen$OnExitAnimationListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER)
#define SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/window/SplashScreenView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::window::SplashScreen_OnExitAnimationListener : public jni::object_base<"android/window/SplashScreen$OnExitAnimationListener",
	java::lang::Object>
{
public:

	void onSplashScreenExit(jni::ref<android::window::SplashScreenView> p1) { return call_method<"onSplashScreenExit", void>(p1); }

protected:

	SplashScreen_OnExitAnimationListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WINDOW_SPLASHSCREEN_ONEXITANIMATIONLISTENER
