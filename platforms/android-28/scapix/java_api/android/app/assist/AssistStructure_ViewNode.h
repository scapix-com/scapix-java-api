// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app::assist { class AssistStructure_ViewNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::assist::AssistStructure_ViewNode>
{
	static constexpr fixed_string class_name = "android/app/assist/AssistStructure$ViewNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE)
#define SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/graphics/Matrix.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/android/os/LocaleList.h>
#include <scapix/java_api/android/view/ViewStructure_HtmlInfo.h>
#include <scapix/java_api/android/view/autofill/AutofillId.h>
#include <scapix/java_api/android/view/autofill/AutofillValue.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::assist::AssistStructure_ViewNode : public jni::object_base<"android/app/assist/AssistStructure$ViewNode",
	java::lang::Object>
{
public:

	static jint TEXT_COLOR_UNDEFINED() { return get_static_field<"TEXT_COLOR_UNDEFINED", jint>(); }
	static jint TEXT_STYLE_BOLD() { return get_static_field<"TEXT_STYLE_BOLD", jint>(); }
	static jint TEXT_STYLE_ITALIC() { return get_static_field<"TEXT_STYLE_ITALIC", jint>(); }
	static jint TEXT_STYLE_STRIKE_THRU() { return get_static_field<"TEXT_STYLE_STRIKE_THRU", jint>(); }
	static jint TEXT_STYLE_UNDERLINE() { return get_static_field<"TEXT_STYLE_UNDERLINE", jint>(); }

	jint getId() { return call_method<"getId", jint>(); }
	jni::ref<java::lang::String> getIdPackage() { return call_method<"getIdPackage", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getIdType() { return call_method<"getIdType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getIdEntry() { return call_method<"getIdEntry", jni::ref<java::lang::String>>(); }
	jni::ref<android::view::autofill::AutofillId> getAutofillId() { return call_method<"getAutofillId", jni::ref<android::view::autofill::AutofillId>>(); }
	jint getAutofillType() { return call_method<"getAutofillType", jint>(); }
	jni::ref<jni::array<java::lang::String>> getAutofillHints() { return call_method<"getAutofillHints", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<android::view::autofill::AutofillValue> getAutofillValue() { return call_method<"getAutofillValue", jni::ref<android::view::autofill::AutofillValue>>(); }
	jni::ref<jni::array<java::lang::CharSequence>> getAutofillOptions() { return call_method<"getAutofillOptions", jni::ref<jni::array<java::lang::CharSequence>>>(); }
	jint getInputType() { return call_method<"getInputType", jint>(); }
	jint getLeft() { return call_method<"getLeft", jint>(); }
	jint getTop() { return call_method<"getTop", jint>(); }
	jint getScrollX() { return call_method<"getScrollX", jint>(); }
	jint getScrollY() { return call_method<"getScrollY", jint>(); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jni::ref<android::graphics::Matrix> getTransformation() { return call_method<"getTransformation", jni::ref<android::graphics::Matrix>>(); }
	jfloat getElevation() { return call_method<"getElevation", jfloat>(); }
	jfloat getAlpha() { return call_method<"getAlpha", jfloat>(); }
	jint getVisibility() { return call_method<"getVisibility", jint>(); }
	jboolean isAssistBlocked() { return call_method<"isAssistBlocked", jboolean>(); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }
	jboolean isClickable() { return call_method<"isClickable", jboolean>(); }
	jboolean isFocusable() { return call_method<"isFocusable", jboolean>(); }
	jboolean isFocused() { return call_method<"isFocused", jboolean>(); }
	jboolean isAccessibilityFocused() { return call_method<"isAccessibilityFocused", jboolean>(); }
	jboolean isCheckable() { return call_method<"isCheckable", jboolean>(); }
	jboolean isChecked() { return call_method<"isChecked", jboolean>(); }
	jboolean isSelected() { return call_method<"isSelected", jboolean>(); }
	jboolean isActivated() { return call_method<"isActivated", jboolean>(); }
	jboolean isOpaque() { return call_method<"isOpaque", jboolean>(); }
	jboolean isLongClickable() { return call_method<"isLongClickable", jboolean>(); }
	jboolean isContextClickable() { return call_method<"isContextClickable", jboolean>(); }
	jni::ref<java::lang::String> getClassName() { return call_method<"getClassName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::CharSequence> getContentDescription() { return call_method<"getContentDescription", jni::ref<java::lang::CharSequence>>(); }
	jni::ref<java::lang::String> getWebDomain() { return call_method<"getWebDomain", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getWebScheme() { return call_method<"getWebScheme", jni::ref<java::lang::String>>(); }
	jni::ref<android::view::ViewStructure_HtmlInfo> getHtmlInfo() { return call_method<"getHtmlInfo", jni::ref<android::view::ViewStructure_HtmlInfo>>(); }
	jni::ref<android::os::LocaleList> getLocaleList() { return call_method<"getLocaleList", jni::ref<android::os::LocaleList>>(); }
	jni::ref<java::lang::CharSequence> getText() { return call_method<"getText", jni::ref<java::lang::CharSequence>>(); }
	jint getTextSelectionStart() { return call_method<"getTextSelectionStart", jint>(); }
	jint getTextSelectionEnd() { return call_method<"getTextSelectionEnd", jint>(); }
	jint getTextColor() { return call_method<"getTextColor", jint>(); }
	jint getTextBackgroundColor() { return call_method<"getTextBackgroundColor", jint>(); }
	jfloat getTextSize() { return call_method<"getTextSize", jfloat>(); }
	jint getTextStyle() { return call_method<"getTextStyle", jint>(); }
	jni::ref<jni::array<jint>> getTextLineCharOffsets() { return call_method<"getTextLineCharOffsets", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<jint>> getTextLineBaselines() { return call_method<"getTextLineBaselines", jni::ref<jni::array<jint>>>(); }
	jni::ref<java::lang::String> getTextIdEntry() { return call_method<"getTextIdEntry", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getHint() { return call_method<"getHint", jni::ref<java::lang::String>>(); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jint getChildCount() { return call_method<"getChildCount", jint>(); }
	jni::ref<android::app::assist::AssistStructure_ViewNode> getChildAt(jint index) { return call_method<"getChildAt", jni::ref<android::app::assist::AssistStructure_ViewNode>>(index); }
	jint getMinTextEms() { return call_method<"getMinTextEms", jint>(); }
	jint getMaxTextEms() { return call_method<"getMaxTextEms", jint>(); }
	jint getMaxTextLength() { return call_method<"getMaxTextLength", jint>(); }
	jint getImportantForAutofill() { return call_method<"getImportantForAutofill", jint>(); }

protected:

	AssistStructure_ViewNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_ASSIST_ASSISTSTRUCTURE_VIEWNODE
