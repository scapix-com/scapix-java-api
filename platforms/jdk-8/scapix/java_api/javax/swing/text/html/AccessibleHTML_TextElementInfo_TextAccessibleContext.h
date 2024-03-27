// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/html/AccessibleHTML_HTMLAccessibleContext.h>
#include <scapix/java_api/javax/accessibility/AccessibleText.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class AccessibleHTML_TextElementInfo_TextAccessibleContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::AccessibleHTML_TextElementInfo_TextAccessibleContext>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::html::AccessibleHTML_HTMLAccessibleContext, scapix::java_api::javax::accessibility::AccessibleText>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#include <scapix/java_api/javax/swing/text/html/AccessibleHTML_ElementInfo.h>
#include <scapix/java_api/javax/swing/text/html/AccessibleHTML_TextElementInfo.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::html::AccessibleHTML_TextElementInfo_TextAccessibleContext : public jni::object_base<"javax/swing/text/html/AccessibleHTML$TextElementInfo$TextAccessibleContext",
	javax::swing::text::html::AccessibleHTML_HTMLAccessibleContext,
	javax::accessibility::AccessibleText>
{
public:

	static jni::ref<javax::swing::text::html::AccessibleHTML_TextElementInfo_TextAccessibleContext> new_object(jni::ref<javax::swing::text::html::AccessibleHTML_TextElementInfo> p1, jni::ref<javax::swing::text::html::AccessibleHTML_ElementInfo> p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::accessibility::AccessibleText> getAccessibleText() { return call_method<"getAccessibleText", jni::ref<javax::accessibility::AccessibleText>>(); }
	jni::ref<java::lang::String> getAccessibleName() { return call_method<"getAccessibleName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getAccessibleDescription() { return call_method<"getAccessibleDescription", jni::ref<java::lang::String>>(); }
	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jint getIndexAtPoint(jni::ref<java::awt::Point> p1) { return call_method<"getIndexAtPoint", jint>(p1); }
	jni::ref<java::awt::Rectangle> getCharacterBounds(jint p1) { return call_method<"getCharacterBounds", jni::ref<java::awt::Rectangle>>(p1); }
	jint getCharCount() { return call_method<"getCharCount", jint>(); }
	jint getCaretPosition() { return call_method<"getCaretPosition", jint>(); }
	jni::ref<java::lang::String> getAtIndex(jint p1, jint p2) { return call_method<"getAtIndex", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getAfterIndex(jint p1, jint p2) { return call_method<"getAfterIndex", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getBeforeIndex(jint p1, jint p2) { return call_method<"getBeforeIndex", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<javax::swing::text::AttributeSet> getCharacterAttribute(jint p1) { return call_method<"getCharacterAttribute", jni::ref<javax::swing::text::AttributeSet>>(p1); }
	jint getSelectionStart() { return call_method<"getSelectionStart", jint>(); }
	jint getSelectionEnd() { return call_method<"getSelectionEnd", jint>(); }
	jni::ref<java::lang::String> getSelectedText() { return call_method<"getSelectedText", jni::ref<java::lang::String>>(); }

protected:

	AccessibleHTML_TextElementInfo_TextAccessibleContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_TEXTELEMENTINFO_TEXTACCESSIBLECONTEXT
