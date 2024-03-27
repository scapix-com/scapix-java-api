// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthUI.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthInternalFrameTitlePane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthInternalFrameTitlePane>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthInternalFrameTitlePane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicInternalFrameTitlePane, scapix::java_api::javax::swing::plaf::synth::SynthUI, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JInternalFrame.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthInternalFrameTitlePane : public jni::object_base<"javax/swing/plaf/synth/SynthInternalFrameTitlePane",
	javax::swing::plaf::basic::BasicInternalFrameTitlePane,
	javax::swing::plaf::synth::SynthUI,
	java::beans::PropertyChangeListener>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthInternalFrameTitlePane> new_object(jni::ref<javax::swing::JInternalFrame> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::plaf::synth::SynthContext> getContext(jni::ref<javax::swing::JComponent> p1) { return call_method<"getContext", jni::ref<javax::swing::plaf::synth::SynthContext>>(p1); }
	jni::ref<javax::swing::plaf::synth::SynthContext> getContext(jni::ref<javax::swing::JComponent> p1, jint p2) { return call_method<"getContext", jni::ref<javax::swing::plaf::synth::SynthContext>>(p1, p2); }
	void paintComponent(jni::ref<java::awt::Graphics> p1) { return call_method<"paintComponent", void>(p1); }
	void paintBorder(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	SynthInternalFrameTitlePane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE
