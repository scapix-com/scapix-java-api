// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/LayoutManager.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class GridLayout; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::GridLayout>
{
	static constexpr fixed_string class_name = "java/awt/GridLayout";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::LayoutManager, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT)
#define SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::GridLayout : public jni::object_base<"java/awt/GridLayout",
	java::lang::Object,
	java::awt::LayoutManager,
	java::io::Serializable>
{
public:

	static jni::ref<java::awt::GridLayout> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::GridLayout> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::GridLayout> new_object(jint p1, jint p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jint getRows() { return call_method<"getRows", jint>(); }
	void setRows(jint p1) { return call_method<"setRows", void>(p1); }
	jint getColumns() { return call_method<"getColumns", jint>(); }
	void setColumns(jint p1) { return call_method<"setColumns", void>(p1); }
	jint getHgap() { return call_method<"getHgap", jint>(); }
	void setHgap(jint p1) { return call_method<"setHgap", void>(p1); }
	jint getVgap() { return call_method<"getVgap", jint>(); }
	void setVgap(jint p1) { return call_method<"setVgap", void>(p1); }
	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	GridLayout(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRIDLAYOUT