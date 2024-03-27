// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityWindowInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityWindowInfo>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityWindowInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityWindowInfo : public jni::object_base<"android/view/accessibility/AccessibilityWindowInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint TYPE_ACCESSIBILITY_OVERLAY() { return get_static_field<"TYPE_ACCESSIBILITY_OVERLAY", jint>(); }
	static jint TYPE_APPLICATION() { return get_static_field<"TYPE_APPLICATION", jint>(); }
	static jint TYPE_INPUT_METHOD() { return get_static_field<"TYPE_INPUT_METHOD", jint>(); }
	static jint TYPE_SPLIT_SCREEN_DIVIDER() { return get_static_field<"TYPE_SPLIT_SCREEN_DIVIDER", jint>(); }
	static jint TYPE_SYSTEM() { return get_static_field<"TYPE_SYSTEM", jint>(); }

	jni::ref<java::lang::CharSequence> getTitle() { return call_method<"getTitle", jni::ref<java::lang::CharSequence>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	jint getLayer() { return call_method<"getLayer", jint>(); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getRoot() { return call_method<"getRoot", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getAnchor() { return call_method<"getAnchor", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	jni::ref<android::view::accessibility::AccessibilityWindowInfo> getParent() { return call_method<"getParent", jni::ref<android::view::accessibility::AccessibilityWindowInfo>>(); }
	jint getId() { return call_method<"getId", jint>(); }
	void getBoundsInScreen(jni::ref<android::graphics::Rect> outBounds) { return call_method<"getBoundsInScreen", void>(outBounds); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	jboolean isFocused() { return call_method<"isFocused", jboolean>(); }
	jboolean isAccessibilityFocused() { return call_method<"isAccessibilityFocused", jboolean>(); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<android::view::accessibility::AccessibilityWindowInfo> getChild(jint index) { return call_method<"getChild", jni::ref<android::view::accessibility::AccessibilityWindowInfo>>(index); }
	static jni::ref<android::view::accessibility::AccessibilityWindowInfo> obtain() { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityWindowInfo>>(); }
	static jni::ref<android::view::accessibility::AccessibilityWindowInfo> obtain(jni::ref<android::view::accessibility::AccessibilityWindowInfo> info) { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityWindowInfo>>(info); }
	void recycle() { return call_method<"recycle", void>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AccessibilityWindowInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYWINDOWINFO
