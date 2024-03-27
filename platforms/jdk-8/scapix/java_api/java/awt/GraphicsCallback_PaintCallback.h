// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/GraphicsCallback.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class GraphicsCallback_PaintCallback; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::GraphicsCallback_PaintCallback>
{
	static constexpr fixed_string class_name = "java/awt/GraphicsCallback$PaintCallback";
	using base_classes = std::tuple<scapix::java_api::java::awt::GraphicsCallback>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK)
#define SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Graphics.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::awt::GraphicsCallback_PaintCallback : public jni::object_base<"java/awt/GraphicsCallback$PaintCallback",
	java::awt::GraphicsCallback>
{
public:

	void run(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Graphics> p2) { return call_method<"run", void>(p1, p2); }

protected:

	GraphicsCallback_PaintCallback(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_GRAPHICSCALLBACK_PAINTCALLBACK
