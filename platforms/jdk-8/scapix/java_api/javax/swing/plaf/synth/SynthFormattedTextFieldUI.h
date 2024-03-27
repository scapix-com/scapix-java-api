// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/synth/SynthTextFieldUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthFormattedTextFieldUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthFormattedTextFieldUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthFormattedTextFieldUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::synth::SynthTextFieldUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::synth::SynthFormattedTextFieldUI : public jni::object_base<"javax/swing/plaf/synth/SynthFormattedTextFieldUI",
	javax::swing::plaf::synth::SynthTextFieldUI>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthFormattedTextFieldUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void paintBorder(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }

protected:

	SynthFormattedTextFieldUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHFORMATTEDTEXTFIELDUI