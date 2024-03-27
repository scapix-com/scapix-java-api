// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPanel.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifDesktopIconUI_IconLabel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifDesktopIconUI_IconLabel>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPanel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifDesktopIconUI_IconLabel : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel",
	javax::swing::JPanel>
{
public:

	jboolean isFocusTraversable() { return call_method<"isFocusTraversable", jboolean>(); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }

protected:

	MotifDesktopIconUI_IconLabel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPICONUI_ICONLABEL