// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_ROBOT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_ROBOT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Robot; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Robot>
{
	static constexpr fixed_string class_name = "java/awt/Robot";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_ROBOT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_ROBOT)
#define SCAPIX_JAVA_API_JAVA_AWT_ROBOT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/GraphicsDevice.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/image/BufferedImage.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Robot : public jni::object_base<"java/awt/Robot",
	java::lang::Object>
{
public:

	static jni::ref<java::awt::Robot> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::Robot> new_object(jni::ref<java::awt::GraphicsDevice> p1) { return base_::new_object(p1); }
	void mouseMove(jint p1, jint p2) { return call_method<"mouseMove", void>(p1, p2); }
	void mousePress(jint p1) { return call_method<"mousePress", void>(p1); }
	void mouseRelease(jint p1) { return call_method<"mouseRelease", void>(p1); }
	void mouseWheel(jint p1) { return call_method<"mouseWheel", void>(p1); }
	void keyPress(jint p1) { return call_method<"keyPress", void>(p1); }
	void keyRelease(jint p1) { return call_method<"keyRelease", void>(p1); }
	jni::ref<java::awt::Color> getPixelColor(jint p1, jint p2) { return call_method<"getPixelColor", jni::ref<java::awt::Color>>(p1, p2); }
	jni::ref<java::awt::image::BufferedImage> createScreenCapture(jni::ref<java::awt::Rectangle> p1) { return call_method<"createScreenCapture", jni::ref<java::awt::image::BufferedImage>>(p1); }
	jboolean isAutoWaitForIdle() { return call_method<"isAutoWaitForIdle", jboolean>(); }
	void setAutoWaitForIdle(jboolean p1) { return call_method<"setAutoWaitForIdle", void>(p1); }
	jint getAutoDelay() { return call_method<"getAutoDelay", jint>(); }
	void setAutoDelay(jint p1) { return call_method<"setAutoDelay", void>(p1); }
	void delay(jint p1) { return call_method<"delay", void>(p1); }
	void waitForIdle() { return call_method<"waitForIdle", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Robot(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_ROBOT
