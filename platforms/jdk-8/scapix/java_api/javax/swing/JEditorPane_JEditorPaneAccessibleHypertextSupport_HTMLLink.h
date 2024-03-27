// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/accessibility/AccessibleHyperlink.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JEditorPane_JEditorPaneAccessibleHypertextSupport_HTMLLink; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JEditorPane_JEditorPaneAccessibleHypertextSupport_HTMLLink>
{
	static constexpr fixed_string class_name = "javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink";
	using base_classes = std::tuple<scapix::java_api::javax::accessibility::AccessibleHyperlink>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK)
#define SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JEditorPane_JEditorPaneAccessibleHypertextSupport.h>
#include <scapix/java_api/javax/swing/text/Element.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JEditorPane_JEditorPaneAccessibleHypertextSupport_HTMLLink : public jni::object_base<"javax/swing/JEditorPane$JEditorPaneAccessibleHypertextSupport$HTMLLink",
	javax::accessibility::AccessibleHyperlink>
{
public:

	static jni::ref<javax::swing::JEditorPane_JEditorPaneAccessibleHypertextSupport_HTMLLink> new_object(jni::ref<javax::swing::JEditorPane_JEditorPaneAccessibleHypertextSupport> p1, jni::ref<javax::swing::text::Element> p2) { return base_::new_object(p1, p2); }
	jboolean isValid() { return call_method<"isValid", jboolean>(); }
	jint getAccessibleActionCount() { return call_method<"getAccessibleActionCount", jint>(); }
	jboolean doAccessibleAction(jint p1) { return call_method<"doAccessibleAction", jboolean>(p1); }
	jni::ref<java::lang::String> getAccessibleActionDescription(jint p1) { return call_method<"getAccessibleActionDescription", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::Object> getAccessibleActionObject(jint p1) { return call_method<"getAccessibleActionObject", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> getAccessibleActionAnchor(jint p1) { return call_method<"getAccessibleActionAnchor", jni::ref<java::lang::Object>>(p1); }
	jint getStartIndex() { return call_method<"getStartIndex", jint>(); }
	jint getEndIndex() { return call_method<"getEndIndex", jint>(); }

protected:

	JEditorPane_JEditorPaneAccessibleHypertextSupport_HTMLLink(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JEDITORPANE_JEDITORPANEACCESSIBLEHYPERTEXTSUPPORT_HTMLLINK
