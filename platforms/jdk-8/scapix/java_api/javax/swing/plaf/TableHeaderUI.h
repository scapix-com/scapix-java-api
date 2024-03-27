// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class TableHeaderUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::TableHeaderUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/TableHeaderUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::TableHeaderUI : public jni::object_base<"javax/swing/plaf/TableHeaderUI",
	javax::swing::plaf::ComponentUI>
{
public:

	static jni::ref<javax::swing::plaf::TableHeaderUI> new_object() { return base_::new_object(); }

protected:

	TableHeaderUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TABLEHEADERUI