// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/BoxView.h>
#include <scapix/java_api/javax/swing/text/TableView_GridCell.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class TableView_TableCell; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::TableView_TableCell>
{
	static constexpr fixed_string class_name = "javax/swing/text/TableView$TableCell";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::BoxView, scapix::java_api::javax::swing::text::TableView_GridCell>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/TableView.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::TableView_TableCell : public jni::object_base<"javax/swing/text/TableView$TableCell",
	javax::swing::text::BoxView,
	javax::swing::text::TableView_GridCell>
{
public:

	static jni::ref<javax::swing::text::TableView_TableCell> new_object(jni::ref<javax::swing::text::TableView> p1, jni::ref<javax::swing::text::Element> p2) { return base_::new_object(p1, p2); }
	jint getColumnCount() { return call_method<"getColumnCount", jint>(); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	void setGridLocation(jint p1, jint p2) { return call_method<"setGridLocation", void>(p1, p2); }
	jint getGridRow() { return call_method<"getGridRow", jint>(); }
	jint getGridColumn() { return call_method<"getGridColumn", jint>(); }

protected:

	TableView_TableCell(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLECELL