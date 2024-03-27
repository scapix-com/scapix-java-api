// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/ListCellRenderer.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER_FWD
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing::plaf::synth { class SynthFileChooserUIImpl_FilterComboBoxRenderer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::plaf::synth::SynthFileChooserUIImpl_FilterComboBoxRenderer>
{
	static constexpr fixed_string class_name = "sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxRenderer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::ListCellRenderer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER)
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/swing/JList.h>
#include <scapix/java_api/javax/swing/filechooser/FileFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::plaf::synth::SynthFileChooserUIImpl_FilterComboBoxRenderer : public jni::object_base<"sun/swing/plaf/synth/SynthFileChooserUIImpl$FilterComboBoxRenderer",
	java::lang::Object,
	javax::swing::ListCellRenderer>
{
public:

	jni::ref<java::awt::Component> getListCellRendererComponent(jni::ref<javax::swing::JList> p1, jni::ref<javax::swing::filechooser::FileFilter> p2, jint p3, jboolean p4, jboolean p5) { return call_method<"getListCellRendererComponent", jni::ref<java::awt::Component>>(p1, p2, p3, p4, p5); }

protected:

	SynthFileChooserUIImpl_FilterComboBoxRenderer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_FILTERCOMBOBOXRENDERER
