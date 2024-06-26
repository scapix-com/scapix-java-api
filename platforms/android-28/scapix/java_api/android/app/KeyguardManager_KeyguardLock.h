// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class KeyguardManager_KeyguardLock; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::KeyguardManager_KeyguardLock>
{
	static constexpr fixed_string class_name = "android/app/KeyguardManager$KeyguardLock";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK)
#define SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::KeyguardManager_KeyguardLock : public jni::object_base<"android/app/KeyguardManager$KeyguardLock",
	java::lang::Object>
{
public:

	void disableKeyguard() { return call_method<"disableKeyguard", void>(); }
	void reenableKeyguard() { return call_method<"reenableKeyguard", void>(); }

protected:

	KeyguardManager_KeyguardLock(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_KEYGUARDMANAGER_KEYGUARDLOCK
