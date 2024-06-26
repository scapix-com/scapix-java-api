// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>
#include <scapix/java_api/javax/swing/SwingConstants.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JTabbedPane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JTabbedPane>
{
	static constexpr fixed_string class_name = "javax/swing/JTabbedPane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent, scapix::java_api::java::io::Serializable, scapix::java_api::javax::accessibility::Accessible, scapix::java_api::javax::swing::SwingConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Color.h>
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Rectangle.h>
#include <scapix/java_api/java/awt/event/MouseEvent.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/Icon.h>
#include <scapix/java_api/javax/swing/SingleSelectionModel.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>
#include <scapix/java_api/javax/swing/plaf/TabbedPaneUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JTabbedPane : public jni::object_base<"javax/swing/JTabbedPane",
	javax::swing::JComponent,
	java::io::Serializable,
	javax::accessibility::Accessible,
	javax::swing::SwingConstants>
{
public:

	static jint WRAP_TAB_LAYOUT() { return get_static_field<"WRAP_TAB_LAYOUT", jint>(); }
	static jint SCROLL_TAB_LAYOUT() { return get_static_field<"SCROLL_TAB_LAYOUT", jint>(); }

	static jni::ref<javax::swing::JTabbedPane> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::JTabbedPane> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<javax::swing::JTabbedPane> new_object(jint p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<javax::swing::plaf::TabbedPaneUI> getUI() { return call_method<"getUI", jni::ref<javax::swing::plaf::TabbedPaneUI>>(); }
	void setUI(jni::ref<javax::swing::plaf::TabbedPaneUI> p1) { return call_method<"setUI", void>(p1); }
	void updateUI() { return call_method<"updateUI", void>(); }
	jni::ref<java::lang::String> getUIClassID() { return call_method<"getUIClassID", jni::ref<java::lang::String>>(); }
	void addChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"addChangeListener", void>(p1); }
	void removeChangeListener(jni::ref<javax::swing::event::ChangeListener> p1) { return call_method<"removeChangeListener", void>(p1); }
	jni::ref<jni::array<javax::swing::event::ChangeListener>> getChangeListeners() { return call_method<"getChangeListeners", jni::ref<jni::array<javax::swing::event::ChangeListener>>>(); }
	jni::ref<javax::swing::SingleSelectionModel> getModel() { return call_method<"getModel", jni::ref<javax::swing::SingleSelectionModel>>(); }
	void setModel(jni::ref<javax::swing::SingleSelectionModel> p1) { return call_method<"setModel", void>(p1); }
	jint getTabPlacement() { return call_method<"getTabPlacement", jint>(); }
	void setTabPlacement(jint p1) { return call_method<"setTabPlacement", void>(p1); }
	jint getTabLayoutPolicy() { return call_method<"getTabLayoutPolicy", jint>(); }
	void setTabLayoutPolicy(jint p1) { return call_method<"setTabLayoutPolicy", void>(p1); }
	jint getSelectedIndex() { return call_method<"getSelectedIndex", jint>(); }
	void setSelectedIndex(jint p1) { return call_method<"setSelectedIndex", void>(p1); }
	jni::ref<java::awt::Component> getSelectedComponent() { return call_method<"getSelectedComponent", jni::ref<java::awt::Component>>(); }
	void setSelectedComponent(jni::ref<java::awt::Component> p1) { return call_method<"setSelectedComponent", void>(p1); }
	void insertTab(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2, jni::ref<java::awt::Component> p3, jni::ref<java::lang::String> p4, jint p5) { return call_method<"insertTab", void>(p1, p2, p3, p4, p5); }
	void addTab(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2, jni::ref<java::awt::Component> p3, jni::ref<java::lang::String> p4) { return call_method<"addTab", void>(p1, p2, p3, p4); }
	void addTab(jni::ref<java::lang::String> p1, jni::ref<javax::swing::Icon> p2, jni::ref<java::awt::Component> p3) { return call_method<"addTab", void>(p1, p2, p3); }
	void addTab(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addTab", void>(p1, p2); }
	jni::ref<java::awt::Component> add(jni::ref<java::awt::Component> p1) { return call_method<"add", jni::ref<java::awt::Component>>(p1); }
	jni::ref<java::awt::Component> add(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"add", jni::ref<java::awt::Component>>(p1, p2); }
	jni::ref<java::awt::Component> add(jni::ref<java::awt::Component> p1, jint p2) { return call_method<"add", jni::ref<java::awt::Component>>(p1, p2); }
	void add(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2) { return call_method<"add", void>(p1, p2); }
	void add(jni::ref<java::awt::Component> p1, jni::ref<java::lang::Object> p2, jint p3) { return call_method<"add", void>(p1, p2, p3); }
	void removeTabAt(jint p1) { return call_method<"removeTabAt", void>(p1); }
	void remove(jni::ref<java::awt::Component> p1) { return call_method<"remove", void>(p1); }
	void remove(jint p1) { return call_method<"remove", void>(p1); }
	void removeAll() { return call_method<"removeAll", void>(); }
	jint getTabCount() { return call_method<"getTabCount", jint>(); }
	jint getTabRunCount() { return call_method<"getTabRunCount", jint>(); }
	jni::ref<java::lang::String> getTitleAt(jint p1) { return call_method<"getTitleAt", jni::ref<java::lang::String>>(p1); }
	jni::ref<javax::swing::Icon> getIconAt(jint p1) { return call_method<"getIconAt", jni::ref<javax::swing::Icon>>(p1); }
	jni::ref<javax::swing::Icon> getDisabledIconAt(jint p1) { return call_method<"getDisabledIconAt", jni::ref<javax::swing::Icon>>(p1); }
	jni::ref<java::lang::String> getToolTipTextAt(jint p1) { return call_method<"getToolTipTextAt", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::awt::Color> getBackgroundAt(jint p1) { return call_method<"getBackgroundAt", jni::ref<java::awt::Color>>(p1); }
	jni::ref<java::awt::Color> getForegroundAt(jint p1) { return call_method<"getForegroundAt", jni::ref<java::awt::Color>>(p1); }
	jboolean isEnabledAt(jint p1) { return call_method<"isEnabledAt", jboolean>(p1); }
	jni::ref<java::awt::Component> getComponentAt(jint p1) { return call_method<"getComponentAt", jni::ref<java::awt::Component>>(p1); }
	jint getMnemonicAt(jint p1) { return call_method<"getMnemonicAt", jint>(p1); }
	jint getDisplayedMnemonicIndexAt(jint p1) { return call_method<"getDisplayedMnemonicIndexAt", jint>(p1); }
	jni::ref<java::awt::Rectangle> getBoundsAt(jint p1) { return call_method<"getBoundsAt", jni::ref<java::awt::Rectangle>>(p1); }
	void setTitleAt(jint p1, jni::ref<java::lang::String> p2) { return call_method<"setTitleAt", void>(p1, p2); }
	void setIconAt(jint p1, jni::ref<javax::swing::Icon> p2) { return call_method<"setIconAt", void>(p1, p2); }
	void setDisabledIconAt(jint p1, jni::ref<javax::swing::Icon> p2) { return call_method<"setDisabledIconAt", void>(p1, p2); }
	void setToolTipTextAt(jint p1, jni::ref<java::lang::String> p2) { return call_method<"setToolTipTextAt", void>(p1, p2); }
	void setBackgroundAt(jint p1, jni::ref<java::awt::Color> p2) { return call_method<"setBackgroundAt", void>(p1, p2); }
	void setForegroundAt(jint p1, jni::ref<java::awt::Color> p2) { return call_method<"setForegroundAt", void>(p1, p2); }
	void setEnabledAt(jint p1, jboolean p2) { return call_method<"setEnabledAt", void>(p1, p2); }
	void setComponentAt(jint p1, jni::ref<java::awt::Component> p2) { return call_method<"setComponentAt", void>(p1, p2); }
	void setDisplayedMnemonicIndexAt(jint p1, jint p2) { return call_method<"setDisplayedMnemonicIndexAt", void>(p1, p2); }
	void setMnemonicAt(jint p1, jint p2) { return call_method<"setMnemonicAt", void>(p1, p2); }
	jint indexOfTab(jni::ref<java::lang::String> p1) { return call_method<"indexOfTab", jint>(p1); }
	jint indexOfTab(jni::ref<javax::swing::Icon> p1) { return call_method<"indexOfTab", jint>(p1); }
	jint indexOfComponent(jni::ref<java::awt::Component> p1) { return call_method<"indexOfComponent", jint>(p1); }
	jint indexAtLocation(jint p1, jint p2) { return call_method<"indexAtLocation", jint>(p1, p2); }
	jni::ref<java::lang::String> getToolTipText(jni::ref<java::awt::event::MouseEvent> p1) { return call_method<"getToolTipText", jni::ref<java::lang::String>>(p1); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }
	void setTabComponentAt(jint p1, jni::ref<java::awt::Component> p2) { return call_method<"setTabComponentAt", void>(p1, p2); }
	jni::ref<java::awt::Component> getTabComponentAt(jint p1) { return call_method<"getTabComponentAt", jni::ref<java::awt::Component>>(p1); }
	jint indexOfTabComponent(jni::ref<java::awt::Component> p1) { return call_method<"indexOfTabComponent", jint>(p1); }

protected:

	JTabbedPane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JTABBEDPANE
