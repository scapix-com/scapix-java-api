// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultListCellRenderer.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifFileChooserUI_DirectoryCellRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifFileChooserUI_DirectoryCellRenderer>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifFileChooserUI$DirectoryCellRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultListCellRenderer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/JList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifFileChooserUI_DirectoryCellRenderer : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifFileChooserUI$DirectoryCellRenderer",
	javax::swing::DefaultListCellRenderer>
{
public:

	jni::ref<java::awt::Component> getListCellRendererComponent(jni::ref<javax::swing::JList> p1, jni::ref<java::lang::Object> p2, jint p3, jboolean p4, jboolean p5) { return call_method<"getListCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }

protected:

	MotifFileChooserUI_DirectoryCellRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFFILECHOOSERUI_DIRECTORYCELLRENDERER
