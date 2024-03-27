// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component_AccessibleAWTComponent.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleAction.h>
#include <scapix/java_api/javax/accessibility/AccessibleValue.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Checkbox_AccessibleAWTCheckbox; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Checkbox_AccessibleAWTCheckbox>
{
	static constexpr fixed_string class_name = "java/awt/Checkbox$AccessibleAWTCheckbox";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component_AccessibleAWTComponent, scapix::java_api::java::awt::event::ItemListener, scapix::java_api::javax::accessibility::AccessibleAction, scapix::java_api::javax::accessibility::AccessibleValue>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX)
#define SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Checkbox.h>
#include <scapix/java_api/java/awt/event/ItemEvent.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Checkbox_AccessibleAWTCheckbox : public jni::object_base<"java/awt/Checkbox$AccessibleAWTCheckbox",
	java::awt::Component_AccessibleAWTComponent,
	java::awt::event::ItemListener,
	javax::accessibility::AccessibleAction,
	javax::accessibility::AccessibleValue>
{
public:

	static jni::ref<java::awt::Checkbox_AccessibleAWTCheckbox> new_object(jni::ref<java::awt::Checkbox> p1) { return base_::new_object(p1); }
	void itemStateChanged(jni::ref<java::awt::event::ItemEvent> p1) { return call_method<"itemStateChanged", void>(p1); }
	jni::ref<javax::accessibility::AccessibleAction> getAccessibleAction() { return call_method<"getAccessibleAction", jni::ref<javax::accessibility::AccessibleAction>>(); }
	jni::ref<javax::accessibility::AccessibleValue> getAccessibleValue() { return call_method<"getAccessibleValue", jni::ref<javax::accessibility::AccessibleValue>>(); }
	jint getAccessibleActionCount() { return call_method<"getAccessibleActionCount", jint>(); }
	jni::ref<java::lang::String> getAccessibleActionDescription(jint p1) { return call_method<"getAccessibleActionDescription", jni::ref<java::lang::String>>(p1); }
	jboolean doAccessibleAction(jint p1) { return call_method<"doAccessibleAction", jboolean>(p1); }
	jni::ref<java::lang::Number> getCurrentAccessibleValue() { return call_method<"getCurrentAccessibleValue", jni::ref<java::lang::Number>>(); }
	jboolean setCurrentAccessibleValue(jni::ref<java::lang::Number> p1) { return call_method<"setCurrentAccessibleValue", jboolean>(p1); }
	jni::ref<java::lang::Number> getMinimumAccessibleValue() { return call_method<"getMinimumAccessibleValue", jni::ref<java::lang::Number>>(); }
	jni::ref<java::lang::Number> getMaximumAccessibleValue() { return call_method<"getMaximumAccessibleValue", jni::ref<java::lang::Number>>(); }
	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }

protected:

	Checkbox_AccessibleAWTCheckbox(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_ACCESSIBLEAWTCHECKBOX
