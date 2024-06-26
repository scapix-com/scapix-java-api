// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/LayoutManager2.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class SpringLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::SpringLayout>
{
	static constexpr fixed_string class_name = "javax/swing/SpringLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::LayoutManager2>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT)
#define SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/Spring.h>
#include <scapix/java_api/javax/swing/SpringLayout_Constraints.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::SpringLayout : public jni::object_base<"javax/swing/SpringLayout",
	java::lang::Object,
	java::awt::LayoutManager2>
{
public:

	using Constraints = SpringLayout_Constraints;

	static jni::ref<java::lang::String> NORTH() { return get_static_field<"NORTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SOUTH() { return get_static_field<"SOUTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EAST() { return get_static_field<"EAST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WEST() { return get_static_field<"WEST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HORIZONTAL_CENTER() { return get_static_field<"HORIZONTAL_CENTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VERTICAL_CENTER() { return get_static_field<"VERTICAL_CENTER", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> BASELINE() { return get_static_field<"BASELINE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> WIDTH() { return get_static_field<"WIDTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HEIGHT() { return get_static_field<"HEIGHT", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::SpringLayout> new_object() { return base_::new_object(); }
	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> maximumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"maximumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	void addLayoutComponent(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	jfloat getLayoutAlignmentX(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentX", jfloat>(p1); }
	jfloat getLayoutAlignmentY(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentY", jfloat>(p1); }
	void invalidateLayout(jni::ref<java::awt::Container> p1) { return call_method<"invalidateLayout", void>(p1); }
	void putConstraint(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2, jint p3, jni::ref<java::lang::String> p4, jni::ref<java::awt::Component> p5) { return call_method<"putConstraint", void>(p1, p2, p3, p4, p5); }
	void putConstraint(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2, jni::ref<javax::swing::Spring> p3, jni::ref<java::lang::String> p4, jni::ref<java::awt::Component> p5) { return call_method<"putConstraint", void>(p1, p2, p3, p4, p5); }
	jni::ref<javax::swing::SpringLayout_Constraints> getConstraints(jni::ref<java::awt::Component> p1) { return call_method<"getConstraints", jni::ref<javax::swing::SpringLayout_Constraints>>(p1); }
	jni::ref<javax::swing::Spring> getConstraint(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"getConstraint", jni::ref<javax::swing::Spring>>(p1, p2); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }

protected:

	SpringLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_SPRINGLAYOUT
