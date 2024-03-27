// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class DefaultCellEditor_EditorDelegate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::DefaultCellEditor_EditorDelegate>
{
	static constexpr fixed_string class_name = "javax/swing/DefaultCellEditor$EditorDelegate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::java::awt::event::ItemListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE)
#define SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/awt/event/ItemEvent.h>
#include <scapix/java_api/java/util/EventObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::DefaultCellEditor_EditorDelegate : public jni::object_base<"javax/swing/DefaultCellEditor$EditorDelegate",
	java::lang::Object,
	java::awt::event::ActionListener,
	java::awt::event::ItemListener,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::Object> getCellEditorValue() { return call_method<"getCellEditorValue", jni::ref<java::lang::Object>>(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }
	jboolean isCellEditable(jni::ref<java::util::EventObject> p1) { return call_method<"isCellEditable", jboolean>(p1); }
	jboolean shouldSelectCell(jni::ref<java::util::EventObject> p1) { return call_method<"shouldSelectCell", jboolean>(p1); }
	jboolean startCellEditing(jni::ref<java::util::EventObject> p1) { return call_method<"startCellEditing", jboolean>(p1); }
	jboolean stopCellEditing() { return call_method<"stopCellEditing", jboolean>(); }
	void cancelCellEditing() { return call_method<"cancelCellEditing", void>(); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	void itemStateChanged(jni::ref<java::awt::event::ItemEvent> p1) { return call_method<"itemStateChanged", void>(p1); }

protected:

	DefaultCellEditor_EditorDelegate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_DEFAULTCELLEDITOR_EDITORDELEGATE
