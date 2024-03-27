// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicSliderUI.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifSliderUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifSliderUI>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifSliderUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicSliderUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/JSlider.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifSliderUI : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifSliderUI",
	javax::swing::plaf::basic::BasicSliderUI>
{
public:

	static jni::ref<com::sun::java::swing::plaf::motif::MotifSliderUI> new_object(jni::ref<javax::swing::JSlider> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	jni::ref<java::awt::Dimension> getPreferredHorizontalSize() { return call_method<"getPreferredHorizontalSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getPreferredVerticalSize() { return call_method<"getPreferredVerticalSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMinimumHorizontalSize() { return call_method<"getMinimumHorizontalSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMinimumVerticalSize() { return call_method<"getMinimumVerticalSize", jni::ref<java::awt::Dimension>>(); }
	void paintFocus(jni::ref<java::awt::Graphics> p1) { return call_method<"paintFocus", void>(p1); }
	void paintTrack(jni::ref<java::awt::Graphics> p1) { return call_method<"paintTrack", void>(p1); }
	void paintThumb(jni::ref<java::awt::Graphics> p1) { return call_method<"paintThumb", void>(p1); }

protected:

	MotifSliderUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFSLIDERUI