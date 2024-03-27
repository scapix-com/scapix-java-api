// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT_FWD
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::accessibility { class AccessibleContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::accessibility::AccessibleContext>
{
	static constexpr fixed_string class_name = "javax/accessibility/AccessibleContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT)
#define SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/accessibility/AccessibleAction.h>
#include <scapix/java_api/javax/accessibility/AccessibleComponent.h>
#include <scapix/java_api/javax/accessibility/AccessibleEditableText.h>
#include <scapix/java_api/javax/accessibility/AccessibleIcon.h>
#include <scapix/java_api/javax/accessibility/AccessibleRelationSet.h>
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/accessibility/AccessibleSelection.h>
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#include <scapix/java_api/javax/accessibility/AccessibleTable.h>
#include <scapix/java_api/javax/accessibility/AccessibleText.h>
#include <scapix/java_api/javax/accessibility/AccessibleValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::accessibility::AccessibleContext : public jni::object_base<"javax/accessibility/AccessibleContext",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> ACCESSIBLE_NAME_PROPERTY() { return get_static_field<"ACCESSIBLE_NAME_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_DESCRIPTION_PROPERTY() { return get_static_field<"ACCESSIBLE_DESCRIPTION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_STATE_PROPERTY() { return get_static_field<"ACCESSIBLE_STATE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_VALUE_PROPERTY() { return get_static_field<"ACCESSIBLE_VALUE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_SELECTION_PROPERTY() { return get_static_field<"ACCESSIBLE_SELECTION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_CARET_PROPERTY() { return get_static_field<"ACCESSIBLE_CARET_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_VISIBLE_DATA_PROPERTY() { return get_static_field<"ACCESSIBLE_VISIBLE_DATA_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_CHILD_PROPERTY() { return get_static_field<"ACCESSIBLE_CHILD_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY() { return get_static_field<"ACCESSIBLE_ACTIVE_DESCENDANT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_CAPTION_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_CAPTION_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_SUMMARY_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_SUMMARY_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_MODEL_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_MODEL_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_ROW_HEADER_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_ROW_HEADER_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_ROW_DESCRIPTION_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_COLUMN_HEADER_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED() { return get_static_field<"ACCESSIBLE_TABLE_COLUMN_DESCRIPTION_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_ACTION_PROPERTY() { return get_static_field<"ACCESSIBLE_ACTION_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_HYPERTEXT_OFFSET() { return get_static_field<"ACCESSIBLE_HYPERTEXT_OFFSET", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TEXT_PROPERTY() { return get_static_field<"ACCESSIBLE_TEXT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_INVALIDATE_CHILDREN() { return get_static_field<"ACCESSIBLE_INVALIDATE_CHILDREN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED() { return get_static_field<"ACCESSIBLE_TEXT_ATTRIBUTES_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESSIBLE_COMPONENT_BOUNDS_CHANGED() { return get_static_field<"ACCESSIBLE_COMPONENT_BOUNDS_CHANGED", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::accessibility::AccessibleContext> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getAccessibleName() { return call_method<"getAccessibleName", jni::ref<java::lang::String>>(); }
	void setAccessibleName(jni::ref<java::lang::String> p1) { return call_method<"setAccessibleName", void>(p1); }
	jni::ref<java::lang::String> getAccessibleDescription() { return call_method<"getAccessibleDescription", jni::ref<java::lang::String>>(); }
	void setAccessibleDescription(jni::ref<java::lang::String> p1) { return call_method<"setAccessibleDescription", void>(p1); }
	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleParent() { return call_method<"getAccessibleParent", jni::ref<javax::accessibility::Accessible>>(); }
	void setAccessibleParent(jni::ref<javax::accessibility::Accessible> p1) { return call_method<"setAccessibleParent", void>(p1); }
	jint getAccessibleIndexInParent() { return call_method<"getAccessibleIndexInParent", jint>(); }
	jint getAccessibleChildrenCount() { return call_method<"getAccessibleChildrenCount", jint>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleChild(jint p1) { return call_method<"getAccessibleChild", jni::ref<javax::accessibility::Accessible>>(p1); }
	jni::ref<java::util::Locale> getLocale() { return call_method<"getLocale", jni::ref<java::util::Locale>>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<javax::accessibility::AccessibleAction> getAccessibleAction() { return call_method<"getAccessibleAction", jni::ref<javax::accessibility::AccessibleAction>>(); }
	jni::ref<javax::accessibility::AccessibleComponent> getAccessibleComponent() { return call_method<"getAccessibleComponent", jni::ref<javax::accessibility::AccessibleComponent>>(); }
	jni::ref<javax::accessibility::AccessibleSelection> getAccessibleSelection() { return call_method<"getAccessibleSelection", jni::ref<javax::accessibility::AccessibleSelection>>(); }
	jni::ref<javax::accessibility::AccessibleText> getAccessibleText() { return call_method<"getAccessibleText", jni::ref<javax::accessibility::AccessibleText>>(); }
	jni::ref<javax::accessibility::AccessibleEditableText> getAccessibleEditableText() { return call_method<"getAccessibleEditableText", jni::ref<javax::accessibility::AccessibleEditableText>>(); }
	jni::ref<javax::accessibility::AccessibleValue> getAccessibleValue() { return call_method<"getAccessibleValue", jni::ref<javax::accessibility::AccessibleValue>>(); }
	jni::ref<jni::array<javax::accessibility::AccessibleIcon>> getAccessibleIcon() { return call_method<"getAccessibleIcon", jni::ref<jni::array<javax::accessibility::AccessibleIcon>>>(); }
	jni::ref<javax::accessibility::AccessibleRelationSet> getAccessibleRelationSet() { return call_method<"getAccessibleRelationSet", jni::ref<javax::accessibility::AccessibleRelationSet>>(); }
	jni::ref<javax::accessibility::AccessibleTable> getAccessibleTable() { return call_method<"getAccessibleTable", jni::ref<javax::accessibility::AccessibleTable>>(); }
	void firePropertyChange(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<java::lang::Object> p3) { return call_method<"firePropertyChange", void>(p1, p2, p3); }

protected:

	AccessibleContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_ACCESSIBILITY_ACCESSIBLECONTEXT