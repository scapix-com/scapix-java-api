// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicComboPopup.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthComboPopup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthComboPopup>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthComboPopup";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicComboPopup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComboBox.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthComboPopup : public jni::object_base<"javax/swing/plaf/synth/SynthComboPopup",
	javax::swing::plaf::basic::BasicComboPopup>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthComboPopup> new_object(jni::ref<javax::swing::JComboBox> p1) { return base_::new_object(p1); }

protected:

	SynthComboPopup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHCOMBOPOPUP
