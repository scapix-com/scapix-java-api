// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::table { class TableColumnModel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::table::TableColumnModel>
{
	static constexpr fixed_string class_name = "javax/swing/table/TableColumnModel";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL)
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/javax/swing/ListSelectionModel.h>
#include <scapix/java_api/javax/swing/event/TableColumnModelListener.h>
#include <scapix/java_api/javax/swing/table/TableColumn.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::table::TableColumnModel : public jni::object_base<"javax/swing/table/TableColumnModel",
	java::lang::Object>
{
public:

	void addColumn(jni::ref<javax::swing::table::TableColumn> p1) { return call_method<"addColumn", void>(p1); }
	void removeColumn(jni::ref<javax::swing::table::TableColumn> p1) { return call_method<"removeColumn", void>(p1); }
	void moveColumn(jint p1, jint p2) { return call_method<"moveColumn", void>(p1, p2); }
	void setColumnMargin(jint p1) { return call_method<"setColumnMargin", void>(p1); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	jni::ref<java::util::Enumeration> getColumns() { return call_method<"getColumns", jni::ref<java::util::Enumeration>>(); }
	jint getColumnIndex(jni::ref<java::lang::Object> p1) { return call_method<"getColumnIndex", jint>(p1); }
	jni::ref<javax::swing::table::TableColumn> getColumn(jint p1) { return call_method<"getColumn", jni::ref<javax::swing::table::TableColumn>>(p1); }
	jint getColumnMargin() { return call_method<"getColumnMargin", jint>(); }
	jint getColumnIndexAtX(jint p1) { return call_method<"getColumnIndexAtX", jint>(p1); }
	jint getTotalColumnWidth() { return call_method<"getTotalColumnWidth", jint>(); }
	void setColumnSelectionAllowed(jboolean p1) { return call_method<"setColumnSelectionAllowed", void>(p1); }
	jboolean getColumnSelectionAllowed() { return call_method<"getColumnSelectionAllowed", jboolean>(); }
	jni::ref<jni::array<jint>> getSelectedColumns() { return call_method<"getSelectedColumns", jni::ref<jni::array<jint>>>(); }
	jint getSelectedColumnCount() { return call_method<"getSelectedColumnCount", jint>(); }
	void setSelectionModel(jni::ref<javax::swing::ListSelectionModel> p1) { return call_method<"setSelectionModel", void>(p1); }
	jni::ref<javax::swing::ListSelectionModel> getSelectionModel() { return call_method<"getSelectionModel", jni::ref<javax::swing::ListSelectionModel>>(); }
	void addColumnModelListener(jni::ref<javax::swing::event::TableColumnModelListener> p1) { return call_method<"addColumnModelListener", void>(p1); }
	void removeColumnModelListener(jni::ref<javax::swing::event::TableColumnModelListener> p1) { return call_method<"removeColumnModelListener", void>(p1); }

protected:

	TableColumnModel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMNMODEL
