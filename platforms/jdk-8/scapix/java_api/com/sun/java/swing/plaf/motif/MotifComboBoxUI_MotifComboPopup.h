// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifComboBoxUI_MotifComboPopup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifComboBoxUI_MotifComboPopup>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/swing/plaf/motif/MotifComboBoxUI.h>
#include <scapix/java_api/java/awt/event/KeyListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/javax/swing/JComboBox.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifComboBoxUI_MotifComboPopup : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifComboBoxUI$MotifComboPopup",
	javax::swing::plaf::basic::BasicComboPopup>
{
public:

	static jni::ref<com::sun::java::swing::plaf::motif::MotifComboBoxUI_MotifComboPopup> new_object(jni::ref<com::sun::java::swing::plaf::motif::MotifComboBoxUI> p1, jni::ref<javax::swing::JComboBox> p2) { return base_::new_object(p1, p2); }
	jni::ref<java::awt::event::MouseMotionListener> createListMouseMotionListener() { return call_method<"createListMouseMotionListener", jni::ref<java::awt::event::MouseMotionListener>>(); }
	jni::ref<java::awt::event::KeyListener> createKeyListener() { return call_method<"createKeyListener", jni::ref<java::awt::event::KeyListener>>(); }

protected:

	MotifComboBoxUI_MotifComboPopup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFCOMBOBOXUI_MOTIFCOMBOPOPUP