// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::peer { class KeyboardFocusManagerPeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::peer::KeyboardFocusManagerPeer>
{
	static constexpr fixed_string class_name = "java/awt/peer/KeyboardFocusManagerPeer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER)
#define SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Window.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::peer::KeyboardFocusManagerPeer : public jni::object_base<"java/awt/peer/KeyboardFocusManagerPeer",
	java::lang::Object>
{
public:

	void setCurrentFocusedWindow(jni::ref<java::awt::Window> p1) { return call_method<"setCurrentFocusedWindow", void>(p1); }
	jni::ref<java::awt::Window> getCurrentFocusedWindow() { return call_method<"getCurrentFocusedWindow", jni::ref<java::awt::Window>>(); }
	void setCurrentFocusOwner(jni::ref<java::awt::Component> p1) { return call_method<"setCurrentFocusOwner", void>(p1); }
	jni::ref<java::awt::Component> getCurrentFocusOwner() { return call_method<"getCurrentFocusOwner", jni::ref<java::awt::Component>>(); }
	void clearGlobalFocusOwner(jni::ref<java::awt::Window> p1) { return call_method<"clearGlobalFocusOwner", void>(p1); }

protected:

	KeyboardFocusManagerPeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PEER_KEYBOARDFOCUSMANAGERPEER