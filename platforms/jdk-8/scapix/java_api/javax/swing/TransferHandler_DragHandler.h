// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/dnd/DragGestureListener.h>
#include <scapix/java_api/java/awt/dnd/DragSourceListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class TransferHandler_DragHandler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::TransferHandler_DragHandler>
{
	static constexpr fixed_string class_name = "javax/swing/TransferHandler$DragHandler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::dnd::DragGestureListener, scapix::java_api::java::awt::dnd::DragSourceListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/dnd/DragGestureEvent.h>
#include <scapix/java_api/java/awt/dnd/DragSourceDragEvent.h>
#include <scapix/java_api/java/awt/dnd/DragSourceDropEvent.h>
#include <scapix/java_api/java/awt/dnd/DragSourceEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::TransferHandler_DragHandler : public jni::object_base<"javax/swing/TransferHandler$DragHandler",
	java::lang::Object,
	java::awt::dnd::DragGestureListener,
	java::awt::dnd::DragSourceListener>
{
public:

	void dragGestureRecognized(jni::ref<java::awt::dnd::DragGestureEvent> p1) { return call_method<"dragGestureRecognized", void>(p1); }
	void dragEnter(jni::ref<java::awt::dnd::DragSourceDragEvent> p1) { return call_method<"dragEnter", void>(p1); }
	void dragOver(jni::ref<java::awt::dnd::DragSourceDragEvent> p1) { return call_method<"dragOver", void>(p1); }
	void dragExit(jni::ref<java::awt::dnd::DragSourceEvent> p1) { return call_method<"dragExit", void>(p1); }
	void dragDropEnd(jni::ref<java::awt::dnd::DragSourceDropEvent> p1) { return call_method<"dragDropEnd", void>(p1); }
	void dropActionChanged(jni::ref<java::awt::dnd::DragSourceDragEvent> p1) { return call_method<"dropActionChanged", void>(p1); }

protected:

	TransferHandler_DragHandler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_TRANSFERHANDLER_DRAGHANDLER
