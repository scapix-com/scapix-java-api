// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/PopupMenuListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicPopupMenuUI_BasicPopupMenuListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicPopupMenuUI_BasicPopupMenuListener>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicPopupMenuUI$BasicPopupMenuListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::PopupMenuListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/PopupMenuEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicPopupMenuUI_BasicPopupMenuListener : public jni::object_base<"javax/swing/plaf/basic/BasicPopupMenuUI$BasicPopupMenuListener",
	java::lang::Object,
	javax::swing::event::PopupMenuListener>
{
public:

	void popupMenuCanceled(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuCanceled", void>(p1); }
	void popupMenuWillBecomeInvisible(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuWillBecomeInvisible", void>(p1); }
	void popupMenuWillBecomeVisible(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuWillBecomeVisible", void>(p1); }

protected:

	BasicPopupMenuUI_BasicPopupMenuListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICPOPUPMENUUI_BASICPOPUPMENULISTENER