// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthGraphicsUtils; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthGraphicsUtils>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthGraphicsUtils";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Font.h>
#include <scapix/java_api/java/awt/FontMetrics.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::synth::SynthGraphicsUtils : public jni::object_base<"javax/swing/plaf/synth/SynthGraphicsUtils",
	java::lang::Object>
{
public:

	static jni::ref<javax::swing::plaf::synth::SynthGraphicsUtils> new_object() { return base_::new_object(); }
	void drawLine(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::lang::Object> p2, jni::ref<java::awt::Graphics> p3, jint p4, jint p5, jint p6, jint p7) { return call_method<"drawLine", void>(p1, p2, p3, p4, p5, p6, p7); }
	void drawLine(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::lang::Object> p2, jni::ref<java::awt::Graphics> p3, jint p4, jint p5, jint p6, jint p7, jni::ref<java::lang::Object> p8) { return call_method<"drawLine", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	jni::ref<java::lang::String> layoutText(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::FontMetrics> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4, jint p5, jint p6, jint p7, jint p8, jni::ref<java::awt::Rectangle> p9, jni::ref<java::awt::Rectangle> p10, jni::ref<java::awt::Rectangle> p11, jint p12) { return call_method<"layoutText", jni::ref<java::lang::String>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
	jint computeStringWidth(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Font> p2, jni::ref<java::awt::FontMetrics> p3, jni::ref<java::lang::String> p4) { return call_method<"computeStringWidth", jint>(p1, p2, p3, p4); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Font> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Font> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	jint getMaximumCharHeight(jni::ref<javax::swing::plaf::synth::SynthContext> p1) { return call_method<"getMaximumCharHeight", jint>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Font> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
	void paintText(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jni::ref<java::lang::String> p3, jni::ref<java::awt::Rectangle> p4, jint p5) { return call_method<"paintText", void>(p1, p2, p3, p4, p5); }
	void paintText(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jni::ref<java::lang::String> p3, jint p4, jint p5, jint p6) { return call_method<"paintText", void>(p1, p2, p3, p4, p5, p6); }
	void paintText(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<java::awt::Graphics> p2, jni::ref<java::lang::String> p3, jni::ref<javax::swing::Icon> p4, jint p5, jint p6, jint p7, jint p8, jint p9, jint p10, jint p11) { return call_method<"paintText", void>(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }

protected:

	SynthGraphicsUtils(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHGRAPHICSUTILS