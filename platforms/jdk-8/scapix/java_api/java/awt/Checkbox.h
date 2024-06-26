// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/ItemSelectable.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Checkbox; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Checkbox>
{
	static constexpr fixed_string class_name = "java/awt/Checkbox";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component, scapix::java_api::java::awt::ItemSelectable, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX)
#define SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/CheckboxGroup.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Checkbox : public jni::object_base<"java/awt/Checkbox",
	java::awt::Component,
	java::awt::ItemSelectable,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::awt::Checkbox> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::Checkbox> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::Checkbox> new_object(jni::ref<java::lang::String> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::Checkbox> new_object(jni::ref<java::lang::String> p1, jboolean p2, jni::ref<java::awt::CheckboxGroup> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<java::awt::Checkbox> new_object(jni::ref<java::lang::String> p1, jni::ref<java::awt::CheckboxGroup> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	void addNotify() { return call_method<"addNotify", void>(); }
	jni::ref<java::lang::String> getLabel() { return call_method<"getLabel", jni::ref<java::lang::String>>(); }
	void setLabel(jni::ref<java::lang::String> p1) { return call_method<"setLabel", void>(p1); }
	jboolean getState() { return call_method<"getState", jboolean>(); }
	void setState(jboolean p1) { return call_method<"setState", void>(p1); }
	jni::ref<jni::array<java::lang::Object>> getSelectedObjects() { return call_method<"getSelectedObjects", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::awt::CheckboxGroup> getCheckboxGroup() { return call_method<"getCheckboxGroup", jni::ref<java::awt::CheckboxGroup>>(); }
	void setCheckboxGroup(jni::ref<java::awt::CheckboxGroup> p1) { return call_method<"setCheckboxGroup", void>(p1); }
	void addItemListener(jni::ref<java::awt::event::ItemListener> p1) { return call_method<"addItemListener", void>(p1); }
	void removeItemListener(jni::ref<java::awt::event::ItemListener> p1) { return call_method<"removeItemListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::ItemListener>> getItemListeners() { return call_method<"getItemListeners", jni::ref<jni::array<java::awt::event::ItemListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	Checkbox(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CHECKBOX
