// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/DefaultListCellRenderer_UIResource.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthListUI_SynthListCellRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthListUI_SynthListCellRenderer>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthListUI$SynthListCellRenderer";
	using base_classes = std::tuple<scapix::java_api::javax::swing::DefaultListCellRenderer_UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JList.h>
#include <scapix/java_api/javax/swing/border/Border.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthListUI_SynthListCellRenderer : public jni::object_base<"javax/swing/plaf/synth/SynthListUI$SynthListCellRenderer",
	javax::swing::DefaultListCellRenderer_UIResource>
{
public:

	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	void setBorder(jni::ref<javax::swing::border::Border> p1) { return call_method<"setBorder", void>(p1); }
	jni::ref<java::awt::Component> getListCellRendererComponent(jni::ref<javax::swing::JList> p1, jni::ref<java::lang::Object> p2, jint p3, jboolean p4, jboolean p5) { return call_method<"getListCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }

protected:

	SynthListUI_SynthListCellRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLISTUI_SYNTHLISTCELLRENDERER
