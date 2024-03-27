// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::dnd { class DropTarget_DropTargetAutoScroller; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::dnd::DropTarget_DropTargetAutoScroller>
{
	static constexpr fixed_string class_name = "java/awt/dnd/DropTarget$DropTargetAutoScroller";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER)
#define SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::dnd::DropTarget_DropTargetAutoScroller : public jni::object_base<"java/awt/dnd/DropTarget$DropTargetAutoScroller",
	java::lang::Object,
	java::awt::event::ActionListener>
{
public:

	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	DropTarget_DropTargetAutoScroller(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_DND_DROPTARGET_DROPTARGETAUTOSCROLLER