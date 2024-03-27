// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/FocusListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTableUI_FocusHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTableUI_FocusHandler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTableUI$FocusHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::FocusListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/FocusEvent.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicTableUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicTableUI_FocusHandler : public jni::object_base<"javax/swing/plaf/basic/BasicTableUI$FocusHandler",
	java::lang::Object,
	java::awt::event::FocusListener>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicTableUI_FocusHandler> new_object(jni::ref<javax::swing::plaf::basic::BasicTableUI> p1) { return base_::new_object(p1); }
	void focusGained(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusGained", void>(p1); }
	void focusLost(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusLost", void>(p1); }

protected:

	BasicTableUI_FocusHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEUI_FOCUSHANDLER
