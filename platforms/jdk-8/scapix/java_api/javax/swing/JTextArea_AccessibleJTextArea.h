// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/JTextComponent_AccessibleJTextComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTextArea_AccessibleJTextArea; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTextArea_AccessibleJTextArea>
{
	static constexpr fixed_string class_name = "javax/swing/JTextArea$AccessibleJTextArea";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::JTextComponent_AccessibleJTextComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTextArea_AccessibleJTextArea : public jni::object_base<"javax/swing/JTextArea$AccessibleJTextArea",
	javax::swing::text::JTextComponent_AccessibleJTextComponent>
{
public:

	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }

protected:

	JTextArea_AccessibleJTextArea(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTEXTAREA_ACCESSIBLEJTEXTAREA
