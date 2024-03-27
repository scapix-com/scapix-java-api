// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JOptionPane.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class ProgressMonitor_ProgressOptionPane; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::ProgressMonitor_ProgressOptionPane>
{
	static constexpr fixed_string class_name = "javax/swing/ProgressMonitor$ProgressOptionPane";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JOptionPane>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE)
#define SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/accessibility/AccessibleContext.h>
#include <scapix/java_api/javax/swing/JDialog.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class javax::swing::ProgressMonitor_ProgressOptionPane : public jni::object_base<"javax/swing/ProgressMonitor$ProgressOptionPane",
	javax::swing::JOptionPane>
{
public:

	jint getMaxCharactersPerLineCount() { return call_method<"getMaxCharactersPerLineCount", jint>(); }
	jni::ref<javax::swing::JDialog> createDialog(jni::ref<java::awt::Component> p1, jni::ref<java::lang::String> p2) { return call_method<"createDialog", jni::ref<javax::swing::JDialog>>(p1, p2); }
	jni::ref<javax::accessibility::AccessibleContext> getAccessibleContext() { return call_method<"getAccessibleContext", jni::ref<javax::accessibility::AccessibleContext>>(); }

protected:

	ProgressMonitor_ProgressOptionPane(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_PROGRESSMONITOR_PROGRESSOPTIONPANE
