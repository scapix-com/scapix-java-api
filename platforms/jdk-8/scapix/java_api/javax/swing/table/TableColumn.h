// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::table { class TableColumn; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::table::TableColumn>
{
	static constexpr fixed_string class_name = "javax/swing/table/TableColumn";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN)
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/table/TableCellEditor.h>
#include <scapix/java_api/javax/swing/table/TableCellRenderer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::table::TableColumn : public jni::object_base<"javax/swing/table/TableColumn",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<java::lang::String> COLUMN_WIDTH_PROPERTY() { return get_static_field<"COLUMN_WIDTH_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HEADER_VALUE_PROPERTY() { return get_static_field<"HEADER_VALUE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HEADER_RENDERER_PROPERTY() { return get_static_field<"HEADER_RENDERER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CELL_RENDERER_PROPERTY() { return get_static_field<"CELL_RENDERER_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::table::TableColumn> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::table::TableColumn> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::table::TableColumn> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::table::TableColumn> new_object(jint p1, jint p2, jni::ref<javax::swing::table::TableCellRenderer> p3, jni::ref<javax::swing::table::TableCellEditor> p4) { return base_::new_object(p1, p2, p3, p4); }
	void setModelIndex(jint p1) { return call_method<"setModelIndex", void>(p1); }
	jint getModelIndex() { return call_method<"getModelIndex", jint>(); }
	void setIdentifier(jni::ref<java::lang::Object> p1) { return call_method<"setIdentifier", void>(p1); }
	jni::ref<java::lang::Object> getIdentifier() { return call_method<"getIdentifier", jni::ref<java::lang::Object>>(); }
	void setHeaderValue(jni::ref<java::lang::Object> p1) { return call_method<"setHeaderValue", void>(p1); }
	jni::ref<java::lang::Object> getHeaderValue() { return call_method<"getHeaderValue", jni::ref<java::lang::Object>>(); }
	void setHeaderRenderer(jni::ref<javax::swing::table::TableCellRenderer> p1) { return call_method<"setHeaderRenderer", void>(p1); }
	jni::ref<javax::swing::table::TableCellRenderer> getHeaderRenderer() { return call_method<"getHeaderRenderer", jni::ref<javax::swing::table::TableCellRenderer>>(); }
	void setCellRenderer(jni::ref<javax::swing::table::TableCellRenderer> p1) { return call_method<"setCellRenderer", void>(p1); }
	jni::ref<javax::swing::table::TableCellRenderer> getCellRenderer() { return call_method<"getCellRenderer", jni::ref<javax::swing::table::TableCellRenderer>>(); }
	void setCellEditor(jni::ref<javax::swing::table::TableCellEditor> p1) { return call_method<"setCellEditor", void>(p1); }
	jni::ref<javax::swing::table::TableCellEditor> getCellEditor() { return call_method<"getCellEditor", jni::ref<javax::swing::table::TableCellEditor>>(); }
	void setWidth(jint p1) { return call_method<"setWidth", void>(p1); }
	jint getWidth() { return call_method<"getWidth", jint>(); }
	void setPreferredWidth(jint p1) { return call_method<"setPreferredWidth", void>(p1); }
	jint getPreferredWidth() { return call_method<"getPreferredWidth", jint>(); }
	void setMinWidth(jint p1) { return call_method<"setMinWidth", void>(p1); }
	jint getMinWidth() { return call_method<"getMinWidth", jint>(); }
	void setMaxWidth(jint p1) { return call_method<"setMaxWidth", void>(p1); }
	jint getMaxWidth() { return call_method<"getMaxWidth", jint>(); }
	void setResizable(jboolean p1) { return call_method<"setResizable", void>(p1); }
	jboolean getResizable() { return call_method<"getResizable", jboolean>(); }
	void sizeWidthToFit() { return call_method<"sizeWidthToFit", void>(); }
	void disableResizedPosting() { return call_method<"disableResizedPosting", void>(); }
	void enableResizedPosting() { return call_method<"enableResizedPosting", void>(); }
	void addPropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"addPropertyChangeListener", void>(p1); }
	void removePropertyChangeListener(jni::ref<java::beans::PropertyChangeListener> p1) { return call_method<"removePropertyChangeListener", void>(p1); }
	jni::ref<jni::array<java::beans::PropertyChangeListener>> getPropertyChangeListeners() { return call_method<"getPropertyChangeListeners", jni::ref<jni::array<java::beans::PropertyChangeListener>>>(); }

protected:

	TableColumn(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECOLUMN
