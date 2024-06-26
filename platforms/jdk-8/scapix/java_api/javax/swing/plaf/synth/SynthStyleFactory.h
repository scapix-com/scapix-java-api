// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthStyleFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthStyleFactory>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthStyleFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/synth/Region.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthStyle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::synth::SynthStyleFactory : public jni::object_base<"javax/swing/plaf/synth/SynthStyleFactory",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthStyleFactory> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::plaf::synth::SynthStyle> getStyle(jni::ref<javax::swing::JComponent> p1, jni::ref<javax::swing::plaf::synth::Region> p2) { return call_method<"getStyle", jni::ref<javax::swing::plaf::synth::SynthStyle>>(p1, p2); }

protected:

	SynthStyleFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHSTYLEFACTORY
