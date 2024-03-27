// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/AbstractBorder.h>
#include <scapix/java_api/javax/swing/plaf/UIResource.h>
#include <scapix/java_api/javax/swing/SwingConstants.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalBorders_ToolBarBorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalBorders_ToolBarBorder>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalBorders$ToolBarBorder";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::AbstractBorder, scapix::java_api::javax::swing::plaf::UIResource, scapix::java_api::javax::swing::SwingConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalBorders_ToolBarBorder : public jni::object_base<"javax/swing/plaf/metal/MetalBorders$ToolBarBorder",
	javax::swing::border::AbstractBorder,
	javax::swing::plaf::UIResource,
	javax::swing::SwingConstants>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalBorders_ToolBarBorder> new_object() { return base_::new_object(); }
	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1, p2); }

protected:

	MetalBorders_ToolBarBorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TOOLBARBORDER
