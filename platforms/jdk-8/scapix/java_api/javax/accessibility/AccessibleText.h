// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleText; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleText>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleText";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/text/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleText : public jni::object_base<"javax/accessibility/AccessibleText",
	java::lang::Object>
{
public:

	static jint CHARACTER() { return get_static_field<"CHARACTER", jint>(); }
	static jint WORD() { return get_static_field<"WORD", jint>(); }
	static jint SENTENCE() { return get_static_field<"SENTENCE", jint>(); }

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

	AccessibleText(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLETEXT
