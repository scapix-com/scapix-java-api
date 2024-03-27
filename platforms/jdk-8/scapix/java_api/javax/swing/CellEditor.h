// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class CellEditor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::CellEditor>
{
	static constexpr fixed_string class_name = "javax/swing/CellEditor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/EventObject.h>
#include <scapix/java_api/javax/swing/event/CellEditorListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::CellEditor : public jni::object_base<"javax/swing/CellEditor",
	java::lang::Object>
{
public:

	jni::ref<java::lang::Object> getCellEditorValue() { return call_method<"getCellEditorValue", jni::ref<java::lang::Object>>(); }
	jboolean isCellEditable(jni::ref<java::util::EventObject> p1) { return call_method<"isCellEditable", jboolean>(p1); }
	jboolean shouldSelectCell(jni::ref<java::util::EventObject> p1) { return call_method<"shouldSelectCell", jboolean>(p1); }
	jboolean stopCellEditing() { return call_method<"stopCellEditing", jboolean>(); }
	void cancelCellEditing() { return call_method<"cancelCellEditing", void>(); }
	void addCellEditorListener(jni::ref<javax::swing::event::CellEditorListener> p1) { return call_method<"addCellEditorListener", void>(p1); }
	void removeCellEditorListener(jni::ref<javax::swing::event::CellEditorListener> p1) { return call_method<"removeCellEditorListener", void>(p1); }

protected:

	CellEditor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLEDITOR
