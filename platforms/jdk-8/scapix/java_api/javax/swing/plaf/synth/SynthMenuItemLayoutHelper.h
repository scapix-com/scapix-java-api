// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/swing/MenuItemLayoutHelper.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::synth { class SynthMenuItemLayoutHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::synth::SynthMenuItemLayoutHelper>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/synth/SynthMenuItemLayoutHelper";
	using base_classes = std::tuple<scapix::java_api::sun::swing::MenuItemLayoutHelper>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/JMenuItem.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthContext.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <scapix/java_api/javax/swing/plaf/synth/SynthStyle.h>
#include <scapix/java_api/sun/swing/MenuItemLayoutHelper_ColumnAlignment.h>
#include <scapix/java_api/sun/swing/StringUIClientPropertyKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::synth::SynthMenuItemLayoutHelper : public jni::object_base<"javax/swing/plaf/synth/SynthMenuItemLayoutHelper",
	sun::swing::MenuItemLayoutHelper>
{
public:

	static jni::ref<sun::swing::StringUIClientPropertyKey> MAX_ACC_OR_ARROW_WIDTH() { return get_static_field<"MAX_ACC_OR_ARROW_WIDTH", jni::ref<sun::swing::StringUIClientPropertyKey>>(); }
	static jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> LTR_ALIGNMENT_1() { return get_static_field<"LTR_ALIGNMENT_1", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }
	static jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> LTR_ALIGNMENT_2() { return get_static_field<"LTR_ALIGNMENT_2", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }
	static jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> RTL_ALIGNMENT_1() { return get_static_field<"RTL_ALIGNMENT_1", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }
	static jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> RTL_ALIGNMENT_2() { return get_static_field<"RTL_ALIGNMENT_2", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }

	static jni::ref<javax::swing::plaf::synth::SynthMenuItemLayoutHelper> new_object(jni::ref<javax::swing::plaf::synth::SynthContext> p1, jni::ref<javax::swing::plaf::synth::SynthContext> p2, jni::ref<javax::swing::JMenuItem> p3, jni::ref<javax::swing::Icon> p4, jni::ref<javax::swing::Icon> p5, jni::ref<java::awt::Rectangle> p6, jint p7, jni::ref<java::lang::String> p8, jboolean p9, jboolean p10, jni::ref<java::lang::String> p11) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
	jni::ref<javax::swing::plaf::synth::SynthContext> getContext() { return call_method<"getContext", jni::ref<javax::swing::plaf::synth::SynthContext>>(); }
	jni::ref<javax::swing::plaf::synth::SynthContext> getAccContext() { return call_method<"getAccContext", jni::ref<javax::swing::plaf::synth::SynthContext>>(); }
	jni::ref<javax::swing::plaf::synth::SynthStyle> getStyle() { return call_method<"getStyle", jni::ref<javax::swing::plaf::synth::SynthStyle>>(); }
	jni::ref<javax::swing::plaf::synth::SynthStyle> getAccStyle() { return call_method<"getAccStyle", jni::ref<javax::swing::plaf::synth::SynthStyle>>(); }
	jni::ref<javax::swing::plaf::synth::SynthGraphicsUtils> getGraphicsUtils() { return call_method<"getGraphicsUtils", jni::ref<javax::swing::plaf::synth::SynthGraphicsUtils>>(); }
	jni::ref<javax::swing::plaf::synth::SynthGraphicsUtils> getAccGraphicsUtils() { return call_method<"getAccGraphicsUtils", jni::ref<javax::swing::plaf::synth::SynthGraphicsUtils>>(); }
	jboolean alignAcceleratorText() { return call_method<"alignAcceleratorText", jboolean>(); }
	jint getMaxAccOrArrowWidth() { return call_method<"getMaxAccOrArrowWidth", jint>(); }
	jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> getLTRColumnAlignment() { return call_method<"getLTRColumnAlignment", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }
	jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment> getRTLColumnAlignment() { return call_method<"getRTLColumnAlignment", jni::ref<sun::swing::MenuItemLayoutHelper_ColumnAlignment>>(); }

protected:

	SynthMenuItemLayoutHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_SYNTH_SYNTHMENUITEMLAYOUTHELPER