// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifRadioButtonMenuItemUI_ChangeHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI_ChangeHandler>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$ChangeHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::ChangeListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI_ChangeHandler : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$ChangeHandler",
	java::lang::Object,
	javax::swing::event::ChangeListener,
	java::io::Serializable>
{
public:

	void stateChanged(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"stateChanged", void>(p1); }

protected:

	MotifRadioButtonMenuItemUI_ChangeHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFRADIOBUTTONMENUITEMUI_CHANGEHANDLER
