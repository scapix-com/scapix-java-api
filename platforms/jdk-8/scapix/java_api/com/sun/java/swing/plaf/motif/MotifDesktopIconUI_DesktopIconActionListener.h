// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifDesktopIconUI_DesktopIconActionListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifDesktopIconUI_DesktopIconActionListener>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifDesktopIconUI_DesktopIconActionListener : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	MotifDesktopIconUI_DesktopIconActionListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONACTIONLISTENER
