// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/border/AbstractBorder.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::metal { class MetalBorders_TableHeaderBorder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::metal::MetalBorders_TableHeaderBorder>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/metal/MetalBorders$TableHeaderBorder";
	using base_classes = std::tuple<scapix::java_api::javax::swing::border::AbstractBorder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Insets.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::metal::MetalBorders_TableHeaderBorder : public jni::object_base<"javax/swing/plaf/metal/MetalBorders$TableHeaderBorder",
	javax::swing::border::AbstractBorder>
{
public:

	static jni::ref<javax::swing::plaf::metal::MetalBorders_TableHeaderBorder> new_object() { return base_::new_object(); }
	void paintBorder(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"paintBorder", void>(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::awt::Insets> getBorderInsets(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Insets> p2) { return call_method<"getBorderInsets", jni::ref<java::awt::Insets>>(p1, p2); }

protected:

	MetalBorders_TableHeaderBorder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_METAL_METALBORDERS_TABLEHEADERBORDER
