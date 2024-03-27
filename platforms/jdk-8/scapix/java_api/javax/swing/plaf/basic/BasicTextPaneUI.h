// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/plaf/basic/BasicEditorPaneUI.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing::plaf::basic { class BasicTextPaneUI; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::plaf::basic::BasicTextPaneUI>
{
	static constexpr fixed_string class_name = "javax/swing/plaf/basic/BasicTextPaneUI";
	using base_classes = std::tuple<scapix::java_api::javax::swing::plaf::basic::BasicEditorPaneUI>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI)
#define SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/swing/JComponent.h>
#include <scapix/java_api/javax/swing/plaf/ComponentUI.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::plaf::basic::BasicTextPaneUI : public jni::object_base<"javax/swing/plaf/basic/BasicTextPaneUI",
	javax::swing::plaf::basic::BasicEditorPaneUI>
{
public:

	static jni::ref<javax::swing::plaf::ComponentUI> createUI(jni::ref<javax::swing::JComponent> p1) { return call_static_method<"createUI", jni::ref<javax::swing::plaf::ComponentUI>>(p1); }
	static jni::ref<javax::swing::plaf::basic::BasicTextPaneUI> new_object() { return base_::new_object(); }
	void installUI(jni::ref<javax::swing::JComponent> p1) { return call_method<"installUI", void>(p1); }

protected:

	BasicTextPaneUI(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PLAF_BASIC_BASICTEXTPANEUI
