// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION_FWD
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing::plaf::synth { class StyleAssociation; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::plaf::synth::StyleAssociation>
{
	static constexpr fixed_string class_name = "sun/swing/plaf/synth/StyleAssociation";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION)
#define SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthStyle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::plaf::synth::StyleAssociation : public jni::object_base<"sun/swing/plaf/synth/StyleAssociation",
	java::lang::Object>
{
public:

	static jni::ref<sun::swing::plaf::synth::StyleAssociation> createStyleAssociation(jni::ref<java::lang::String> p1, jni::ref<javax::swing::plaf::synth::SynthStyle> p2) { return call_static_method<"createStyleAssociation", jni::ref<sun::swing::plaf::synth::StyleAssociation>>(p1, p2); }
	static jni::ref<sun::swing::plaf::synth::StyleAssociation> createStyleAssociation(jni::ref<java::lang::String> p1, jni::ref<javax::swing::plaf::synth::SynthStyle> p2, jint p3) { return call_static_method<"createStyleAssociation", jni::ref<sun::swing::plaf::synth::StyleAssociation>>(p1, p2, p3); }
	jint getID() { return call_method<"getID", jint>(); }
	jboolean matches(jni::ref<java::lang::CharSequence> p1) { return call_method<"matches", jboolean>(p1); }
	jni::ref<java::lang::String> getText() { return call_method<"getText", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::plaf::synth::SynthStyle> getStyle() { return call_method<"getStyle", jni::ref<javax::swing::plaf::synth::SynthStyle>>(); }

protected:

	StyleAssociation(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_PLAF_SYNTH_STYLEASSOCIATION