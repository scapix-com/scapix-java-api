// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicSplitPaneUI_KeyboardEndHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicSplitPaneUI_KeyboardEndHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardEndHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicSplitPaneUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicSplitPaneUI_KeyboardEndHandler : public jni::object_base<"javax/swing/plaf/basic/BasicSplitPaneUI$KeyboardEndHandler",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicSplitPaneUI_KeyboardEndHandler> new_object(jni::ref<javax::swing::plaf::basic::BasicSplitPaneUI> p1) { return base_::new_object(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	BasicSplitPaneUI_KeyboardEndHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSPLITPANEUI_KEYBOARDENDHANDLER
