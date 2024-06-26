// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/MenuBarUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicMenuBarUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicMenuBarUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicMenuBarUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::MenuBarUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicMenuBarUI : public jni::object_base<"javax/swing/plaf/basic/BasicMenuBarUI",
	javax::swing::plaf::MenuBarUI>
{
public:

	static jni::ref<javax::swing::plaf::basic::BasicMenuBarUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }

protected:

	BasicMenuBarUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICMENUBARUI
