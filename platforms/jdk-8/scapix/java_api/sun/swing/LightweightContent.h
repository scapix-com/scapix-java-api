// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT_FWD
#define SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::swing { class LightweightContent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::swing::LightweightContent>
{
	static constexpr fixed_string class_name = "sun/swing/LightweightContent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT)
#define SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Cursor.h>
#include <scapix/java_api/java/awt/dnd/DragGestureEvent.h>
#include <scapix/java_api/java/awt/dnd/DragGestureListener.h>
#include <scapix/java_api/java/awt/dnd/DragGestureRecognizer.h>
#include <scapix/java_api/java/awt/dnd/DragSource.h>
#include <scapix/java_api/java/awt/dnd/DropTarget.h>
#include <scapix/java_api/java/awt/dnd/peer/DragSourceContextPeer.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::swing::LightweightContent : public jni::object_base<"sun/swing/LightweightContent",
	java::lang::Object>
{
public:

	jni::ref<javax::swing::JComponent> getComponent() { return call_method<"getComponent", jni::ref<javax::swing::JComponent>>(); }
	void paintLock() { return call_method<"paintLock", void>(); }
	void paintUnlock() { return call_method<"paintUnlock", void>(); }
	void imageBufferReset(jni::ref<jni::array<jint>> p1, jint p2, jint p3, jint p4, jint p5, jint p6, jint p7) { return call_method<"imageBufferReset", void>(p1, p2, p3, p4, p5, p6, p7); }
	void imageBufferReset(jni::ref<jni::array<jint>> p1, jint p2, jint p3, jint p4, jint p5, jint p6) { return call_method<"imageBufferReset", void>(p1, p2, p3, p4, p5, p6); }
	void imageReshaped(jint p1, jint p2, jint p3, jint p4) { return call_method<"imageReshaped", void>(p1, p2, p3, p4); }
	void imageUpdated(jint p1, jint p2, jint p3, jint p4) { return call_method<"imageUpdated", void>(p1, p2, p3, p4); }
	void focusGrabbed() { return call_method<"focusGrabbed", void>(); }
	void focusUngrabbed() { return call_method<"focusUngrabbed", void>(); }
	void preferredSizeChanged(jint p1, jint p2) { return call_method<"preferredSizeChanged", void>(p1, p2); }
	void maximumSizeChanged(jint p1, jint p2) { return call_method<"maximumSizeChanged", void>(p1, p2); }
	void minimumSizeChanged(jint p1, jint p2) { return call_method<"minimumSizeChanged", void>(p1, p2); }
	void setCursor(jni::ref<java::awt::Cursor> p1) { return call_method<"setCursor", void>(p1); }
	jni::ref<java::awt::dnd::DragGestureRecognizer> createDragGestureRecognizer(jni::ref<java::lang::Class> p1, jni::ref<java::awt::dnd::DragSource> p2, jni::ref<java::awt::Component> p3, jint p4, jni::ref<java::awt::dnd::DragGestureListener> p5) { return call_method<"createDragGestureRecognizer", jni::ref<java::awt::dnd::DragGestureRecognizer>>(p1, p2, p3, p4, p5); }
	jni::ref<java::awt::dnd::peer::DragSourceContextPeer> createDragSourceContextPeer(jni::ref<java::awt::dnd::DragGestureEvent> p1) { return call_method<"createDragSourceContextPeer", jni::ref<java::awt::dnd::peer::DragSourceContextPeer>>(p1); }
	void addDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"addDropTarget", void>(p1); }
	void removeDropTarget(jni::ref<java::awt::dnd::DropTarget> p1) { return call_method<"removeDropTarget", void>(p1); }

protected:

	LightweightContent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SWING_LIGHTWEIGHTCONTENT
