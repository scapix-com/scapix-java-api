// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultDesktopManager.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthDesktopPaneUI_SynthDesktopManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthDesktopPaneUI_SynthDesktopManager>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthDesktopPaneUI$SynthDesktopManager";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultDesktopManager, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthDesktopPaneUI_SynthDesktopManager : public jni::object_base<"javax/swing/plaf/synth/SynthDesktopPaneUI$SynthDesktopManager",
	javax::swing::DefaultDesktopManager,
	javax::swing::plaf::UIResource>
{
public:

	void maximizeFrame(jni::ref<javax::swing::JInternalFrame> p1) { return call_method<"maximizeFrame", void>(p1); }
	void iconifyFrame(jni::ref<javax::swing::JInternalFrame> p1) { return call_method<"iconifyFrame", void>(p1); }
	void deiconifyFrame(jni::ref<javax::swing::JInternalFrame> p1) { return call_method<"deiconifyFrame", void>(p1); }
	void setBoundsForFrame(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3, jint p4, jint p5) { return call_method<"setBoundsForFrame", void>(p1, p2, p3, p4, p5); }

protected:

	SynthDesktopPaneUI_SynthDesktopManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHDESKTOPPANEUI_SYNTHDESKTOPMANAGER
