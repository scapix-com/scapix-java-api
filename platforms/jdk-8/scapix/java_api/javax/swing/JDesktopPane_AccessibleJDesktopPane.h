// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JComponent_AccessibleJComponent.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class JDesktopPane_AccessibleJDesktopPane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::JDesktopPane_AccessibleJDesktopPane>
{
	static constexpr fixed_string class_name = "javax/swing/JDesktopPane$AccessibleJDesktopPane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JComponent_AccessibleJComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::JDesktopPane_AccessibleJDesktopPane : public jni::object_base<"javax/swing/JDesktopPane$AccessibleJDesktopPane",
	javax::swing::JComponent_AccessibleJComponent>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }

protected:

	JDesktopPane_AccessibleJDesktopPane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_JDESKTOPPANE_ACCESSIBLEJDESKTOPPANE
