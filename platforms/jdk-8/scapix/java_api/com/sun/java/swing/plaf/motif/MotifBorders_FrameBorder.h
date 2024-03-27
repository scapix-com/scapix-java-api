// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/AbstractBorder.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::swing::plaf::motif { class MotifBorders_FrameBorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::swing::plaf::motif::MotifBorders_FrameBorder>
{
	static constexpr fixed_string class_name = "com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::AbstractBorder, scapix::java_api::javax::swing::plaf::UIResource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::java::swing::plaf::motif::MotifBorders_FrameBorder : public jni::object_base<"com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder",
	javax::swing::border::AbstractBorder,
	javax::swing::plaf::UIResource>
{
public:

	static jint BORDER_SIZE() { return get_static_field<"BORDER_SIZE", jint>(); }

	static jni::ref<com::sun::java::swing::plaf::motif::MotifBorders_FrameBorder> new_object(jni::ref<javax::swing::JComponent> p1) { return base_::new_object(p1); }
	void setComponent(jni::ref<javax::swing::JComponent> p1) { return call_method<"setComponent", void>(p1); }
	jni::ref<javax::swing::JComponent> component() { return call_method<"component", jni::ref<javax::swing::JComponent>>(); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1, p2); }
	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }

protected:

	MotifBorders_FrameBorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_SWING_PLAF_MOTIF_MOTIFBORDERS_FRAMEBORDER
