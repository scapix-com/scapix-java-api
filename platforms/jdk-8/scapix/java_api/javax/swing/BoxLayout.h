// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/LayoutManager2.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class BoxLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::BoxLayout>
{
	static constexpr fixed_string class_name = "javax/swing/BoxLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::LayoutManager2, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT)
#define SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::BoxLayout : public jni::object_base<"javax/swing/BoxLayout",
	java::lang::Object,
	java::awt::LayoutManager2,
	java::io::Serializable>
{
public:

	static jint X_AXIS() { return get_static_field<"X_AXIS", jint>(); }
	static jint Y_AXIS() { return get_static_field<"Y_AXIS", jint>(); }
	static jint LINE_AXIS() { return get_static_field<"LINE_AXIS", jint>(); }
	static jint PAGE_AXIS() { return get_static_field<"PAGE_AXIS", jint>(); }

	static jni::ref<javax::swing::BoxLayout> new_object(jni::ref<java::awt::Container> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<java::awt::Container> getTarget() { return call_method<"getTarget", jni::ref<java::awt::Container>>(); }
	jint getAxis() { return call_method<"getAxis", jint>(); }
	void invalidateLayout(jni::ref<java::awt::Container> p1) { return call_method<"invalidateLayout", void>(p1); }
	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	void addLayoutComponent(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> maximumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"maximumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jfloat getLayoutAlignmentX(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentX", jfloat>(p1); }
	jfloat getLayoutAlignmentY(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentY", jfloat>(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }

protected:

	BoxLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_BOXLAYOUT
