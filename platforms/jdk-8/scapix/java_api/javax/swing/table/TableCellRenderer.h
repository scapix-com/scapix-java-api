// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::table { class TableCellRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::table::TableCellRenderer>
{
	static constexpr fixed_string class_name = "javax/swing/table/TableCellRenderer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/swing/JTable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::table::TableCellRenderer : public jni::object_base<"javax/swing/table/TableCellRenderer",
	java::lang::Object>
{
public:

	jni::ref<java::awt::Component> getTableCellRendererComponent(jni::ref<javax::swing::JTable> p1, jni::ref<java::lang::Object> p2, jboolean p3, jboolean p4, jint p5, jint p6) { return call_method<"getTableCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5, p6); }

protected:

	TableCellRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TABLE_TABLECELLRENDERER
