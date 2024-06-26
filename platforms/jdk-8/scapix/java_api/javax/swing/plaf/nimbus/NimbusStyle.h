// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/synth/SynthStyle.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::nimbus { class NimbusStyle; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::nimbus::NimbusStyle>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/nimbus/NimbusStyle";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::synth::SynthStyle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Painter.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthPainter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::nimbus::NimbusStyle : public jni::object_base<"javax/swing/plaf/nimbus/NimbusStyle",
	javax::swing::plaf::synth::SynthStyle>
{
public:

	static jni::ref<java::lang::String> LARGE_KEY() { return get_static_field<"LARGE_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SMALL_KEY() { return get_static_field<"SMALL_KEY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> MINI_KEY() { return get_static_field<"MINI_KEY", jni::ref<java::lang::String>>(); }
	static jdouble LARGE_SCALE() { return get_static_field<"LARGE_SCALE", jdouble>(); }
	static jdouble SMALL_SCALE() { return get_static_field<"SMALL_SCALE", jdouble>(); }
	static jdouble MINI_SCALE() { return get_static_field<"MINI_SCALE", jdouble>(); }

	void installDefaults(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"installDefaults", void>(p1); }
	jni::ref<java::awt::Insets> getInsets(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getInsets", jni::ref<java::awt::Insets>>(p1, p2); }
	jni::ref<javax::swing::plaf::synth::SynthPainter> getPainter(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"getPainter", jni::ref<javax::swing::plaf::synth::SynthPainter>>(p1); }
	jboolean isOpaque(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"isOpaque", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::lang::Object> p2) { return call_method<"get", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<javax::swing::Painter> getBackgroundPainter(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"getBackgroundPainter", jni::ref<javax::swing::Painter>>(p1); }
	jni::ref<javax::swing::Painter> getForegroundPainter(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"getForegroundPainter", jni::ref<javax::swing::Painter>>(p1); }
	jni::ref<javax::swing::Painter> getBorderPainter(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"getBorderPainter", jni::ref<javax::swing::Painter>>(p1); }

protected:

	NimbusStyle(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_NIMBUS_NIMBUSSTYLE
