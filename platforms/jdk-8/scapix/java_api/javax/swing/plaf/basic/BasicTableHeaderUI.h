// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/TableHeaderUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTableHeaderUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTableHeaderUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTableHeaderUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::TableHeaderUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dimension.h>
#include <scapix/java_api/java/awt/Graphics.h>
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicTableHeaderUI_MouseInputHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicTableHeaderUI : public jni::object_base<"javax/swing/plaf/basic/BasicTableHeaderUI",
	javax::swing::plaf::TableHeaderUI>
{
public:

	using MouseInputHandler = BasicTableHeaderUI_MouseInputHandler;

	static jni::ref<javax::swing::plaf::basic::BasicTableHeaderUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }
	jint getBaseline(jni::ref<javax::swing::JComponent> p1, jint p2, jint p3) { return call_method<"getBaseline", jint>(p1, p2, p3); }
	void paint(jni::ref<java::awt::Graphics> p1, jni::ref<javax::swing::JComponent> p2) { return call_method<"paint", void>(p1, p2); }
	jni::ref<java::awt::Dimension> getMinimumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMinimumSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getPreferredSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getPreferredSize", jni::ref<java::awt::Dimension>>(p1); }
	jni::ref<java::awt::Dimension> getMaximumSize(jni::ref<javax::swing::JComponent> p1) { return call_method<"getMaximumSize", jni::ref<java::awt::Dimension>>(p1); }

protected:

	BasicTableHeaderUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTABLEHEADERUI
