// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthTabbedPaneUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthTabbedPaneUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthTabbedPaneUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicTabbedPaneUI, scapix::java_api::java::beans::PropertyChangeListener, scapix::java_api::javax::swing::plaf::synth::SynthUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::synth::SynthTabbedPaneUI : public jni::object_base<"javax/swing/plaf/synth/SynthTabbedPaneUI",
	javax::swing::plaf::basic::BasicTabbedPaneUI,
	java::beans::PropertyChangeListener,
	javax::swing::plaf::synth::SynthUI>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthTabbedPaneUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	jni::ref<javax::swing::plaf::synth::SynthContext> getContext(jni::ref<javax::swing::JComponent> p1) { return call_method<"getContext", jni::ref<javax::swing::plaf::synth::SynthContext>>(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void update(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"update", void>(p1, p2); }
	void paintBorder(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }

protected:

	SynthTabbedPaneUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI
