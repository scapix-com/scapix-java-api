// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JLabel.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL_FWD
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing::plaf::synth { class SynthFileChooserUIImpl_AlignedLabel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::plaf::synth::SynthFileChooserUIImpl_AlignedLabel>
{
	static constexpr fixed_string class_name = "sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JLabel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL)
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::swing::plaf::synth::SynthFileChooserUIImpl_AlignedLabel : public jni::object_base<"sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel",
	javax::swing::JLabel>
{
public:

	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }

protected:

	SynthFileChooserUIImpl_AlignedLabel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_SYNTHFILECHOOSERUIIMPL_ALIGNEDLABEL
