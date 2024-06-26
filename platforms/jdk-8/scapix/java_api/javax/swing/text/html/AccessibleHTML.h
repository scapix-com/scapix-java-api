// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text::html { class AccessibleHTML; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::html::AccessibleHTML>
{
	static constexpr fixed_string class_name = "javax/swing/text/html/AccessibleHTML";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JEditorPane.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::text::html::AccessibleHTML : public jni::object_base<"javax/swing/text/html/AccessibleHTML",
	java::lang::Object,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<javax::swing::text::html::AccessibleHTML> new_object(jni::ref<javax::swing::JEditorPane> p1) { return base_::new_object(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	AccessibleHTML(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_HTML_ACCESSIBLEHTML
