// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthLookAndFeel_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthLookAndFeel_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthLookAndFeel$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::beans::PropertyChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthLookAndFeel_Handler : public jni::object_base<"javax/swing/plaf/synth/SynthLookAndFeel$Handler",
	java::lang::Object,
	java::beans::PropertyChangeListener>
{
public:

	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }

protected:

	SynthLookAndFeel_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHLOOKANDFEEL_HANDLER
