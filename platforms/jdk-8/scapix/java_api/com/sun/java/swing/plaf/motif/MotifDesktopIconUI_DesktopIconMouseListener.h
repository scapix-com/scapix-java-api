// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/MouseAdapter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifDesktopIconUI_DesktopIconMouseListener; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifDesktopIconUI_DesktopIconMouseListener>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::MouseAdapter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifDesktopIconUI_DesktopIconMouseListener : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener",
	java::awt::event::MouseAdapter>
{
public:

	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }

protected:

	MotifDesktopIconUI_DesktopIconMouseListener(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_DESKTOPICONMOUSELISTENER
