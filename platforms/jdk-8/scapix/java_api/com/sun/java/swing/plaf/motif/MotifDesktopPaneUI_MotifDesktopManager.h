// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultDesktopManager.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifDesktopPaneUI_MotifDesktopManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifDesktopPaneUI_MotifDesktopManager>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$MotifDesktopManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultDesktopManager, scapix::java_api::java::io::Serializable, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::swing::plaf::motif::MotifDesktopPaneUI_MotifDesktopManager : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifDesktopPaneUI$MotifDesktopManager",
	javax::swing::DefaultDesktopManager,
	java::io::Serializable,
	javax::swing::plaf::UIResource>
{
public:

	void setBoundsForFrame(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"setBoundsForFrame", void>(p1, p2, p3, p4, p5); }
	void beginDraggingFrame(jni::ref<javax::swing::JComponent> p1) { return call_method<"beginDraggingFrame", void>(p1); }
	void dragFrame(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3) { return call_method<"dragFrame", void>(p1, p2, p3); }
	void endDraggingFrame(jni::ref<javax::swing::JComponent> p1) { return call_method<"endDraggingFrame", void>(p1); }
	void beginResizingFrame(jni::ref<javax::swing::JComponent> p1, jint p2) { return call_method<"beginResizingFrame", void>(p1, p2); }
	void resizeFrame(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"resizeFrame", void>(p1, p2, p3, p4, p5); }
	void endResizingFrame(jni::ref<javax::swing::JComponent> p1) { return call_method<"endResizingFrame", void>(p1); }
	void iconifyFrame(jni::ref<javax::swing::JInternalFrame> p1) { return call_method<"iconifyFrame", void>(p1); }

protected:

	MotifDesktopPaneUI_MotifDesktopManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFDESKTOPPANEUI_MOTIFDESKTOPMANAGER
