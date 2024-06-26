// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/peer/KeyboardFocusManagerPeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL_FWD
#define SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class KeyboardFocusManagerPeerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::KeyboardFocusManagerPeerImpl>
{
	static constexpr fixed_string class_name = "sun/awt/KeyboardFocusManagerPeerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::peer::KeyboardFocusManagerPeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL)
#define SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Window.h>
#include <scapix/java_api/sun/awt/CausedFocusEvent_Cause.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::KeyboardFocusManagerPeerImpl : public jni::object_base<"sun/awt/KeyboardFocusManagerPeerImpl",
	java::lang::Object,
	java::awt::peer::KeyboardFocusManagerPeer>
{
public:

	static jint SNFH_FAILURE() { return get_static_field<"SNFH_FAILURE", jint>(); }
	static jint SNFH_SUCCESS_HANDLED() { return get_static_field<"SNFH_SUCCESS_HANDLED", jint>(); }
	static jint SNFH_SUCCESS_PROCEED() { return get_static_field<"SNFH_SUCCESS_PROCEED", jint>(); }

	static jni::ref<sun::awt::KeyboardFocusManagerPeerImpl> new_object() { return base_::new_object(); }
	void clearGlobalFocusOwner(jni::ref<java::awt::Window> p1) { return call_method<"clearGlobalFocusOwner", void>(p1); }
	static jboolean shouldFocusOnClick(jni::ref<java::awt::Component> p1) { return call_static_method<"shouldFocusOnClick", jboolean>(p1); }
	static jboolean deliverFocus(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Component> p2, jboolean p3, jboolean p4, jlong p5, jni::ref<sun::awt::CausedFocusEvent_Cause> p6, jni::ref<java::awt::Component> p7) { return call_static_method<"deliverFocus", jboolean>(p1, p2, p3, p4, p5, p6, p7); }
	static jboolean requestFocusFor(jni::ref<java::awt::Component> p1, jni::ref<sun::awt::CausedFocusEvent_Cause> p2) { return call_static_method<"requestFocusFor", jboolean>(p1, p2); }
	static jint shouldNativelyFocusHeavyweight(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Component> p2, jboolean p3, jboolean p4, jlong p5, jni::ref<sun::awt::CausedFocusEvent_Cause> p6) { return call_static_method<"shouldNativelyFocusHeavyweight", jint>(p1, p2, p3, p4, p5, p6); }
	static void removeLastFocusRequest(jni::ref<java::awt::Component> p1) { return call_static_method<"removeLastFocusRequest", void>(p1); }
	static jboolean processSynchronousLightweightTransfer(jni::ref<java::awt::Component> p1, jni::ref<java::awt::Component> p2, jboolean p3, jboolean p4, jlong p5) { return call_static_method<"processSynchronousLightweightTransfer", jboolean>(p1, p2, p3, p4, p5); }

protected:

	KeyboardFocusManagerPeerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_KEYBOARDFOCUSMANAGERPEERIMPL
