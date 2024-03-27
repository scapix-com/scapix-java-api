// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class UiAutomation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::UiAutomation>
{
	static constexpr fixed_string class_name = "android/app/UiAutomation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION)
#define SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/accessibilityservice/AccessibilityServiceInfo.h>
#include <scapix/java_api/android/app/UiAutomation_AccessibilityEventFilter.h>
#include <scapix/java_api/android/app/UiAutomation_OnAccessibilityEventListener.h>
#include <scapix/java_api/android/graphics/Bitmap.h>
#include <scapix/java_api/android/os/ParcelFileDescriptor.h>
#include <scapix/java_api/android/os/UserHandle.h>
#include <scapix/java_api/android/view/InputEvent.h>
#include <scapix/java_api/android/view/WindowAnimationFrameStats.h>
#include <scapix/java_api/android/view/WindowContentFrameStats.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityEvent.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/java/lang/Runnable.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::UiAutomation : public jni::object_base<"android/app/UiAutomation",
	java::lang::Object>
{
public:

	using OnAccessibilityEventListener = UiAutomation_OnAccessibilityEventListener;
	using AccessibilityEventFilter = UiAutomation_AccessibilityEventFilter;

	static jint FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES() { return get_static_field<"FLAG_DONT_SUPPRESS_ACCESSIBILITY_SERVICES", jint>(); }
	static jint ROTATION_FREEZE_0() { return get_static_field<"ROTATION_FREEZE_0", jint>(); }
	static jint ROTATION_FREEZE_180() { return get_static_field<"ROTATION_FREEZE_180", jint>(); }
	static jint ROTATION_FREEZE_270() { return get_static_field<"ROTATION_FREEZE_270", jint>(); }
	static jint ROTATION_FREEZE_90() { return get_static_field<"ROTATION_FREEZE_90", jint>(); }
	static jint ROTATION_FREEZE_CURRENT() { return get_static_field<"ROTATION_FREEZE_CURRENT", jint>(); }
	static jint ROTATION_UNFREEZE() { return get_static_field<"ROTATION_UNFREEZE", jint>(); }

	void setOnAccessibilityEventListener(jni::ref<android::app::UiAutomation_OnAccessibilityEventListener> listener) { return call_method<"setOnAccessibilityEventListener", void>(listener); }
	void adoptShellPermissionIdentity() { return call_method<"adoptShellPermissionIdentity", void>(); }
	void adoptShellPermissionIdentity(jni::ref<jni::array<java::lang::String>> permissions) { return call_method<"adoptShellPermissionIdentity", void>(permissions); }
	void dropShellPermissionIdentity() { return call_method<"dropShellPermissionIdentity", void>(); }
	jboolean performGlobalAction(jint action) { return call_method<"performGlobalAction", jboolean>(action); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> findFocus(jint focus) { return call_method<"findFocus", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(focus); }
	jni::ref<android::accessibilityservice::AccessibilityServiceInfo> getServiceInfo() { return call_method<"getServiceInfo", jni::ref<android::accessibilityservice::AccessibilityServiceInfo>>(); }
	void setServiceInfo(jni::ref<android::accessibilityservice::AccessibilityServiceInfo> info) { return call_method<"setServiceInfo", void>(info); }
	jni::ref<java::util::List> getWindows() { return call_method<"getWindows", jni::ref<java::util::List>>(); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getRootInActiveWindow() { return call_method<"getRootInActiveWindow", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	jboolean injectInputEvent(jni::ref<android::view::InputEvent> event, jboolean sync) { return call_method<"injectInputEvent", jboolean>(event, sync); }
	jboolean setRotation(jint rotation) { return call_method<"setRotation", jboolean>(rotation); }
	jni::ref<android::view::accessibility::AccessibilityEvent> executeAndWaitForEvent(jni::ref<java::lang::Runnable> command, jni::ref<android::app::UiAutomation_AccessibilityEventFilter> filter, jlong timeoutMillis) { return call_method<"executeAndWaitForEvent", jni::ref<android::view::accessibility::AccessibilityEvent>>(command, filter, timeoutMillis); }
	void waitForIdle(jlong idleTimeoutMillis, jlong p2) { return call_method<"waitForIdle", void>(idleTimeoutMillis, p2); }
	jni::ref<android::graphics::Bitmap> takeScreenshot() { return call_method<"takeScreenshot", jni::ref<android::graphics::Bitmap>>(); }
	void setRunAsMonkey(jboolean enable) { return call_method<"setRunAsMonkey", void>(enable); }
	jboolean clearWindowContentFrameStats(jint windowId) { return call_method<"clearWindowContentFrameStats", jboolean>(windowId); }
	jni::ref<android::view::WindowContentFrameStats> getWindowContentFrameStats(jint windowId) { return call_method<"getWindowContentFrameStats", jni::ref<android::view::WindowContentFrameStats>>(windowId); }
	void clearWindowAnimationFrameStats() { return call_method<"clearWindowAnimationFrameStats", void>(); }
	jni::ref<android::view::WindowAnimationFrameStats> getWindowAnimationFrameStats() { return call_method<"getWindowAnimationFrameStats", jni::ref<android::view::WindowAnimationFrameStats>>(); }
	void grantRuntimePermission(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> permission) { return call_method<"grantRuntimePermission", void>(packageName, permission); }
	void grantRuntimePermissionAsUser(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> permission, jni::ref<android::os::UserHandle> userHandle) { return call_method<"grantRuntimePermissionAsUser", void>(packageName, permission, userHandle); }
	void revokeRuntimePermission(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> permission) { return call_method<"revokeRuntimePermission", void>(packageName, permission); }
	void revokeRuntimePermissionAsUser(jni::ref<java::lang::String> packageName, jni::ref<java::lang::String> permission, jni::ref<android::os::UserHandle> userHandle) { return call_method<"revokeRuntimePermissionAsUser", void>(packageName, permission, userHandle); }
	jni::ref<android::os::ParcelFileDescriptor> executeShellCommand(jni::ref<java::lang::String> command) { return call_method<"executeShellCommand", jni::ref<android::os::ParcelFileDescriptor>>(command); }

protected:

	UiAutomation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_UIAUTOMATION
