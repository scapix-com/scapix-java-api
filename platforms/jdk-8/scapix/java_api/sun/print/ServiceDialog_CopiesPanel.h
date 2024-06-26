// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPanel.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/javax/swing/event/ChangeListener.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ServiceDialog_CopiesPanel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ServiceDialog_CopiesPanel>
{
	static constexpr fixed_string class_name = "sun/print/ServiceDialog$CopiesPanel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPanel, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::javax::swing::event::ChangeListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL)
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/javax/swing/event/ChangeEvent.h>
#include <scapix/java_api/sun/print/ServiceDialog.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::ServiceDialog_CopiesPanel : public jni::object_base<"sun/print/ServiceDialog$CopiesPanel",
	javax::swing::JPanel,
	java::awt::event::ActionListener,
	javax::swing::event::ChangeListener>
{
public:

	static jni::ref<sun::print::ServiceDialog_CopiesPanel> new_object(jni::ref<sun::print::ServiceDialog> p1) { return base_::new_object(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	void stateChanged(jni::ref<javax::swing::event::ChangeEvent> p1) { return call_method<"stateChanged", void>(p1); }
	void updateInfo() { return call_method<"updateInfo", void>(); }

protected:

	ServiceDialog_CopiesPanel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_COPIESPANEL
