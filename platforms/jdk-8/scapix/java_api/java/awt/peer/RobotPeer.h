// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class RobotPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::RobotPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/RobotPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Rectangle.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::RobotPeer : public jni::object_base<"java/awt/peer/RobotPeer",
	java::lang::Object>
{
public:

	void mouseMove(jint p1, jint p2) { return call_method<"mouseMove", void>(p1, p2); }
	void mousePress(jint p1) { return call_method<"mousePress", void>(p1); }
	void mouseRelease(jint p1) { return call_method<"mouseRelease", void>(p1); }
	void mouseWheel(jint p1) { return call_method<"mouseWheel", void>(p1); }
	void keyPress(jint p1) { return call_method<"keyPress", void>(p1); }
	void keyRelease(jint p1) { return call_method<"keyRelease", void>(p1); }
	jint getRGBPixel(jint p1, jint p2) { return call_method<"getRGBPixel", jint>(p1, p2); }
	jni::ref<jni::array<jint>> getRGBPixels(jni::ref<java::awt::Rectangle> p1) { return call_method<"getRGBPixels", jni::ref<jni::array<jint>>>(p1); }
	void dispose() { return call_method<"dispose", void>(); }

protected:

	RobotPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_ROBOTPEER
