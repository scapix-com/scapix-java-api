// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_CANVAS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_CANVAS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Canvas; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Canvas>
{
	static constexpr fixed_string class_name = "java/awt/Canvas";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CANVAS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_CANVAS)
#define SCAPIX_JAVA_API_JAVA_AWT_CANVAS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/BufferCapabilities.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/image/BufferStrategy.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Canvas : public jni::object_base<"java/awt/Canvas",
	java::awt::Component,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::awt::Canvas> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::Canvas> new_object(jni::ref<java::awt::GraphicsConfiguration> p1) { return base_::new_object(p1); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void paint(jni::ref<java::awt::Graphics> p1) { return call_method<"paint", void>(p1); }
	void update(jni::ref<java::awt::Graphics> p1) { return call_method<"update", void>(p1); }
	void createBufferStrategy(jint p1) { return call_method<"createBufferStrategy", void>(p1); }
	void createBufferStrategy(jint p1, jni::ref<java::awt::BufferCapabilities> p2) { return call_method<"createBufferStrategy", void>(p1, p2); }
	jni::ref<java::awt::image::BufferStrategy> getBufferStrategy() { return call_method<"getBufferStrategy", jni::ref<java::awt::image::BufferStrategy>>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	Canvas(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_CANVAS