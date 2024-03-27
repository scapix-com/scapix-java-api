// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Panel_AccessibleAWTPanel.h>

#ifndef SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET_FWD
#define SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::applet { class Applet_AccessibleApplet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::applet::Applet_AccessibleApplet>
{
	static constexpr fixed_string class_name = "java/applet/Applet$AccessibleApplet";
	using base_classes = std::tuple<scapix::java_api::java::awt::Panel_AccessibleAWTPanel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET)
#define SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/accessibility/AccessibleRole.h>
#include <scapix/java_api/javax/accessibility/AccessibleStateSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::applet::Applet_AccessibleApplet : public jni::object_base<"java/applet/Applet$AccessibleApplet",
	java::awt::Panel_AccessibleAWTPanel>
{
public:

	jni::ref<javax::accessibility::AccessibleRole> getAccessibleRole() { return call_method<"getAccessibleRole", jni::ref<javax::accessibility::AccessibleRole>>(); }
	jni::ref<javax::accessibility::AccessibleStateSet> getAccessibleStateSet() { return call_method<"getAccessibleStateSet", jni::ref<javax::accessibility::AccessibleStateSet>>(); }

protected:

	Applet_AccessibleApplet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_APPLET_APPLET_ACCESSIBLEAPPLET
