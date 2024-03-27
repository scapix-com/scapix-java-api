// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleExtendedText; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleExtendedText>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleExtendedText";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleTextSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleExtendedText : public jni::object_base<"javax/accessibility/AccessibleExtendedText",
	java::lang::Object>
{
public:

	static jint LINE() { return get_static_field<"LINE", jint>(); }
	static jint ATTRIBUTE_RUN() { return get_static_field<"ATTRIBUTE_RUN", jint>(); }

	jni::ref<java::lang::String> getTextRange(jint p1, jint p2) { return call_method<"getTextRange", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<javax::accessibility::AccessibleTextSequence> getTextSequenceAt(jint p1, jint p2) { return call_method<"getTextSequenceAt", jni::ref<javax::accessibility::AccessibleTextSequence>>(p1, p2); }
	jni::ref<javax::accessibility::AccessibleTextSequence> getTextSequenceAfter(jint p1, jint p2) { return call_method<"getTextSequenceAfter", jni::ref<javax::accessibility::AccessibleTextSequence>>(p1, p2); }
	jni::ref<javax::accessibility::AccessibleTextSequence> getTextSequenceBefore(jint p1, jint p2) { return call_method<"getTextSequenceBefore", jni::ref<javax::accessibility::AccessibleTextSequence>>(p1, p2); }
	jni::ref<java::awt::Rectangle> getTextBounds(jint p1, jint p2) { return call_method<"getTextBounds", jni::ref<java::awt::Rectangle>>(p1, p2); }

protected:

	AccessibleExtendedText(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLEEXTENDEDTEXT