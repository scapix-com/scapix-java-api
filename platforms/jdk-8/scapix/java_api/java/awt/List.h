// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/ItemSelectable.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_LIST_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_LIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class List; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::List>
{
	static constexpr fixed_string class_name = "java/awt/List";
	using base_classes = std::tuple<scapix::java_api::java::awt::Component, scapix::java_api::java::awt::ItemSelectable, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_LIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_LIST)
#define SCAPIX_JAVA_API_JAVA_AWT_LIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/EventListener.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::List : public jni::object_base<"java/awt/List",
	java::awt::Component,
	java::awt::ItemSelectable,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::awt::List> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::List> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<java::awt::List> new_object(jint p1, jboolean p2) { return base_::new_object(p1, p2); }
	void addNotify() { return call_method<"addNotify", void>(); }
	void removeNotify() { return call_method<"removeNotify", void>(); }
	jint getItemCount() { return call_method<"getItemCount", jint>(); }
	jint countItems() { return call_method<"countItems", jint>(); }
	jni::ref<java::lang::String> getItem(jint p1) { return call_method<"getItem", jni::ref<java::lang::String>>(p1); }
	jni::ref<jni::array<java::lang::String>> getItems() { return call_method<"getItems", jni::ref<jni::array<java::lang::String>>>(); }
	void add(jni::ref<java::lang::String> p1) { return call_method<"add", void>(p1); }
	void addItem(jni::ref<java::lang::String> p1) { return call_method<"addItem", void>(p1); }
	void add(jni::ref<java::lang::String> p1, jint p2) { return call_method<"add", void>(p1, p2); }
	void addItem(jni::ref<java::lang::String> p1, jint p2) { return call_method<"addItem", void>(p1, p2); }
	void replaceItem(jni::ref<java::lang::String> p1, jint p2) { return call_method<"replaceItem", void>(p1, p2); }
	void removeAll() { return call_method<"removeAll", void>(); }
	void clear() { return call_method<"clear", void>(); }
	void remove(jni::ref<java::lang::String> p1) { return call_method<"remove", void>(p1); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }
	void delItem(jint p1) { return call_method<"delItem", void>(p1); }
	jint getSelectedIndex() { return call_method<"getSelectedIndex", jint>(); }
	jni::ref<jni::array<jint>> getSelectedIndexes() { return call_method<"getSelectedIndexes", jni::ref<jni::array<jint>>>(); }
	jni::ref<java::lang::String> getSelectedItem() { return call_method<"getSelectedItem", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<java::lang::String>> getSelectedItems() { return call_method<"getSelectedItems", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::Object>> getSelectedObjects() { return call_method<"getSelectedObjects", jni::ref<jni::array<java::lang::Object>>>(); }
	void select(jint p1) { return call_method<"select", void>(p1); }
	void deselect(jint p1) { return call_method<"deselect", void>(p1); }
	jboolean isIndexSelected(jint p1) { return call_method<"isIndexSelected", jboolean>(p1); }
	jboolean isSelected(jint p1) { return call_method<"isSelected", jboolean>(p1); }
	jint getRows() { return call_method<"getRows", jint>(); }
	jboolean isMultipleMode() { return call_method<"isMultipleMode", jboolean>(); }
	jboolean allowsMultipleSelections() { return call_method<"allowsMultipleSelections", jboolean>(); }
	void setMultipleMode(jboolean p1) { return call_method<"setMultipleMode", void>(p1); }
	void setMultipleSelections(jboolean p1) { return call_method<"setMultipleSelections", void>(p1); }
	jint getVisibleIndex() { return call_method<"getVisibleIndex", jint>(); }
	void makeVisible(jint p1) { return call_method<"makeVisible", void>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jint p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> preferredSize(jint p1) { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize() { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> preferredSize() { return call_method<"preferredSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> getMinimumSize(jint p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumSize(jint p1) { return call_method<"minimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize() { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(); }
	jni::ref<java::awt::Dimension> minimumSize() { return call_method<"minimumSize", jni::ref<java::awt::Dimension>>(); }
	void addItemListener(jni::ref<java::awt::event::ItemListener> p1) { return call_method<"addItemListener", void>(p1); }
	void removeItemListener(jni::ref<java::awt::event::ItemListener> p1) { return call_method<"removeItemListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::ItemListener>> getItemListeners() { return call_method<"getItemListeners", jni::ref<jni::array<java::awt::event::ItemListener>>>(); }
	void addActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"addActionListener", void>(p1); }
	void removeActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"removeActionListener", void>(p1); }
	jni::ref<jni::array<java::awt::event::ActionListener>> getActionListeners() { return call_method<"getActionListeners", jni::ref<jni::array<java::awt::event::ActionListener>>>(); }
	jni::ref<jni::array<java::util::EventListener>> getListeners(jni::ref<java::lang::Class> p1) { return call_method<"getListeners", jni::ref<jni::array<java::util::EventListener>>>(p1); }
	void delItems(jint p1, jint p2) { return call_method<"delItems", void>(p1, p2); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	List(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_LIST
