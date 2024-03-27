// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityManager_TouchExplorationStateChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityManager_TouchExplorationStateChangeListener>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityManager_TouchExplorationStateChangeListener : public jni::object_base<"android/view/accessibility/AccessibilityManager$TouchExplorationStateChangeListener",
	java::lang::Object>
{
public:

	void onTouchExplorationStateChanged(jboolean p1) { return call_method<"onTouchExplorationStateChanged", void>(p1); }

protected:

	AccessibilityManager_TouchExplorationStateChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_TOUCHEXPLORATIONSTATECHANGELISTENER
