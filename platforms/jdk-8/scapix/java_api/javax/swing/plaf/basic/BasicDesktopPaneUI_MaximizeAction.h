// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractAction.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicDesktopPaneUI_MaximizeAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicDesktopPaneUI_MaximizeAction>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicDesktopPaneUI$MaximizeAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicDesktopPaneUI_MaximizeAction : public jni::object_base<"javax/swing/plaf/basic/BasicDesktopPaneUI$MaximizeAction",
	javax::swing::AbstractAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	jboolean isEnabled() { return call_method<"isEnabled", jboolean>(); }

protected:

	BasicDesktopPaneUI_MaximizeAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICDESKTOPPANEUI_MAXIMIZEACTION
