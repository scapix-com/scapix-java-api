// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::sdksandbox { class SdkSandboxManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::sdksandbox::SdkSandboxManager>
{
	static constexpr fixed_string class_name = "android/app/sdksandbox/SdkSandboxManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER)
#define SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/sdksandbox/SdkSandboxManager_SdkSandboxProcessDeathCallback.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/OutcomeReceiver.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#include <scapix/java_api/java/util/concurrent/Executor.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::sdksandbox::SdkSandboxManager : public jni::object_base<"android/app/sdksandbox/SdkSandboxManager",
	java::lang::Object>
{
public:

	using SdkSandboxProcessDeathCallback = SdkSandboxManager_SdkSandboxProcessDeathCallback;

	static jni::ref<java::lang::String> EXTRA_DISPLAY_ID() { return get_static_field<"EXTRA_DISPLAY_ID", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_HEIGHT_IN_PIXELS() { return get_static_field<"EXTRA_HEIGHT_IN_PIXELS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_HOST_TOKEN() { return get_static_field<"EXTRA_HOST_TOKEN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_SURFACE_PACKAGE() { return get_static_field<"EXTRA_SURFACE_PACKAGE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_WIDTH_IN_PIXELS() { return get_static_field<"EXTRA_WIDTH_IN_PIXELS", jni::ref<java::lang::String>>(); }
	static jint LOAD_SDK_ALREADY_LOADED() { return get_static_field<"LOAD_SDK_ALREADY_LOADED", jint>(); }
	static jint LOAD_SDK_INTERNAL_ERROR() { return get_static_field<"LOAD_SDK_INTERNAL_ERROR", jint>(); }
	static jint LOAD_SDK_NOT_FOUND() { return get_static_field<"LOAD_SDK_NOT_FOUND", jint>(); }
	static jint LOAD_SDK_SDK_DEFINED_ERROR() { return get_static_field<"LOAD_SDK_SDK_DEFINED_ERROR", jint>(); }
	static jint LOAD_SDK_SDK_SANDBOX_DISABLED() { return get_static_field<"LOAD_SDK_SDK_SANDBOX_DISABLED", jint>(); }
	static jint REQUEST_SURFACE_PACKAGE_INTERNAL_ERROR() { return get_static_field<"REQUEST_SURFACE_PACKAGE_INTERNAL_ERROR", jint>(); }
	static jint REQUEST_SURFACE_PACKAGE_SDK_NOT_LOADED() { return get_static_field<"REQUEST_SURFACE_PACKAGE_SDK_NOT_LOADED", jint>(); }
	static jint SDK_SANDBOX_PROCESS_NOT_AVAILABLE() { return get_static_field<"SDK_SANDBOX_PROCESS_NOT_AVAILABLE", jint>(); }
	static jni::ref<java::lang::String> SDK_SANDBOX_SERVICE() { return get_static_field<"SDK_SANDBOX_SERVICE", jni::ref<java::lang::String>>(); }
	static jint SDK_SANDBOX_STATE_DISABLED() { return get_static_field<"SDK_SANDBOX_STATE_DISABLED", jint>(); }
	static jint SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION() { return get_static_field<"SDK_SANDBOX_STATE_ENABLED_PROCESS_ISOLATION", jint>(); }

	static jint getSdkSandboxState() { return call_static_method<"getSdkSandboxState", jint>(); }
	void addSdkSandboxProcessDeathCallback(jni::ref<java::util::concurrent::Executor> callbackExecutor, jni::ref<android::app::sdksandbox::SdkSandboxManager_SdkSandboxProcessDeathCallback> callback) { return call_method<"addSdkSandboxProcessDeathCallback", void>(callbackExecutor, callback); }
	void removeSdkSandboxProcessDeathCallback(jni::ref<android::app::sdksandbox::SdkSandboxManager_SdkSandboxProcessDeathCallback> callback) { return call_method<"removeSdkSandboxProcessDeathCallback", void>(callback); }
	void loadSdk(jni::ref<java::lang::String> sdkName, jni::ref<android::os::Bundle> params, jni::ref<java::util::concurrent::Executor> executor, jni::ref<android::os::OutcomeReceiver> receiver) { return call_method<"loadSdk", void>(sdkName, params, executor, receiver); }
	jni::ref<java::util::List> getSandboxedSdks() { return call_method<"getSandboxedSdks", jni::ref<java::util::List>>(); }
	void unloadSdk(jni::ref<java::lang::String> sdkName) { return call_method<"unloadSdk", void>(sdkName); }
	void requestSurfacePackage(jni::ref<java::lang::String> sdkName, jni::ref<android::os::Bundle> params, jni::ref<java::util::concurrent::Executor> callbackExecutor, jni::ref<android::os::OutcomeReceiver> receiver) { return call_method<"requestSurfacePackage", void>(sdkName, params, callbackExecutor, receiver); }
	void addSyncedSharedPreferencesKeys(jni::ref<java::util::Set> keys) { return call_method<"addSyncedSharedPreferencesKeys", void>(keys); }
	void removeSyncedSharedPreferencesKeys(jni::ref<java::util::Set> keys) { return call_method<"removeSyncedSharedPreferencesKeys", void>(keys); }
	jni::ref<java::util::Set> getSyncedSharedPreferencesKeys() { return call_method<"getSyncedSharedPreferencesKeys", jni::ref<java::util::Set>>(); }

protected:

	SdkSandboxManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_SDKSANDBOX_SDKSANDBOXMANAGER
