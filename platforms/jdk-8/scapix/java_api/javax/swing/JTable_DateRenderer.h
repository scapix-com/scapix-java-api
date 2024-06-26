// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/table/DefaultTableCellRenderer_UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTable_DateRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTable_DateRenderer>
{
	static constexpr fixed_string class_name = "javax/swing/JTable$DateRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::table::DefaultTableCellRenderer_UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::JTable_DateRenderer : public jni::object_base<"javax/swing/JTable$DateRenderer",
	javax::swing::table::DefaultTableCellRenderer_UIResource>
{
public:

	static jni::ref<javax::swing::JTable_DateRenderer> new_object() { return base_::new_object(); }
	void setValue(jni::ref<java::lang::Object> p1) { return call_method<"setValue", void>(p1); }

protected:

	JTable_DateRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABLE_DATERENDERER
