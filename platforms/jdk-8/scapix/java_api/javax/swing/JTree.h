// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/Scrollable.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTREE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTREE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTree; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTree>
{
	static constexpr fixed_string class_name = "javax/swing/JTree";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::swing::Scrollable, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTREE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTREE)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTREE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/java/util/Hashtable.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/DropMode.h>
#include <scapix/java_api/javax/swing/JTree_DropLocation.h>
#include <scapix/java_api/javax/swing/event/TreeExpansionListener.h>
#include <scapix/java_api/javax/swing/event/TreeSelectionListener.h>
#include <scapix/java_api/javax/swing/event/TreeWillExpandListener.h>
#include <scapix/java_api/javax/swing/plaf/TreeUI.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#include <scapix/java_api/javax/swing/tree/TreeCellEditor.h>
#include <scapix/java_api/javax/swing/tree/TreeCellRenderer.h>
#include <scapix/java_api/javax/swing/tree/TreeModel.h>
#include <scapix/java_api/javax/swing/tree/TreeNode.h>
#include <scapix/java_api/javax/swing/tree/TreePath.h>
#include <scapix/java_api/javax/swing/tree/TreeSelectionModel.h>
#include <scapix/java_api/javax/swing/JTree_DynamicUtilTreeNode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTree : public jni::object_base<"javax/swing/JTree",
	javax::swing::JComponent,
	javax::swing::Scrollable,
	javax::accessibility::Accessible>
{
public:

	using DropLocation = JTree_DropLocation;
	using DynamicUtilTreeNode = JTree_DynamicUtilTreeNode;

	static jni::ref<java::lang::String> CELL_RENDERER_PROPERTY() { return get_static_field<"CELL_RENDERER_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TREE_MODEL_PROPERTY() { return get_static_field<"TREE_MODEL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ROOT_VISIBLE_PROPERTY() { return get_static_field<"ROOT_VISIBLE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SHOWS_ROOT_HANDLES_PROPERTY() { return get_static_field<"SHOWS_ROOT_HANDLES_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ROW_HEIGHT_PROPERTY() { return get_static_field<"ROW_HEIGHT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CELL_EDITOR_PROPERTY() { return get_static_field<"CELL_EDITOR_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EDITABLE_PROPERTY() { return get_static_field<"EDITABLE_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LARGE_MODEL_PROPERTY() { return get_static_field<"LARGE_MODEL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SELECTION_MODEL_PROPERTY() { return get_static_field<"SELECTION_MODEL_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> VISIBLE_ROW_COUNT_PROPERTY() { return get_static_field<"VISIBLE_ROW_COUNT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> INVOKES_STOP_CELL_EDITING_PROPERTY() { return get_static_field<"INVOKES_STOP_CELL_EDITING_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SCROLLS_ON_EXPAND_PROPERTY() { return get_static_field<"SCROLLS_ON_EXPAND_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> TOGGLE_CLICK_COUNT_PROPERTY() { return get_static_field<"TOGGLE_CLICK_COUNT_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LEAD_SELECTION_PATH_PROPERTY() { return get_static_field<"LEAD_SELECTION_PATH_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ANCHOR_SELECTION_PATH_PROPERTY() { return get_static_field<"ANCHOR_SELECTION_PATH_PROPERTY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXPANDS_SELECTED_PATHS_PROPERTY() { return get_static_field<"EXPANDS_SELECTED_PATHS_PROPERTY", jni::ref<java::lang::String>>(); }

	static jni::ref<javax::swing::JTree> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<java::util::Vector> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<java::util::Hashtable> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<javax::swing::tree::TreeNode> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<javax::swing::tree::TreeNode> p1, jboolean p2) { return base_::new_object(p1, p2); }
	static jni::ref<javax::swing::JTree> new_object(jni::ref<javax::swing::tree::TreeModel> p1) { return base_::new_object(p1); }
	jni::ref<javax::swing::plaf::TreeUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::TreeUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::TreeUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	jni::ref<javax::swing::tree::TreeCellRenderer> getCellRenderer() { return call_method<"getCellRenderer", jni::ref<javax::swing::tree::TreeCellRenderer>>(); }
	void setCellRenderer(jni::ref<javax::swing::tree::TreeCellRenderer> p1) { return call_method<"setCellRenderer", void>(p1); }
	void setEditable(jboolean p1) { return call_method<"setEditable", void>(p1); }
	jboolean isEditable() { return call_method<"isEditable", jboolean>(); }
	void setCellEditor(jni::ref<javax::swing::tree::TreeCellEditor> p1) { return call_method<"setCellEditor", void>(p1); }
	jni::ref<javax::swing::tree::TreeCellEditor> getCellEditor() { return call_method<"getCellEditor", jni::ref<javax::swing::tree::TreeCellEditor>>(); }
	jni::ref<javax::swing::tree::TreeModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::tree::TreeModel>>(); }
	void setModel(jni::ref<javax::swing::tree::TreeModel> p1) { return call_method<"setModel", void>(p1); }
	jboolean isRootVisible() { return call_method<"isRootVisible", jboolean>(); }
	void setRootVisible(jboolean p1) { return call_method<"setRootVisible", void>(p1); }
	void setShowsRootHandles(jboolean p1) { return call_method<"setShowsRootHandles", void>(p1); }
	jboolean getShowsRootHandles() { return call_method<"getShowsRootHandles", jboolean>(); }
	void setRowHeight(jint p1) { return call_method<"setRowHeight", void>(p1); }
	jint getRowHeight() { return call_method<"getRowHeight", jint>(); }
	jboolean isFixedRowHeight() { return call_method<"isFixedRowHeight", jboolean>(); }
	void setLargeModel(jboolean p1) { return call_method<"setLargeModel", void>(p1); }
	jboolean isLargeModel() { return call_method<"isLargeModel", jboolean>(); }
	void setInvokesStopCellEditing(jboolean p1) { return call_method<"setInvokesStopCellEditing", void>(p1); }
	jboolean getInvokesStopCellEditing() { return call_method<"getInvokesStopCellEditing", jboolean>(); }
	void setScrollsOnExpand(jboolean p1) { return call_method<"setScrollsOnExpand", void>(p1); }
	jboolean getScrollsOnExpand() { return call_method<"getScrollsOnExpand", jboolean>(); }
	void setToggleClickCount(jint p1) { return call_method<"setToggleClickCount", void>(p1); }
	jint getToggleClickCount() { return call_method<"getToggleClickCount", jint>(); }
	void setExpandsSelectedPaths(jboolean p1) { return call_method<"setExpandsSelectedPaths", void>(p1); }
	jboolean getExpandsSelectedPaths() { return call_method<"getExpandsSelectedPaths", jboolean>(); }
	void setDragEnabled(jboolean p1) { return call_method<"setDragEnabled", void>(p1); }
	jboolean getDragEnabled() { return call_method<"getDragEnabled", jboolean>(); }
	void setDropMode(jni::ref<javax::swing::DropMode> p1) { return call_method<"setDropMode", void>(p1); }
	jni::ref<javax::swing::DropMode> getDropMode() { return call_method<"getDropMode", jni::ref<javax::swing::DropMode>>(); }
	jni::ref<javax::swing::JTree_DropLocation> getDropLocation() { return call_method<"getDropLocation", jni::ref<javax::swing::JTree_DropLocation>>(); }
	jboolean isPathEditable(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isPathEditable", jboolean>(p1); }
	jni::ref<java::lang::String> getToolTipText(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"getToolTipText", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> convertValueToText(jni::ref<java::lang::Object> p1, jboolean p2, jboolean p3, jboolean p4, jint p5, jboolean p6) { return call_method<"convertValueToText", jni::ref<java::lang::String>>(p1, p2, p3, p4, p5, p6); }
	jint getRowCount() { return call_method<"getRowCount", jint>(); }
	void setSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"setSelectionPath", void>(p1); }
	void setSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"setSelectionPaths", void>(p1); }
	void setLeadSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"setLeadSelectionPath", void>(p1); }
	void setAnchorSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"setAnchorSelectionPath", void>(p1); }
	void setSelectionRow(jint p1) { return call_method<"setSelectionRow", void>(p1); }
	void setSelectionRows(jni::ref<jni::array<jint>> p1) { return call_method<"setSelectionRows", void>(p1); }
	void addSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"addSelectionPath", void>(p1); }
	void addSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"addSelectionPaths", void>(p1); }
	void addSelectionRow(jint p1) { return call_method<"addSelectionRow", void>(p1); }
	void addSelectionRows(jni::ref<jni::array<jint>> p1) { return call_method<"addSelectionRows", void>(p1); }
	jni::ref<java::lang::Object> getLastSelectedPathComponent() { return call_method<"getLastSelectedPathComponent", jni::ref<java::lang::Object>>(); }
	jni::ref<javax::swing::tree::TreePath> getLeadSelectionPath() { return call_method<"getLeadSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<javax::swing::tree::TreePath> getAnchorSelectionPath() { return call_method<"getAnchorSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<javax::swing::tree::TreePath> getSelectionPath() { return call_method<"getSelectionPath", jni::ref<javax::swing::tree::TreePath>>(); }
	jni::ref<jni::array<javax::swing::tree::TreePath>> getSelectionPaths() { return call_method<"getSelectionPaths", jni::ref<jni::array<javax::swing::tree::TreePath>>>(); }
	jni::ref<jni::array<jint>> getSelectionRows() { return call_method<"getSelectionRows", jni::ref<jni::array<jint>>>(); }
	jint getSelectionCount() { return call_method<"getSelectionCount", jint>(); }
	jint getMinSelectionRow() { return call_method<"getMinSelectionRow", jint>(); }
	jint getMaxSelectionRow() { return call_method<"getMaxSelectionRow", jint>(); }
	jint getLeadSelectionRow() { return call_method<"getLeadSelectionRow", jint>(); }
	jboolean isPathSelected(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isPathSelected", jboolean>(p1); }
	jboolean isRowSelected(jint p1) { return call_method<"isRowSelected", jboolean>(p1); }
	jni::ref<java::util::Enumeration> getExpandedDescendants(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"getExpandedDescendants", jni::ref<java::util::Enumeration>>(p1); }
	jboolean hasBeenExpanded(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"hasBeenExpanded", jboolean>(p1); }
	jboolean isExpanded(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isExpanded", jboolean>(p1); }
	jboolean isExpanded(jint p1) { return call_method<"isExpanded", jboolean>(p1); }
	jboolean isCollapsed(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isCollapsed", jboolean>(p1); }
	jboolean isCollapsed(jint p1) { return call_method<"isCollapsed", jboolean>(p1); }
	void makeVisible(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"makeVisible", void>(p1); }
	jboolean isVisible(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"isVisible", jboolean>(p1); }
	jni::ref<java::awt::Rectangle> getPathBounds(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"getPathBounds", jni::ref<java::awt::Rectangle>>(p1); }
	jni::ref<java::awt::Rectangle> getRowBounds(jint p1) { return call_method<"getRowBounds", jni::ref<java::awt::Rectangle>>(p1); }
	void scrollPathToVisible(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"scrollPathToVisible", void>(p1); }
	void scrollRowToVisible(jint p1) { return call_method<"scrollRowToVisible", void>(p1); }
	jni::ref<javax::swing::tree::TreePath> getPathForRow(jint p1) { return call_method<"getPathForRow", jni::ref<javax::swing::tree::TreePath>>(p1); }
	jint getRowForPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"getRowForPath", jint>(p1); }
	void expandPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"expandPath", void>(p1); }
	void expandRow(jint p1) { return call_method<"expandRow", void>(p1); }
	void collapsePath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"collapsePath", void>(p1); }
	void collapseRow(jint p1) { return call_method<"collapseRow", void>(p1); }
	jni::ref<javax::swing::tree::TreePath> getPathForLocation(jint p1, jint p2) { return call_method<"getPathForLocation", jni::ref<javax::swing::tree::TreePath>>(p1, p2); }
	jint getRowForLocation(jint p1, jint p2) { return call_method<"getRowForLocation", jint>(p1, p2); }
	jni::ref<javax::swing::tree::TreePath> getClosestPathForLocation(jint p1, jint p2) { return call_method<"getClosestPathForLocation", jni::ref<javax::swing::tree::TreePath>>(p1, p2); }
	jint getClosestRowForLocation(jint p1, jint p2) { return call_method<"getClosestRowForLocation", jint>(p1, p2); }
	jboolean isEditing() { return call_method<"isEditing", jboolean>(); }
	jboolean stopEditing() { return call_method<"stopEditing", jboolean>(); }
	void cancelEditing() { return call_method<"cancelEditing", void>(); }
	void startEditingAtPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"startEditingAtPath", void>(p1); }
	jni::ref<javax::swing::tree::TreePath> getEditingPath() { return call_method<"getEditingPath", jni::ref<javax::swing::tree::TreePath>>(); }
	void setSelectionModel(jni::ref<javax::swing::tree::TreeSelectionModel> p1) { return call_method<"setSelectionModel", void>(p1); }
	jni::ref<javax::swing::tree::TreeSelectionModel> getSelectionModel() { return call_method<"getSelectionModel", jni::ref<javax::swing::tree::TreeSelectionModel>>(); }
	void setSelectionInterval(jint p1, jint p2) { return call_method<"setSelectionInterval", void>(p1, p2); }
	void addSelectionInterval(jint p1, jint p2) { return call_method<"addSelectionInterval", void>(p1, p2); }
	void removeSelectionInterval(jint p1, jint p2) { return call_method<"removeSelectionInterval", void>(p1, p2); }
	void removeSelectionPath(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"removeSelectionPath", void>(p1); }
	void removeSelectionPaths(jni::ref<jni::array<javax::swing::tree::TreePath>> p1) { return call_method<"removeSelectionPaths", void>(p1); }
	void removeSelectionRow(jint p1) { return call_method<"removeSelectionRow", void>(p1); }
	void removeSelectionRows(jni::ref<jni::array<jint>> p1) { return call_method<"removeSelectionRows", void>(p1); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	jboolean isSelectionEmpty() { return call_method<"isSelectionEmpty", jboolean>(); }
	void addTreeExpansionListener(jni::ref<javax::swing::event::TreeExpansionListener> p1) { return call_method<"addTreeExpansionListener", void>(p1); }
	void removeTreeExpansionListener(jni::ref<javax::swing::event::TreeExpansionListener> p1) { return call_method<"removeTreeExpansionListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::TreeExpansionListener>> getTreeExpansionListeners() { return call_method<"getTreeExpansionListeners", jni::ref<jni::array<javax::swing::event::TreeExpansionListener>>>(); }
	void addTreeWillExpandListener(jni::ref<javax::swing::event::TreeWillExpandListener> p1) { return call_method<"addTreeWillExpandListener", void>(p1); }
	void removeTreeWillExpandListener(jni::ref<javax::swing::event::TreeWillExpandListener> p1) { return call_method<"removeTreeWillExpandListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::TreeWillExpandListener>> getTreeWillExpandListeners() { return call_method<"getTreeWillExpandListeners", jni::ref<jni::array<javax::swing::event::TreeWillExpandListener>>>(); }
	void fireTreeExpanded(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"fireTreeExpanded", void>(p1); }
	void fireTreeCollapsed(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"fireTreeCollapsed", void>(p1); }
	void fireTreeWillExpand(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"fireTreeWillExpand", void>(p1); }
	void fireTreeWillCollapse(jni::ref<javax::swing::tree::TreePath> p1) { return call_method<"fireTreeWillCollapse", void>(p1); }
	void addTreeSelectionListener(jni::ref<javax::swing::event::TreeSelectionListener> p1) { return call_method<"addTreeSelectionListener", void>(p1); }
	void removeTreeSelectionListener(jni::ref<javax::swing::event::TreeSelectionListener> p1) { return call_method<"removeTreeSelectionListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::TreeSelectionListener>> getTreeSelectionListeners() { return call_method<"getTreeSelectionListeners", jni::ref<jni::array<javax::swing::event::TreeSelectionListener>>>(); }
	void treeDidChange() { return call_method<"treeDidChange", void>(); }
	void setVisibleRowCount(jint p1) { return call_method<"setVisibleRowCount", void>(p1); }
	jint getVisibleRowCount() { return call_method<"getVisibleRowCount", jint>(); }
	jni::ref<javax::swing::tree::TreePath> getNextMatch(jni::ref<java::lang::String> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"getNextMatch", jni::ref<javax::swing::tree::TreePath>>(p1, p2, p3); }
	jni::ref<java::awt::Dimension> getPreferredScrollableViewportSize() { return call_method<"getPreferredScrollableViewportSize", jni::ref<java::awt::Dimension>>(); }
	jint getScrollableUnitIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableUnitIncrement", jint>(p1, p2, p3); }
	jint getScrollableBlockIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableBlockIncrement", jint>(p1, p2, p3); }
	jboolean getScrollableTracksViewportWidth() { return call_method<"getScrollableTracksViewportWidth", jboolean>(); }
	jboolean getScrollableTracksViewportHeight() { return call_method<"getScrollableTracksViewportHeight", jboolean>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JTree(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTREE
