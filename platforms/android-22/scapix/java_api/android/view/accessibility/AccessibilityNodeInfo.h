// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/android/os/Parcelable.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::accessibility { class AccessibilityNodeInfo; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::accessibility::AccessibilityNodeInfo>
{
	static constexpr fixed_string class_name = "android/view/accessibility/AccessibilityNodeInfo";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::android::os::Parcelable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Rect.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/Parcel.h>
#include <scapix/java_api/android/os/Parcelable_Creator.h>
#include <scapix/java_api/android/view/View.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo_AccessibilityAction.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo_CollectionInfo.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo_CollectionItemInfo.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityNodeInfo_RangeInfo.h>
#include <scapix/java_api/android/view/accessibility/AccessibilityWindowInfo.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::accessibility::AccessibilityNodeInfo : public jni::object_base<"android/view/accessibility/AccessibilityNodeInfo",
	java::lang::Object,
	android::os::Parcelable>
{
public:

	using CollectionItemInfo = AccessibilityNodeInfo_CollectionItemInfo;
	using CollectionInfo = AccessibilityNodeInfo_CollectionInfo;
	using RangeInfo = AccessibilityNodeInfo_RangeInfo;
	using AccessibilityAction = AccessibilityNodeInfo_AccessibilityAction;

	static jint ACTION_ACCESSIBILITY_FOCUS() { return get_static_field<"ACTION_ACCESSIBILITY_FOCUS", jint>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN() { return get_static_field<"ACTION_ARGUMENT_EXTEND_SELECTION_BOOLEAN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_HTML_ELEMENT_STRING() { return get_static_field<"ACTION_ARGUMENT_HTML_ELEMENT_STRING", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT() { return get_static_field<"ACTION_ARGUMENT_MOVEMENT_GRANULARITY_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_SELECTION_END_INT() { return get_static_field<"ACTION_ARGUMENT_SELECTION_END_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_SELECTION_START_INT() { return get_static_field<"ACTION_ARGUMENT_SELECTION_START_INT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE() { return get_static_field<"ACTION_ARGUMENT_SET_TEXT_CHARSEQUENCE", jni::ref<java::lang::String>>(); }
	static jint ACTION_CLEAR_ACCESSIBILITY_FOCUS() { return get_static_field<"ACTION_CLEAR_ACCESSIBILITY_FOCUS", jint>(); }
	static jint ACTION_CLEAR_FOCUS() { return get_static_field<"ACTION_CLEAR_FOCUS", jint>(); }
	static jint ACTION_CLEAR_SELECTION() { return get_static_field<"ACTION_CLEAR_SELECTION", jint>(); }
	static jint ACTION_CLICK() { return get_static_field<"ACTION_CLICK", jint>(); }
	static jint ACTION_COLLAPSE() { return get_static_field<"ACTION_COLLAPSE", jint>(); }
	static jint ACTION_COPY() { return get_static_field<"ACTION_COPY", jint>(); }
	static jint ACTION_CUT() { return get_static_field<"ACTION_CUT", jint>(); }
	static jint ACTION_DISMISS() { return get_static_field<"ACTION_DISMISS", jint>(); }
	static jint ACTION_EXPAND() { return get_static_field<"ACTION_EXPAND", jint>(); }
	static jint ACTION_FOCUS() { return get_static_field<"ACTION_FOCUS", jint>(); }
	static jint ACTION_LONG_CLICK() { return get_static_field<"ACTION_LONG_CLICK", jint>(); }
	static jint ACTION_NEXT_AT_MOVEMENT_GRANULARITY() { return get_static_field<"ACTION_NEXT_AT_MOVEMENT_GRANULARITY", jint>(); }
	static jint ACTION_NEXT_HTML_ELEMENT() { return get_static_field<"ACTION_NEXT_HTML_ELEMENT", jint>(); }
	static jint ACTION_PASTE() { return get_static_field<"ACTION_PASTE", jint>(); }
	static jint ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY() { return get_static_field<"ACTION_PREVIOUS_AT_MOVEMENT_GRANULARITY", jint>(); }
	static jint ACTION_PREVIOUS_HTML_ELEMENT() { return get_static_field<"ACTION_PREVIOUS_HTML_ELEMENT", jint>(); }
	static jint ACTION_SCROLL_BACKWARD() { return get_static_field<"ACTION_SCROLL_BACKWARD", jint>(); }
	static jint ACTION_SCROLL_FORWARD() { return get_static_field<"ACTION_SCROLL_FORWARD", jint>(); }
	static jint ACTION_SELECT() { return get_static_field<"ACTION_SELECT", jint>(); }
	static jint ACTION_SET_SELECTION() { return get_static_field<"ACTION_SET_SELECTION", jint>(); }
	static jint ACTION_SET_TEXT() { return get_static_field<"ACTION_SET_TEXT", jint>(); }
	static jni::ref<android::os::Parcelable_Creator> CREATOR() { return get_static_field<"CREATOR", jni::ref<android::os::Parcelable_Creator>>(); }
	static jint FOCUS_ACCESSIBILITY() { return get_static_field<"FOCUS_ACCESSIBILITY", jint>(); }
	static jint FOCUS_INPUT() { return get_static_field<"FOCUS_INPUT", jint>(); }
	static jint MOVEMENT_GRANULARITY_CHARACTER() { return get_static_field<"MOVEMENT_GRANULARITY_CHARACTER", jint>(); }
	static jint MOVEMENT_GRANULARITY_LINE() { return get_static_field<"MOVEMENT_GRANULARITY_LINE", jint>(); }
	static jint MOVEMENT_GRANULARITY_PAGE() { return get_static_field<"MOVEMENT_GRANULARITY_PAGE", jint>(); }
	static jint MOVEMENT_GRANULARITY_PARAGRAPH() { return get_static_field<"MOVEMENT_GRANULARITY_PARAGRAPH", jint>(); }
	static jint MOVEMENT_GRANULARITY_WORD() { return get_static_field<"MOVEMENT_GRANULARITY_WORD", jint>(); }

	void setSource(jni::ref<android::view::View> source) { return call_method<"setSource", void>(source); }
	void setSource(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setSource", void>(root, virtualDescendantId); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> findFocus(jint focus) { return call_method<"findFocus", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(focus); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> focusSearch(jint direction) { return call_method<"focusSearch", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(direction); }
	jint getWindowId() { return call_method<"getWindowId", jint>(); }
	jboolean refresh() { return call_method<"refresh", jboolean>(); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getChild(jint index) { return call_method<"getChild", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(index); }
	void addChild(jni::ref<android::view::View> child) { return call_method<"addChild", void>(child); }
	jboolean removeChild(jni::ref<android::view::View> child) { return call_method<"removeChild", jboolean>(child); }
	void addChild(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"addChild", void>(root, virtualDescendantId); }
	jboolean removeChild(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"removeChild", jboolean>(root, virtualDescendantId); }
	jni::ref<java::util::List> getActionList() { return call_method<"getActionList", jni::ref<java::util::List>>(); }
	jint getActions() { return call_method<"getActions", jint>(); }
	void addAction(jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> action) { return call_method<"addAction", void>(action); }
	void addAction(jint action) { return call_method<"addAction", void>(action); }
	void removeAction(jint action) { return call_method<"removeAction", void>(action); }
	jboolean removeAction(jni::ref<android::view::accessibility::AccessibilityNodeInfo_AccessibilityAction> action) { return call_method<"removeAction", jboolean>(action); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getTraversalBefore() { return call_method<"getTraversalBefore", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	void setTraversalBefore(jni::ref<android::view::View> view) { return call_method<"setTraversalBefore", void>(view); }
	void setTraversalBefore(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setTraversalBefore", void>(root, virtualDescendantId); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getTraversalAfter() { return call_method<"getTraversalAfter", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	void setTraversalAfter(jni::ref<android::view::View> view) { return call_method<"setTraversalAfter", void>(view); }
	void setTraversalAfter(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setTraversalAfter", void>(root, virtualDescendantId); }
	void setMaxTextLength(jint max) { return call_method<"setMaxTextLength", void>(max); }
	jint getMaxTextLength() { return call_method<"getMaxTextLength", jint>(); }
	void setMovementGranularities(jint granularities) { return call_method<"setMovementGranularities", void>(granularities); }
	jint getMovementGranularities() { return call_method<"getMovementGranularities", jint>(); }
	jboolean performAction(jint action) { return call_method<"performAction", jboolean>(action); }
	jboolean performAction(jint action, jni::ref<android::os::Bundle> arguments) { return call_method<"performAction", jboolean>(action, arguments); }
	jni::ref<java::util::List> findAccessibilityNodeInfosByText(jni::ref<java::lang::String> text) { return call_method<"findAccessibilityNodeInfosByText", jni::ref<java::util::List>>(text); }
	jni::ref<java::util::List> findAccessibilityNodeInfosByViewId(jni::ref<java::lang::String> viewId) { return call_method<"findAccessibilityNodeInfosByViewId", jni::ref<java::util::List>>(viewId); }
	jni::ref<android::view::accessibility::AccessibilityWindowInfo> getWindow() { return call_method<"getWindow", jni::ref<android::view::accessibility::AccessibilityWindowInfo>>(); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getParent() { return call_method<"getParent", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	void setParent(jni::ref<android::view::View> parent) { return call_method<"setParent", void>(parent); }
	void setParent(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setParent", void>(root, virtualDescendantId); }
	void getBoundsInParent(jni::ref<android::graphics::Rect> outBounds) { return call_method<"getBoundsInParent", void>(outBounds); }
	void setBoundsInParent(jni::ref<android::graphics::Rect> bounds) { return call_method<"setBoundsInParent", void>(bounds); }
	void getBoundsInScreen(jni::ref<android::graphics::Rect> outBounds) { return call_method<"getBoundsInScreen", void>(outBounds); }
	void setBoundsInScreen(jni::ref<android::graphics::Rect> bounds) { return call_method<"setBoundsInScreen", void>(bounds); }
	jboolean isCheckable() { return call_method<"isCheckable", jboolean>(); }
	void setCheckable(jboolean checkable) { return call_method<"setCheckable", void>(checkable); }
	jboolean isChecked() { return call_method<"isChecked", jboolean>(); }
	void setChecked(jboolean checked) { return call_method<"setChecked", void>(checked); }
	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	void setFocusable(jboolean focusable) { return call_method<"setFocusable", void>(focusable); }
	jboolean isFocused() { return call_method<"isFocused", jboolean>(); }
	void setFocused(jboolean focused) { return call_method<"setFocused", void>(focused); }
	jboolean isVisibleToUser() { return call_method<"isVisibleToUser", jboolean>(); }
	void setVisibleToUser(jboolean visibleToUser) { return call_method<"setVisibleToUser", void>(visibleToUser); }
	jboolean isAccessibilityFocused() { return call_method<"isAccessibilityFocused", jboolean>(); }
	void setAccessibilityFocused(jboolean focused) { return call_method<"setAccessibilityFocused", void>(focused); }
	jboolean isSelected() { return call_method<"isSelected", jboolean>(); }
	void setSelected(jboolean selected) { return call_method<"setSelected", void>(selected); }
	jboolean isClickable() { return call_method<"isClickable", jboolean>(); }
	void setClickable(jboolean clickable) { return call_method<"setClickable", void>(clickable); }
	jboolean isLongClickable() { return call_method<"isLongClickable", jboolean>(); }
	void setLongClickable(jboolean longClickable) { return call_method<"setLongClickable", void>(longClickable); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	void setEnabled(jboolean enabled) { return call_method<"setEnabled", void>(enabled); }
	jboolean isPassword() { return call_method<"isPassword", jboolean>(); }
	void setPassword(jboolean password) { return call_method<"setPassword", void>(password); }
	jboolean isScrollable() { return call_method<"isScrollable", jboolean>(); }
	void setScrollable(jboolean scrollable) { return call_method<"setScrollable", void>(scrollable); }
	jboolean isEditable() { return call_method<"isEditable", jboolean>(); }
	void setEditable(jboolean editable) { return call_method<"setEditable", void>(editable); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> getCollectionInfo() { return call_method<"getCollectionInfo", jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo>>(); }
	void setCollectionInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionInfo> collectionInfo) { return call_method<"setCollectionInfo", void>(collectionInfo); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo> getCollectionItemInfo() { return call_method<"getCollectionItemInfo", jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo>>(); }
	void setCollectionItemInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo_CollectionItemInfo> collectionItemInfo) { return call_method<"setCollectionItemInfo", void>(collectionItemInfo); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo_RangeInfo> getRangeInfo() { return call_method<"getRangeInfo", jni::ref<android::view::accessibility::AccessibilityNodeInfo_RangeInfo>>(); }
	void setRangeInfo(jni::ref<android::view::accessibility::AccessibilityNodeInfo_RangeInfo> rangeInfo) { return call_method<"setRangeInfo", void>(rangeInfo); }
	jboolean isContentInvalid() { return call_method<"isContentInvalid", jboolean>(); }
	void setContentInvalid(jboolean contentInvalid) { return call_method<"setContentInvalid", void>(contentInvalid); }
	jint getLiveRegion() { return call_method<"getLiveRegion", jint>(); }
	void setLiveRegion(jint mode) { return call_method<"setLiveRegion", void>(mode); }
	jboolean isMultiLine() { return call_method<"isMultiLine", jboolean>(); }
	void setMultiLine(jboolean multiLine) { return call_method<"setMultiLine", void>(multiLine); }
	jboolean canOpenPopup() { return call_method<"canOpenPopup", jboolean>(); }
	void setCanOpenPopup(jboolean opensPopup) { return call_method<"setCanOpenPopup", void>(opensPopup); }
	jboolean isDismissable() { return call_method<"isDismissable", jboolean>(); }
	void setDismissable(jboolean dismissable) { return call_method<"setDismissable", void>(dismissable); }
	jni::ref<java::lang::CharSequence> getPackageName() { return call_method<"getPackageName", jni::ref<java::lang::CharSequence>>(); }
	void setPackageName(jni::ref<java::lang::CharSequence> packageName) { return call_method<"setPackageName", void>(packageName); }
	jni::ref<java::lang::CharSequence> getClassName() { return call_method<"getClassName", jni::ref<java::lang::CharSequence>>(); }
	void setClassName(jni::ref<java::lang::CharSequence> className) { return call_method<"setClassName", void>(className); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	void setText(jni::ref<java::lang::CharSequence> text) { return call_method<"setText", void>(text); }
	void setError(jni::ref<java::lang::CharSequence> error) { return call_method<"setError", void>(error); }
	jni::ref<java::lang::CharSequence> getError() { return call_method<"getError", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::CharSequence> getContentDescription() { return call_method<"getContentDescription", jni::ref<java::lang::CharSequence>>(); }
	void setContentDescription(jni::ref<java::lang::CharSequence> contentDescription) { return call_method<"setContentDescription", void>(contentDescription); }
	void setLabelFor(jni::ref<android::view::View> labeled) { return call_method<"setLabelFor", void>(labeled); }
	void setLabelFor(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setLabelFor", void>(root, virtualDescendantId); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getLabelFor() { return call_method<"getLabelFor", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	void setLabeledBy(jni::ref<android::view::View> label) { return call_method<"setLabeledBy", void>(label); }
	void setLabeledBy(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_method<"setLabeledBy", void>(root, virtualDescendantId); }
	jni::ref<android::view::accessibility::AccessibilityNodeInfo> getLabeledBy() { return call_method<"getLabeledBy", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	void setViewIdResourceName(jni::ref<java::lang::String> viewIdResName) { return call_method<"setViewIdResourceName", void>(viewIdResName); }
	jni::ref<java::lang::String> getViewIdResourceName() { return call_method<"getViewIdResourceName", jni::ref<java::lang::String>>(); }
	jint getTextSelectionStart() { return call_method<"getTextSelectionStart", jint>(); }
	jint getTextSelectionEnd() { return call_method<"getTextSelectionEnd", jint>(); }
	void setTextSelection(jint start, jint end) { return call_method<"setTextSelection", void>(start, end); }
	jint getInputType() { return call_method<"getInputType", jint>(); }
	void setInputType(jint inputType) { return call_method<"setInputType", void>(inputType); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint describeContents() { return call_method<"describeContents", jint>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo> obtain(jni::ref<android::view::View> source) { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(source); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo> obtain(jni::ref<android::view::View> root, jint virtualDescendantId) { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(root, virtualDescendantId); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo> obtain() { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(); }
	static jni::ref<android::view::accessibility::AccessibilityNodeInfo> obtain(jni::ref<android::view::accessibility::AccessibilityNodeInfo> info) { return call_static_method<"obtain", jni::ref<android::view::accessibility::AccessibilityNodeInfo>>(info); }
	void recycle() { return call_method<"recycle", void>(); }
	void writeToParcel(jni::ref<android::os::Parcel> parcel, jint flags) { return call_method<"writeToParcel", void>(parcel, flags); }
	jboolean equals(jni::ref<java::lang::Object> object) { return call_method<"equals", jboolean>(object); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AccessibilityNodeInfo(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ACCESSIBILITY_ACCESSIBILITYNODEINFO
