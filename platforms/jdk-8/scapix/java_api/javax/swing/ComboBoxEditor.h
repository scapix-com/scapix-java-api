// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ComboBoxEditor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ComboBoxEditor>
{
	static constexpr fixed_string class_name = "javax/swing/ComboBoxEditor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::ComboBoxEditor : public jni::object_base<"javax/swing/ComboBoxEditor",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Component> getEditorComponent() { return call_method<"getEditorComponent", jni::ref<java::awt::Component>>(); }
	void setItem(jni::ref<java::lang::Object> p1) { return call_method<"setItem", void>(p1); }
	jni::ref<java::lang::Object> getItem() { return call_method<"getItem", jni::ref<java::lang::Object>>(); }
	void selectAll() { return call_method<"selectAll", void>(); }
	void addActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"addActionListener", void>(p1); }
	void removeActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"removeActionListener", void>(p1); }

protected:

	ComboBoxEditor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_COMBOBOXEDITOR