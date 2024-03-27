// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/synth/SynthArrowButton.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthTabbedPaneUI_SynthScrollableTabButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthTabbedPaneUI_SynthScrollableTabButton>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthTabbedPaneUI$SynthScrollableTabButton";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::synth::SynthArrowButton, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthTabbedPaneUI_SynthScrollableTabButton : public jni::object_base<"javax/swing/plaf/synth/SynthTabbedPaneUI$SynthScrollableTabButton",
	javax::swing::plaf::synth::SynthArrowButton,
	javax::swing::plaf::UIResource>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthTabbedPaneUI_SynthScrollableTabButton> new_object(jni::ref<javax::swing::plaf::synth::SynthTabbedPaneUI> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	SynthTabbedPaneUI_SynthScrollableTabButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHTABBEDPANEUI_SYNTHSCROLLABLETABBUTTON
