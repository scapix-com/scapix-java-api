// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/text/BoxView.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::text { class TableView_TableRow; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::text::TableView_TableRow>
{
	static constexpr fixed_string class_name = "javax/swing/text/TableView$TableRow";
	using base_classes = std::tuple<scapix::java_api::javax::swing::text::BoxView>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW)
#define SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/text/Element.h>
#include <scapix/java_api/javax/swing/text/TableView.h>
#include <scapix/java_api/javax/swing/text/View.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::text::TableView_TableRow : public jni::object_base<"javax/swing/text/TableView$TableRow",
	javax::swing::text::BoxView>
{
public:

	static jni::ref<javax::swing::text::TableView_TableRow> new_object(jni::ref<javax::swing::text::TableView> p1, jni::ref<javax::swing::text::Element> p2) { return base_::new_object(p1, p2); }
	void replace(jint p1, jint p2, jni::ref<jni::array<javax::swing::text::View>> p3) { return call_method<"replace", void>(p1, p2, p3); }
	jint getResizeWeight(jint p1) { return call_method<"getResizeWeight", jint>(p1); }

protected:

	TableView_TableRow(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TEXT_TABLEVIEW_TABLEROW
