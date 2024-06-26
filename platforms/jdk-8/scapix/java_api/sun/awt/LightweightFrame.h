// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Frame.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME_FWD
#define SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt { class LightweightFrame; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::LightweightFrame>
{
	static constexpr fixed_string class_name = "sun/awt/LightweightFrame";
	using base_classes = std::tuple<scapix::java_api::java::awt::Frame>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME)
#define SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/awt/Image.h>
#include <scapix/java_api/java/awt/MenuBar.h>
#include <scapix/java_api/java/awt/MenuComponent.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/dnd/DragGestureEvent.h>
#include <scapix/java_api/java/awt/dnd/DragGestureListener.h>
#include <scapix/java_api/java/awt/dnd/DragGestureRecognizer.h>
#include <scapix/java_api/java/awt/dnd/DragSource.h>
#include <scapix/java_api/java/awt/dnd/DropTarget.h>
#include <scapix/java_api/java/awt/dnd/peer/DragSourceContextPeer.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::awt::LightweightFrame : public jni::object_base<"sun/awt/LightweightFrame",
	java::awt::Frame>
{
public:

	static jni::ref<sun::awt::LightweightFrame> new_object() { return base_::new_object(); }
	jni::ref<java::awt::Container> getParent() { return call_method<"getParent", jni::ref<java::awt::Container>>(); }
	jni::ref<java::awt::Graphics> getGraphics() { return call_method<"getGraphics", jni::ref<java::awt::Graphics>>(); }
	jboolean isResizable() { return call_method<"isResizable", jboolean>(); }
	void setTitle(jni::ref<java::lang::String> p1) { return call_method<"setTitle", void>(p1); }
	void setIconImage(jni::ref<java::awt::Image> p1) { return call_method<"setIconImage", void>(p1); }
	void setIconImages(jni::ref<java::util::List> p1) { return call_method<"setIconImages", void>(p1); }
	void setMenuBar(jni::ref<java::awt::MenuBar> p1) { return call_method<"setMenuBar", void>(p1); }
	void setResizable(jboolean p1) { return call_method<"setResizable", void>(p1); }
	void remove(jni::ref<java::awt::MenuComponent> p1) { return call_method<"remove", void>(p1); }
	void toFront() { return call_method<"toFront", void>(); }
	void toBack() { return call_method<"toBack", void>(); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void emulateActivation(jboolean p1) { return call_method<"emulateActivation", void>(p1); }
	void grabFocus() { return call_method<"grabFocus", void>(); }
	void ungrabFocus() { return call_method<"ungrabFocus", void>(); }
	jint getScaleFactor() { return call_method<"getScaleFactor", jint>(); }
	void notifyDisplayChanged(jint p1) { return call_method<"notifyDisplayChanged", void>(p1); }
	jni::ref<java::awt::Rectangle> getHostBounds() { return call_method<"getHostBounds", jni::ref<java::awt::Rectangle>>(); }
	void setHostBounds(jint p1, jint p2, jint p3, jint p4) { return call_method<"setHostBounds", void>(p1, p2, p3, p4); }
	jni::ref<java::awt::dnd::DragGestureRecognizer> createDragGestureRecognizer(jni::ref<java::lang::Class> p1, jni::ref<java::awt::dnd::DragSource> p2, jni::ref<java::awt::Component> p3, jint p4, jni::ref<java::awt::dnd::DragGestureListener> p5) { return call_method<"createDragGestureRecognizer", jni::ref<java::awt::dnd::DragGestureRecognizer>>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::dnd::peer::DragSourceContextPeer> createDragSourceContextPeer(jni::ref<java::awt::dnd::DragGestureEvent> p1) { return call_method<"createDragSourceContextPeer", jni::ref<java::awt::dnd::peer::DragSourceContextPeer>>(p1); }
	void addDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"addDropTarget", void>(p1); }
	void removeDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"removeDropTarget", void>(p1); }

protected:

	LightweightFrame(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_LIGHTWEIGHTFRAME
