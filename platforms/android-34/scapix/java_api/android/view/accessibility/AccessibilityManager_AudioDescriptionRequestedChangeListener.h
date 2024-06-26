// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityManager_AudioDescriptionRequestedChangeListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityManager_AudioDescriptionRequestedChangeListener>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityManager$AudioDescriptionRequestedChangeListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityManager_AudioDescriptionRequestedChangeListener : public jni::object_base<"android/view/accessibility/AccessibilityManager$AudioDescriptionRequestedChangeListener",
	java::lang::Object>
{
public:

	void onAudioDescriptionRequestedChanged(jboolean p1) { return call_method<"onAudioDescriptionRequestedChanged", void>(p1); }

protected:

	AccessibilityManager_AudioDescriptionRequestedChangeListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYMANAGER_AUDIODESCRIPTIONREQUESTEDCHANGELISTENER
