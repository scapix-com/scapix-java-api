// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Container.h>
#include <scapix/java_api/javax/accessibility/Accessible.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PANEL_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PANEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt { class Panel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::Panel>
{
	static constexpr fixed_string class_name = "java/awt/Panel";
	using base_classes = std::tuple<scapix::java_api::java::awt::Container, scapix::java_api::javax::accessibility::Accessible>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PANEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PANEL)
#define SCAPIX_JAVA_API_JAVA_AWT_PANEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/LayoutManager.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::Panel : public jni::object_base<"java/awt/Panel",
	java::awt::Container,
	javax::accessibility::Accessible>
{
public:

	static jni::ref<java::awt::Panel> new_object() { return base_::new_object(); }
	static jni::ref<java::awt::Panel> new_object(jni::ref<java::awt::LayoutManager> p1) { return base_::new_object(p1); }
	void addNotify() { return call_method<"addNotify", void>(); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	Panel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PANEL
