// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/ColorChooserUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicColorChooserUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicColorChooserUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicColorChooserUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::ColorChooserUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#include <scapix/java_api/javax/swing/plaf/basic/BasicColorChooserUI_PropertyHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicColorChooserUI : public jni::object_base<"javax/swing/plaf/basic/BasicColorChooserUI",
	javax::swing::plaf::ColorChooserUI>
{
public:

	using PropertyHandler = BasicColorChooserUI_PropertyHandler;

	static jni::ref<javax::swing::plaf::basic::BasicColorChooserUI> new_object() { return base_::new_object(); }
	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }
	void uninstallUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"uninstallUI", void>(p1); }

protected:

	BasicColorChooserUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICCOLORCHOOSERUI
