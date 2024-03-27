// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class CellRendererPane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::CellRendererPane>
{
	static constexpr fixed_string class_name = "javax/swing/CellRendererPane";
	using base_classes = std::tuple<scapix::java_api::java::awt::Container, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::CellRendererPane : public jni::object_base<"javax/swing/CellRendererPane",
	java::awt::Container,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<javax::swing::CellRendererPane> new_object() { return base_::new_object(); }
	void invalidate() { return call_method<"invalidate", void>(); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	void update(jni::ref<java::awt::Graphics> p1) { return call_method<"update", void>(p1); }
	void paintComponent(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Component> p2, jni::ref<java::awt::Container> p3, jint p4, jint p5, jint p6, jint p7, jboolean p8) { return call_method<"paintComponent", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void paintComponent(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Component> p2, jni::ref<java::awt::Container> p3, jint p4, jint p5, jint p6, jint p7) { return call_method<"paintComponent", void>(p1, p2, p3, p4, p5, p6, p7); }
	void paintComponent(jni::ref<java::awt::Graphics> p1, jni::ref<java::awt::Component> p2, jni::ref<java::awt::Container> p3, jni::ref<java::awt::Rectangle> p4) { return call_method<"paintComponent", void>(p1, p2, p3, p4); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	CellRendererPane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_CELLRENDERERPANE