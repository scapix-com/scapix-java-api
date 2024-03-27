// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityNodeInfo_AccessibilityAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityNodeInfo$AccessibilityAction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction : public jni::object_base<"android/view/accessibility/AccessibilityNodeInfo$AccessibilityAction",
	java::lang::Object>
{
public:

	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_ACCESSIBILITY_FOCUS() { return get_static_field<"ACTION_ACCESSIBILITY_FOCUS", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CLEAR_ACCESSIBILITY_FOCUS() { return get_static_field<"ACTION_CLEAR_ACCESSIBILITY_FOCUS", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CLEAR_FOCUS() { return get_static_field<"ACTION_CLEAR_FOCUS", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CLEAR_SELECTION() { return get_static_field<"ACTION_CLEAR_SELECTION", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CLICK() { return get_static_field<"ACTION_CLICK", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_COLLAPSE() { return get_static_field<"ACTION_COLLAPSE", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CONTEXT_CLICK() { return get_static_field<"ACTION_CONTEXT_CLICK", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_COPY() { return get_static_field<"ACTION_COPY", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_CUT() { return get_static_field<"ACTION_CUT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_DISMISS() { return get_static_field<"ACTION_DISMISS", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_EXPAND() { return get_static_field<"ACTION_EXPAND", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_FOCUS() { return get_static_field<"ACTION_FOCUS", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_LONG_CLICK() { return get_static_field<"ACTION_LONG_CLICK", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_NEXT_AT_MOVEMENT_GRANULARITY() { return get_static_field<"ACTION_NEXT_AT_MOVEMENT_GRANULARITY", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_NEXT_HTML_ELEMENT() { return get_static_field<"ACTION_NEXT_HTML_ELEMENT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_PASTE() { return get_static_field<"ACTION_PASTE", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY() { return get_static_field<"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_PREVIOUS_HTML_ELEMENT() { return get_static_field<"ACTION_PREVIOUS_HTML_ELEMENT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_BACKWARD() { return get_static_field<"ACTION_SCROLL_BACKWARD", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_DOWN() { return get_static_field<"ACTION_SCROLL_DOWN", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_FORWARD() { return get_static_field<"ACTION_SCROLL_FORWARD", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_LEFT() { return get_static_field<"ACTION_SCROLL_LEFT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_RIGHT() { return get_static_field<"ACTION_SCROLL_RIGHT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_TO_POSITION() { return get_static_field<"ACTION_SCROLL_TO_POSITION", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SCROLL_UP() { return get_static_field<"ACTION_SCROLL_UP", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SELECT() { return get_static_field<"ACTION_SELECT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SET_SELECTION() { return get_static_field<"ACTION_SET_SELECTION", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SET_TEXT() { return get_static_field<"ACTION_SET_TEXT", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> ACTION_SHOW_ON_SCREEN() { return get_static_field<"ACTION_SHOW_ON_SCREEN", jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction>>(); }

	static jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> new_object(jint actionId, jni::ref<java::lang::CharSequence> label) { return base_::new_object(actionId, label); }
	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<java::lang::CharSequence> getLabel() { return call_method<"getLabel", jni::ref<java::lang::CharSequence>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> other) { return call_method<"equals", jboolean>(other); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AccessibilityNodeInfo_AccessibilityAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_ACCESSIBILITYACTION
