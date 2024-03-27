// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/awt/NullComponentPeer.h>
#include <scapix/java_api/java/awt/peer/FramePeer.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER_FWD
#define SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class EmbeddedFrame_NullEmbeddedFramePeer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::EmbeddedFrame_NullEmbeddedFramePeer>
{
	static constexpr fixed_string class_name = "sun/awt/EmbeddedFrame$NullEmbeddedFramePeer";
	using base_classes = std::tuple<scapix::java_api::sun::awt::NullComponentPeer, scapix::java_api::java::awt::peer::FramePeer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER)
#define SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Dialog.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/MenuBar.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::EmbeddedFrame_NullEmbeddedFramePeer : public jni::object_base<"sun/awt/EmbeddedFrame$NullEmbeddedFramePeer",
	sun::awt::NullComponentPeer,
	java::awt::peer::FramePeer>
{
public:

	void setTitle(jni::ref<java::lang::String> p1) { return call_method<"setTitle", void>(p1); }
	void setIconImage(jni::ref<java::awt::Image> p1) { return call_method<"setIconImage", void>(p1); }
	void updateIconImages() { return call_method<"updateIconImages", void>(); }
	void setMenuBar(jni::ref<java::awt::MenuBar> p1) { return call_method<"setMenuBar", void>(p1); }
	void setResizable(jboolean p1) { return call_method<"setResizable", void>(p1); }
	void setState(jint p1) { return call_method<"setState", void>(p1); }
	jint getState() { return call_method<"getState", jint>(); }
	void setMaximizedBounds(jni::ref<java::awt::Rectangle> p1) { return call_method<"setMaximizedBounds", void>(p1); }
	void toFront() { return call_method<"toFront", void>(); }
	void toBack() { return call_method<"toBack", void>(); }
	void updateFocusableWindowState() { return call_method<"updateFocusableWindowState", void>(); }
	void updateAlwaysOnTop() { return call_method<"updateAlwaysOnTop", void>(); }
	void updateAlwaysOnTopState() { return call_method<"updateAlwaysOnTopState", void>(); }
	jni::ref<java::awt::Component> getGlobalHeavyweightFocusOwner() { return call_method<"getGlobalHeavyweightFocusOwner", jni::ref<java::awt::Component>>(); }
	void setBoundsPrivate(jint p1, jint p2, jint p3, jint p4) { return call_method<"setBoundsPrivate", void>(p1, p2, p3, p4); }
	jni::ref<java::awt::Rectangle> getBoundsPrivate() { return call_method<"getBoundsPrivate", jni::ref<java::awt::Rectangle>>(); }
	void setModalBlocked(jni::ref<java::awt::Dialog> p1, jboolean p2) { return call_method<"setModalBlocked", void>(p1, p2); }
	void restack() { return call_method<"restack", void>(); }
	jboolean isRestackSupported() { return call_method<"isRestackSupported", jboolean>(); }
	jboolean requestWindowFocus() { return call_method<"requestWindowFocus", jboolean>(); }
	void updateMinimumSize() { return call_method<"updateMinimumSize", void>(); }
	void setOpacity(jfloat p1) { return call_method<"setOpacity", void>(p1); }
	void setOpaque(jboolean p1) { return call_method<"setOpaque", void>(p1); }
	void updateWindow() { return call_method<"updateWindow", void>(); }
	void repositionSecurityWarning() { return call_method<"repositionSecurityWarning", void>(); }
	void emulateActivation(jboolean p1) { return call_method<"emulateActivation", void>(p1); }

protected:

	EmbeddedFrame_NullEmbeddedFramePeer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_EMBEDDEDFRAME_NULLEMBEDDEDFRAMEPEER