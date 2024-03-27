// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/Scrollable.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JLIST_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JList>
{
	static constexpr fixed_string class_name = "javax/swing/JList";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::javax::swing::Scrollable, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JLIST)
#define SCAPIX_JAVA_API_JAVAX_SWING_JLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Point.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/DropMode.h>
#include <scapix/java_api/javax/swing/JList_DropLocation.h>
#include <scapix/java_api/javax/swing/ListCellRenderer.h>
#include <scapix/java_api/javax/swing/ListModel.h>
#include <scapix/java_api/javax/swing/ListSelectionModel.h>
#include <scapix/java_api/javax/swing/event/ListSelectionListener.h>
#include <scapix/java_api/javax/swing/plaf/ListUI.h>
#include <scapix/java_api/javax/swing/text/Position_Bias.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JList : public jni::object_base<"javax/swing/JList",
	javax::swing::JComponent,
	javax::swing::Scrollable,
	javax::accessibility::Accessible>
{
public:

	using DropLocation = JList_DropLocation;

	static jint VERTICAL() { return get_static_field<"VERTICAL", jint>(); }
	static jint VERTICAL_WRAP() { return get_static_field<"VERTICAL_WRAP", jint>(); }
	static jint HORIZONTAL_WRAP() { return get_static_field<"HORIZONTAL_WRAP", jint>(); }

	static jni::ref<javax::swing::JList> new_object(jni::ref<javax::swing::ListModel> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JList> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JList> new_object(jni::ref<java::util::Vector> p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JList> new_object() { return base_::new_object(); }
	jni::ref<javax::swing::plaf::ListUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::ListUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::ListUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getPrototypeCellValue() { return call_method<"getPrototypeCellValue", jni::ref<java::lang::Object>>(); }
	void setPrototypeCellValue(jni::ref<java::lang::Object> p1) { return call_method<"setPrototypeCellValue", void>(p1); }
	jint getFixedCellWidth() { return call_method<"getFixedCellWidth", jint>(); }
	void setFixedCellWidth(jint p1) { return call_method<"setFixedCellWidth", void>(p1); }
	jint getFixedCellHeight() { return call_method<"getFixedCellHeight", jint>(); }
	void setFixedCellHeight(jint p1) { return call_method<"setFixedCellHeight", void>(p1); }
	jni::ref<javax::swing::ListCellRenderer> getCellRenderer() { return call_method<"getCellRenderer", jni::ref<javax::swing::ListCellRenderer>>(); }
	void setCellRenderer(jni::ref<javax::swing::ListCellRenderer> p1) { return call_method<"setCellRenderer", void>(p1); }
	jni::ref<java::awt::Color> getSelectionForeground() { return call_method<"getSelectionForeground", jni::ref<java::awt::Color>>(); }
	void setSelectionForeground(jni::ref<java::awt::Color> p1) { return call_method<"setSelectionForeground", void>(p1); }
	jni::ref<java::awt::Color> getSelectionBackground() { return call_method<"getSelectionBackground", jni::ref<java::awt::Color>>(); }
	void setSelectionBackground(jni::ref<java::awt::Color> p1) { return call_method<"setSelectionBackground", void>(p1); }
	jint getVisibleRowCount() { return call_method<"getVisibleRowCount", jint>(); }
	void setVisibleRowCount(jint p1) { return call_method<"setVisibleRowCount", void>(p1); }
	jint getLayoutOrientation() { return call_method<"getLayoutOrientation", jint>(); }
	void setLayoutOrientation(jint p1) { return call_method<"setLayoutOrientation", void>(p1); }
	jint getFirstVisibleIndex() { return call_method<"getFirstVisibleIndex", jint>(); }
	jint getLastVisibleIndex() { return call_method<"getLastVisibleIndex", jint>(); }
	void ensureIndexIsVisible(jint p1) { return call_method<"ensureIndexIsVisible", void>(p1); }
	void setDragEnabled(jboolean p1) { return call_method<"setDragEnabled", void>(p1); }
	jboolean getDragEnabled() { return call_method<"getDragEnabled", jboolean>(); }
	void setDropMode(jni::ref<javax::swing::DropMode> p1) { return call_method<"setDropMode", void>(p1); }
	jni::ref<javax::swing::DropMode> getDropMode() { return call_method<"getDropMode", jni::ref<javax::swing::DropMode>>(); }
	jni::ref<javax::swing::JList_DropLocation> getDropLocation() { return call_method<"getDropLocation", jni::ref<javax::swing::JList_DropLocation>>(); }
	jint getNextMatch(jni::ref<java::lang::String> p1, jint p2, jni::ref<javax::swing::text::Position_Bias> p3) { return call_method<"getNextMatch", jint>(p1, p2, p3); }
	jni::ref<java::lang::String> getToolTipText(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"getToolTipText", jni::ref<java::lang::String>>(p1); }
	jint locationToIndex(jni::ref<java::awt::Point> p1) { return call_method<"locationToIndex", jint>(p1); }
	jni::ref<java::awt::Point> indexToLocation(jint p1) { return call_method<"indexToLocation", jni::ref<java::awt::Point>>(p1); }
	jni::ref<java::awt::Rectangle> getCellBounds(jint p1, jint p2) { return call_method<"getCellBounds", jni::ref<java::awt::Rectangle>>(p1, p2); }
	jni::ref<javax::swing::ListModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::ListModel>>(); }
	void setModel(jni::ref<javax::swing::ListModel> p1) { return call_method<"setModel", void>(p1); }
	void setListData(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"setListData", void>(p1); }
	void setListData(jni::ref<java::util::Vector> p1) { return call_method<"setListData", void>(p1); }
	jni::ref<javax::swing::ListSelectionModel> getSelectionModel() { return call_method<"getSelectionModel", jni::ref<javax::swing::ListSelectionModel>>(); }
	void addListSelectionListener(jni::ref<javax::swing::event::ListSelectionListener> p1) { return call_method<"addListSelectionListener", void>(p1); }
	void removeListSelectionListener(jni::ref<javax::swing::event::ListSelectionListener> p1) { return call_method<"removeListSelectionListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ListSelectionListener>> getListSelectionListeners() { return call_method<"getListSelectionListeners", jni::ref<jni::array<javax::swing::event::ListSelectionListener>>>(); }
	void setSelectionModel(jni::ref<javax::swing::ListSelectionModel> p1) { return call_method<"setSelectionModel", void>(p1); }
	void setSelectionMode(jint p1) { return call_method<"setSelectionMode", void>(p1); }
	jint getSelectionMode() { return call_method<"getSelectionMode", jint>(); }
	jint getAnchorSelectionIndex() { return call_method<"getAnchorSelectionIndex", jint>(); }
	jint getLeadSelectionIndex() { return call_method<"getLeadSelectionIndex", jint>(); }
	jint getMinSelectionIndex() { return call_method<"getMinSelectionIndex", jint>(); }
	jint getMaxSelectionIndex() { return call_method<"getMaxSelectionIndex", jint>(); }
	jboolean isSelectedIndex(jint p1) { return call_method<"isSelectedIndex", jboolean>(p1); }
	jboolean isSelectionEmpty() { return call_method<"isSelectionEmpty", jboolean>(); }
	void clearSelection() { return call_method<"clearSelection", void>(); }
	void setSelectionInterval(jint p1, jint p2) { return call_method<"setSelectionInterval", void>(p1, p2); }
	void addSelectionInterval(jint p1, jint p2) { return call_method<"addSelectionInterval", void>(p1, p2); }
	void removeSelectionInterval(jint p1, jint p2) { return call_method<"removeSelectionInterval", void>(p1, p2); }
	void setValueIsAdjusting(jboolean p1) { return call_method<"setValueIsAdjusting", void>(p1); }
	jboolean getValueIsAdjusting() { return call_method<"getValueIsAdjusting", jboolean>(); }
	jni::ref<jni::array<jint>> getSelectedIndices() { return call_method<"getSelectedIndices", jni::ref<jni::array<jint>>>(); }
	void setSelectedIndex(jint p1) { return call_method<"setSelectedIndex", void>(p1); }
	void setSelectedIndices(jni::ref<jni::array<jint>> p1) { return call_method<"setSelectedIndices", void>(p1); }
	jni::ref<jni::array<java::lang::Object>> getSelectedValues() { return call_method<"getSelectedValues", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<java::util::List> getSelectedValuesList() { return call_method<"getSelectedValuesList", jni::ref<java::util::List>>(); }
	jint getSelectedIndex() { return call_method<"getSelectedIndex", jint>(); }
	jni::ref<java::lang::Object> getSelectedValue() { return call_method<"getSelectedValue", jni::ref<java::lang::Object>>(); }
	void setSelectedValue(jni::ref<java::lang::Object> p1, jboolean p2) { return call_method<"setSelectedValue", void>(p1, p2); }
	jni::ref<java::awt::Dimension> getPreferredScrollableViewportSize() { return call_method<"getPreferredScrollableViewportSize", jni::ref<java::awt::Dimension>>(); }
	jint getScrollableUnitIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableUnitIncrement", jint>(p1, p2, p3); }
	jint getScrollableBlockIncrement(jni::ref<java::awt::Rectangle> p1, jint p2, jint p3) { return call_method<"getScrollableBlockIncrement", jint>(p1, p2, p3); }
	jboolean getScrollableTracksViewportWidth() { return call_method<"getScrollableTracksViewportWidth", jboolean>(); }
	jboolean getScrollableTracksViewportHeight() { return call_method<"getScrollableTracksViewportHeight", jboolean>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	JList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JLIST