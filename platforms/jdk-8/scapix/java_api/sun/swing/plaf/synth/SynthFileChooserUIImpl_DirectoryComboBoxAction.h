// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/AbstractAction.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION_FWD
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing::plaf::synth { class SynthFileChooserUIImpl_DirectoryComboBoxAction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::plaf::synth::SynthFileChooserUIImpl_DirectoryComboBoxAction>
{
	static constexpr fixed_string class_name = "sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxAction";
	using base_classes = std::tuple<scapix::java_api::javax::swing::AbstractAction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION)
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::plaf::synth::SynthFileChooserUIImpl_DirectoryComboBoxAction : public jni::object_base<"sun/swing/plaf/synth/SynthFileChooserUIImpl$DirectoryComboBoxAction",
	javax::swing::AbstractAction>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	SynthFileChooserUIImpl_DirectoryComboBoxAction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_DIRECTORYCOMBOBOXACTION
