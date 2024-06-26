// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/LayoutManager2.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class GridBagLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::GridBagLayout>
{
	static constexpr fixed_string class_name = "java/awt/GridBagLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::LayoutManager2, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT)
#define SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/GridBagConstraints.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::GridBagLayout : public jni::object_base<"java/awt/GridBagLayout",
	java::lang::Object,
	java::awt::LayoutManager2,
	java::io::Serializable>
{
public:

	jni::ref<jni::array<jint>> columnWidths() { return get_field<"columnWidths", jni::ref<jni::array<jint>>>(); }
	void columnWidths(jni::ref<jni::array<jint>> v) { set_field<"columnWidths", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<jint>> rowHeights() { return get_field<"rowHeights", jni::ref<jni::array<jint>>>(); }
	void rowHeights(jni::ref<jni::array<jint>> v) { set_field<"rowHeights", jni::ref<jni::array<jint>>>(v); }
	jni::ref<jni::array<jdouble>> columnWeights() { return get_field<"columnWeights", jni::ref<jni::array<jdouble>>>(); }
	void columnWeights(jni::ref<jni::array<jdouble>> v) { set_field<"columnWeights", jni::ref<jni::array<jdouble>>>(v); }
	jni::ref<jni::array<jdouble>> rowWeights() { return get_field<"rowWeights", jni::ref<jni::array<jdouble>>>(); }
	void rowWeights(jni::ref<jni::array<jdouble>> v) { set_field<"rowWeights", jni::ref<jni::array<jdouble>>>(v); }

	static jni::ref<java::awt::GridBagLayout> new_object() { return base_::new_object(); }
	void setConstraints(jni::ref<java::awt::Component> p1, jni::ref<java::awt::GridBagConstraints> p2) { return call_method<"setConstraints", void>(p1, p2); }
	jni::ref<java::awt::GridBagConstraints> getConstraints(jni::ref<java::awt::Component> p1) { return call_method<"getConstraints", jni::ref<java::awt::GridBagConstraints>>(p1); }
	jni::ref<java::awt::Point> getLayoutOrigin() { return call_method<"getLayoutOrigin", jni::ref<java::awt::Point>>(); }
	jni::ref<jni::array<jni::array<jint>>> getLayoutDimensions() { return call_method<"getLayoutDimensions", jni::ref<jni::array<jni::array<jint>>>>(); }
	jni::ref<jni::array<jni::array<jdouble>>> getLayoutWeights() { return call_method<"getLayoutWeights", jni::ref<jni::array<jni::array<jdouble>>>>(); }
	jni::ref<java::awt::Point> location(jint p1, jint p2) { return call_method<"location", jni::ref<java::awt::Point>>(p1, p2); }
	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void addLayoutComponent(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> maximumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"maximumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jfloat getLayoutAlignmentX(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentX", jfloat>(p1); }
	jfloat getLayoutAlignmentY(jni::ref<java::awt::Container> p1) { return call_method<"getLayoutAlignmentY", jfloat>(p1); }
	void invalidateLayout(jni::ref<java::awt::Container> p1) { return call_method<"invalidateLayout", void>(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GridBagLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRIDBAGLAYOUT
