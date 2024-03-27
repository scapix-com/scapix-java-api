// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ScrollBarUI.h>
#include <scapix/java_api/java/awt/LayoutManager.h>
#include <scapix/java_api/javax/swing/SwingConstants.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicScrollBarUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicScrollBarUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicScrollBarUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ScrollBarUI, scapix::java_api::java::awt::LayoutManager, scapix::java_api::javax::swing::SwingConstants>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicScrollBarUI_PropertyChangeHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicScrollBarUI : public jni::object_base<"javax/swing/plaf/basic/BasicScrollBarUI",
	javax::swing::plaf::ScrollBarUI,
	java::awt::LayoutManager,
	javax::swing::SwingConstants>
{
public:

	using PropertyChangeHandler = BasicScrollBarUI_PropertyChangeHandler;

	static jni::ref<javax::swing::plaf::basic::BasicScrollBarUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	jboolean isThumbRollover() { return call_method<"isThumbRollover", jboolean>(); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }
	void addLayoutComponent(jni::ref<java::lang::String> p1, jni::ref<java::awt::Component> p2) { return call_method<"addLayoutComponent", void>(p1, p2); }
	void removeLayoutComponent(jni::ref<java::awt::Component> p1) { return call_method<"removeLayoutComponent", void>(p1); }
	jni::ref<java::awt::Dimension> preferredLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"preferredLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> minimumLayoutSize(jni::ref<java::awt::Container> p1) { return call_method<"minimumLayoutSize", jni::ref<java::awt::Dimension>>(p1); }
	void layoutContainer(jni::ref<java::awt::Container> p1) { return call_method<"layoutContainer", void>(p1); }
	jboolean getSupportsAbsolutePositioning() { return call_method<"getSupportsAbsolutePositioning", jboolean>(); }

protected:

	BasicScrollBarUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICSCROLLBARUI