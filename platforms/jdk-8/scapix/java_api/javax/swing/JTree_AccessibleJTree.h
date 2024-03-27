// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent_AccessibleJComponent.h>
#include <scapix/java_api/javax/accessibility/AccessibleSelection.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionListener.h>
#include <scapix/java_api/javax/swing/event/TreeModelListener.h>
#include <scapix/java_api/javax/swing/event/TreeExpansionListener.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTree_AccessibleJTree; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTree_AccessibleJTree>
{
	static constexpr fixed_string class_name = "javax/swing/JTree$AccessibleJTree";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent_AccessibleJComponent, scapix::java_api::javax::accessibility::AccessibleSelection, scapix::java_api::javax::swing::event::TreeSelectionListener, scapix::java_api::javax::swing::event::TreeModelListener, scapix::java_api::javax::swing::event::TreeExpansionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/swing/JTree.h>
#include <scapix/java_api/javax/swing/event/TreeExpansionEvent.h>
#include <scapix/java_api/javax/swing/event/TreeModelEvent.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionEvent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTree_AccessibleJTree : public jni::object_base<"javax/swing/JTree$AccessibleJTree",
	javax::swing::JComponent_AccessibleJComponent,
	javax::accessibility::AccessibleSelection,
	javax::swing::event::TreeSelectionListener,
	javax::swing::event::TreeModelListener,
	javax::swing::event::TreeExpansionListener>
{
public:

	static jni::ref<javax::swing::JTree_AccessibleJTree> new_object(jni::ref<javax::swing::JTree> p1) { return base_::new_object(p1); }
	void valueChanged(jni::ref<javax::swing::event::TreeSelectionEvent> p1) { return call_method<"valueChanged", void>(p1); }
	void fireVisibleDataPropertyChange() { return call_method<"fireVisibleDataPropertyChange", void>(); }
	void treeNodesChanged(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesChanged", void>(p1); }
	void treeNodesInserted(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesInserted", void>(p1); }
	void treeNodesRemoved(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeNodesRemoved", void>(p1); }
	void treeStructureChanged(jni::ref<javax::swing::event::TreeModelEvent> p1) { return call_method<"treeStructureChanged", void>(p1); }
	void treeCollapsed(jni::ref<javax::swing::event::TreeExpansionEvent> p1) { return call_method<"treeCollapsed", void>(p1); }
	void treeExpanded(jni::ref<javax::swing::event::TreeExpansionEvent> p1) { return call_method<"treeExpanded", void>(p1); }
	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleAt(jni::ref<java::awt::Point> p1) { return call_method<"getAccessibleAt", jni::ref<javax::accessibility::Accessible>>(p1); }
	jint getAccessibleChildrenCount() { return call_method<"getAccessibleChildrenCount", jint>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleChild(jint p1) { return call_method<"getAccessibleChild", jni::ref<javax::accessibility::Accessible>>(p1); }
	jint getAccessibleIndexInParent() { return call_method<"getAccessibleIndexInParent", jint>(); }
	jni::ref<javax::accessibility::AccessibleSelection> getAccessibleSelection() { return call_method<"getAccessibleSelection", jni::ref<javax::accessibility::AccessibleSelection>>(); }
	jint getAccessibleSelectionCount() { return call_method<"getAccessibleSelectionCount", jint>(); }
	jni::ref<javax::accessibility::Accessible> getAccessibleSelection(jint p1) { return call_method<"getAccessibleSelection", jni::ref<javax::accessibility::Accessible>>(p1); }
	jboolean isAccessibleChildSelected(jint p1) { return call_method<"isAccessibleChildSelected", jboolean>(p1); }
	void addAccessibleSelection(jint p1) { return call_method<"addAccessibleSelection", void>(p1); }
	void removeAccessibleSelection(jint p1) { return call_method<"removeAccessibleSelection", void>(p1); }
	void clearAccessibleSelection() { return call_method<"clearAccessibleSelection", void>(); }
	void selectAllAccessibleSelection() { return call_method<"selectAllAccessibleSelection", void>(); }

protected:

	JTree_AccessibleJTree(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTREE_ACCESSIBLEJTREE
