// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class KeyguardManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::KeyguardManager>
{
	static constexpr fixed_string class_name = "android/app/KeyguardManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/Activity.h>
#include <scapix/java_api/android/app/KeyguardManager_KeyguardDismissCallback.h>
#include <scapix/java_api/android/app/KeyguardManager_KeyguardLock.h>
#include <scapix/java_api/android/app/KeyguardManager_OnKeyguardExitResult.h>
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::KeyguardManager : public jni::object_base<"android/app/KeyguardManager",
	java::lang::Object>
{
public:

	using KeyguardDismissCallback = KeyguardManager_KeyguardDismissCallback;
	using OnKeyguardExitResult = KeyguardManager_OnKeyguardExitResult;
	using KeyguardLock = KeyguardManager_KeyguardLock;

	jni::ref<android::content::Intent> createConfirmDeviceCredentialIntent(jni::ref<java::lang::CharSequence> title, jni::ref<java::lang::CharSequence> description) { return call_method<"createConfirmDeviceCredentialIntent", jni::ref<android::content::Intent>>(title, description); }
	jni::ref<android::app::KeyguardManager_KeyguardLock> newKeyguardLock(jni::ref<java::lang::String> tag) { return call_method<"newKeyguardLock", jni::ref<android::app::KeyguardManager_KeyguardLock>>(tag); }
	jboolean isKeyguardLocked() { return call_method<"isKeyguardLocked", jboolean>(); }
	jboolean isKeyguardSecure() { return call_method<"isKeyguardSecure", jboolean>(); }
	jboolean inKeyguardRestrictedInputMode() { return call_method<"inKeyguardRestrictedInputMode", jboolean>(); }
	jboolean isDeviceLocked() { return call_method<"isDeviceLocked", jboolean>(); }
	jboolean isDeviceSecure() { return call_method<"isDeviceSecure", jboolean>(); }
	void requestDismissKeyguard(jni::ref<android::app::Activity> activity, jni::ref<android::app::KeyguardManager_KeyguardDismissCallback> callback) { return call_method<"requestDismissKeyguard", void>(activity, callback); }
	void exitKeyguardSecurely(jni::ref<android::app::KeyguardManager_OnKeyguardExitResult> callback) { return call_method<"exitKeyguardSecurely", void>(callback); }

protected:

	KeyguardManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER
