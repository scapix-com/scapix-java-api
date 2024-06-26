// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf { class ToolTipUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::ToolTipUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/ToolTipUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ComponentUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::ToolTipUI : public jni::object_base<"javax/swing/plaf/ToolTipUI",
	javax::swing::plaf::ComponentUI>
{
public:

	static jni::ref<javax::swing::plaf::ToolTipUI> new_object() { return base_::new_object(); }

protected:

	ToolTipUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_TOOLTIPUI
