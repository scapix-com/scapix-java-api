// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/LayoutManager.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthInternalFrameTitlePane_SynthTitlePaneLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthInternalFrameTitlePane_SynthTitlePaneLayout>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthInternalFrameTitlePane$SynthTitlePaneLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::LayoutManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthInternalFrameTitlePane_SynthTitlePaneLayout : public jni::object_base<"javax/swing/plaf/synth/SynthInternalFrameTitlePane$SynthTitlePaneLayout",
	java::lang::Object,
	java::awt::LayoutManager>
{
public:

	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }

protected:

	SynthInternalFrameTitlePane_SynthTitlePaneLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHINTERNALFRAMETITLEPANE_SYNTHTITLEPANELAYOUT
