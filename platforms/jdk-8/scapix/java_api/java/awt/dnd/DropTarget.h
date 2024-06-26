// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/dnd/DropTargetListener.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::dnd { class DropTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::dnd::DropTarget>
{
	static constexpr fixed_string class_name = "java/awt/dnd/DropTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::dnd::DropTargetListener, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET)
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/datatransfer/FlavorMap.h>
#include <scapix/java_api/java/awt/dnd/DropTargetContext.h>
#include <scapix/java_api/java/awt/dnd/DropTargetDragEvent.h>
#include <scapix/java_api/java/awt/dnd/DropTargetDropEvent.h>
#include <scapix/java_api/java/awt/dnd/DropTargetEvent.h>
#include <scapix/java_api/java/awt/peer/ComponentPeer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::dnd::DropTarget : public jni::object_base<"java/awt/dnd/DropTarget",
	java::lang::Object,
	java::awt::dnd::DropTargetListener,
	java::io::Serializable>
{
public:

	static jni::ref<java::awt::dnd::DropTarget> new_object(jni::ref<java::awt::Component> p1, jint p2, jni::ref<java::awt::dnd::DropTargetListener> p3, jboolean p4, jni::ref<java::awt::datatransfer::FlavorMap> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<java::awt::dnd::DropTarget> new_object(jni::ref<java::awt::Component> p1, jint p2, jni::ref<java::awt::dnd::DropTargetListener> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<java::awt::dnd::DropTarget> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::dnd::DropTarget> new_object(jni::ref<java::awt::Component> p1, jni::ref<java::awt::dnd::DropTargetListener> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::awt::dnd::DropTarget> new_object(jni::ref<java::awt::Component> p1, jint p2, jni::ref<java::awt::dnd::DropTargetListener> p3) { return base_::new_object(p1, p2, p3); }
	void setComponent(jni::ref<java::awt::Component> p1) { return call_method<"setComponent", void>(p1); }
	jni::ref<java::awt::Component> getComponent() { return call_method<"getComponent", jni::ref<java::awt::Component>>(); }
	void setDefaultActions(jint p1) { return call_method<"setDefaultActions", void>(p1); }
	jint getDefaultActions() { return call_method<"getDefaultActions", jint>(); }
	void setActive(jboolean p1) { return call_method<"setActive", void>(p1); }
	jboolean isActive() { return call_method<"isActive", jboolean>(); }
	void addDropTargetListener(jni::ref<java::awt::dnd::DropTargetListener> p1) { return call_method<"addDropTargetListener", void>(p1); }
	void removeDropTargetListener(jni::ref<java::awt::dnd::DropTargetListener> p1) { return call_method<"removeDropTargetListener", void>(p1); }
	void dragEnter(jni::ref<java::awt::dnd::DropTargetDragEvent> p1) { return call_method<"dragEnter", void>(p1); }
	void dragOver(jni::ref<java::awt::dnd::DropTargetDragEvent> p1) { return call_method<"dragOver", void>(p1); }
	void dropActionChanged(jni::ref<java::awt::dnd::DropTargetDragEvent> p1) { return call_method<"dropActionChanged", void>(p1); }
	void dragExit(jni::ref<java::awt::dnd::DropTargetEvent> p1) { return call_method<"dragExit", void>(p1); }
	void drop(jni::ref<java::awt::dnd::DropTargetDropEvent> p1) { return call_method<"drop", void>(p1); }
	jni::ref<java::awt::datatransfer::FlavorMap> getFlavorMap() { return call_method<"getFlavorMap", jni::ref<java::awt::datatransfer::FlavorMap>>(); }
	void setFlavorMap(jni::ref<java::awt::datatransfer::FlavorMap> p1) { return call_method<"setFlavorMap", void>(p1); }
	void addNotify(jni::ref<java::awt::peer::ComponentPeer> p1) { return call_method<"addNotify", void>(p1); }
	void removeNotify(jni::ref<java::awt::peer::ComponentPeer> p1) { return call_method<"removeNotify", void>(p1); }
	jni::ref<java::awt::dnd::DropTargetContext> getDropTargetContext() { return call_method<"getDropTargetContext", jni::ref<java::awt::dnd::DropTargetContext>>(); }

protected:

	DropTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET
