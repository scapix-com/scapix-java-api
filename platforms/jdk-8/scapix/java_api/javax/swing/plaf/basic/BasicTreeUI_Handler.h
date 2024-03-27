// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/swing/event/CellEditorListener.h>
#include <scapix/java_api/java/awt/event/FocusListener.h>
#include <scapix/java_api/java/awt/event/KeyListener.h>
#include <scapix/java_api/java/awt/event/MouseListener.h>
#include <scapix/java_api/java/awt/event/MouseMotionListener.h>
#include <scapix/java_api/java/beans/PropertyChangeListener.h>
#include <scapix/java_api/javax/swing/event/TreeExpansionListener.h>
#include <scapix/java_api/javax/swing/event/TreeModelListener.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionListener.h>
#include <scapix/java_api/javax/swing/plaf/basic/DragRecognitionSupport_BeforeDrag.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTreeUI_Handler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTreeUI_Handler>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTreeUI$Handler";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::swing::event::CellEditorListener, scapix::java_api::java::awt::event::FocusListener, scapix::java_api::java::awt::event::KeyListener, scapix::java_api::java::awt::event::MouseListener, scapix::java_api::java::awt::event::MouseMotionListener, scapix::java_api::java::beans::PropertyChangeListener, scapix::java_api::javax::swing::event::TreeExpansionListener, scapix::java_api::javax::swing::event::TreeModelListener, scapix::java_api::javax::swing::event::TreeSelectionListener, scapix::java_api::javax::swing::plaf::basic::DragRecognitionSupport_BeforeDrag>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/FocusEvent.h>
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/beans/PropertyChangeEvent.h>
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#include <scapix/java_api/javax/swing/event/TreeExpansionEvent.h>
#include <scapix/java_api/javax/swing/event/TreeModelEvent.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::plaf::basic::BasicTreeUI_Handler : public jni::object_base<"javax/swing/plaf/basic/BasicTreeUI$Handler",
	java::lang::Object,
	javax::swing::event::CellEditorListener,
	java::awt::event::FocusListener,
	java::awt::event::KeyListener,
	java::awt::event::MouseListener,
	java::awt::event::MouseMotionListener,
	java::beans::PropertyChangeListener,
	javax::swing::event::TreeExpansionListener,
	javax::swing::event::TreeModelListener,
	javax::swing::event::TreeSelectionListener,
	javax::swing::plaf::basic::DragRecognitionSupport_BeforeDrag>
{
public:

	void keyTyped(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyTyped", void>(p1); }
	void keyPressed(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyPressed", void>(p1); }
	void keyReleased(jni::ref<java::awt::event::KeyEvent> p1) { return call_method<"keyReleased", void>(p1); }
	void propertyChange(jni::ref<java::beans::PropertyChangeEvent> p1) { return call_method<"propertyChange", void>(p1); }
	void mouseClicked(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseClicked", void>(p1); }
	void mouseEntered(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseEntered", void>(p1); }
	void mouseExited(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseExited", void>(p1); }
	void mousePressed(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mousePressed", void>(p1); }
	void dragStarting(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"dragStarting", void>(p1); }
	void mouseDragged(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseDragged", void>(p1); }
	void mouseMoved(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseMoved", void>(p1); }
	void mouseReleased(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"mouseReleased", void>(p1); }
	void focusGained(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusGained", void>(p1); }
	void focusLost(jni::ref<java::awt::event::FocusEvent> p1) { return call_method<"focusLost", void>(p1); }
	void editingStopped(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"editingStopped", void>(p1); }
	void editingCanceled(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"editingCanceled", void>(p1); }
	void valueChanged(jni::ref<javax::swing::event::TreeSelectionEvent> p1) { return call_method<"valueChanged", void>(p1); }
	void treeExpanded(jni::ref<javax::swing::event::TreeExpansionEvent> p1) { return call_method<"treeExpanded", void>(p1); }
	void treeCollapsed(jni::ref<javax::swing::event::TreeExpansionEvent> p1) { return call_method<"treeCollapsed", void>(p1); }
	void treeNodesChanged(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesChanged", void>(p1); }
	void treeNodesInserted(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesInserted", void>(p1); }
	void treeNodesRemoved(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesRemoved", void>(p1); }
	void treeStructureChanged(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeStructureChanged", void>(p1); }

protected:

	BasicTreeUI_Handler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTREEUI_HANDLER