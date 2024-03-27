// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifMenuItemUI_ChangeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifMenuItemUI_ChangeHandler>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::ChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifMenuItemUI_ChangeHandler : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler",
	java::lang::Object,
	javax::swing::event::ChangeListener>
{
public:

	void stateChanged(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"stateChanged", void>(p1); }

protected:

	MotifMenuItemUI_ChangeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFMENUITEMUI_CHANGEHANDLER
