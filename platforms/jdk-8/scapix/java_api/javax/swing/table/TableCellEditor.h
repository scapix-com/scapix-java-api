// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/CellEditor.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::table { class TableCellEditor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::table::TableCellEditor>
{
	static constexpr fixed_string class_name = "javax/swing/table/TableCellEditor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::CellEditor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR)
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/swing/JTable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::table::TableCellEditor : public jni::object_base<"javax/swing/table/TableCellEditor",
	java::lang::Object,
	javax::swing::CellEditor>
{
public:

	jni::ref<java::awt::Component> getTableCellEditorComponent(jni::ref<javax::swing::JTable> p1, jni::ref<java::lang::Object> p2, jboolean p3, jint p4, jint p5) { return call_method<"getTableCellEditorComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }

protected:

	TableCellEditor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLEDITOR
