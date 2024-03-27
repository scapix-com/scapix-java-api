// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPanel.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>
#include <scapix/java_api/javax/swing/event/PopupMenuListener.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ServiceDialog_PrintServicePanel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ServiceDialog_PrintServicePanel>
{
	static constexpr fixed_string class_name = "sun/print/ServiceDialog$PrintServicePanel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPanel, scapix::java_api::java::awt::event::ActionListener, scapix::java_api::java::awt::event::ItemListener, scapix::java_api::javax::swing::event::PopupMenuListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL)
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/awt/event/ItemEvent.h>
#include <scapix/java_api/javax/swing/event/PopupMenuEvent.h>
#include <scapix/java_api/sun/print/ServiceDialog.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::ServiceDialog_PrintServicePanel : public jni::object_base<"sun/print/ServiceDialog$PrintServicePanel",
	javax::swing::JPanel,
	java::awt::event::ActionListener,
	java::awt::event::ItemListener,
	javax::swing::event::PopupMenuListener>
{
public:

	static jni::ref<sun::print::ServiceDialog_PrintServicePanel> new_object(jni::ref<sun::print::ServiceDialog> p1) { return base_::new_object(p1); }
	jboolean isPrintToFileSelected() { return call_method<"isPrintToFileSelected", jboolean>(); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	void itemStateChanged(jni::ref<java::awt::event::ItemEvent> p1) { return call_method<"itemStateChanged", void>(p1); }
	void popupMenuWillBecomeVisible(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuWillBecomeVisible", void>(p1); }
	void popupMenuWillBecomeInvisible(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuWillBecomeInvisible", void>(p1); }
	void popupMenuCanceled(jni::ref<javax::swing::event::PopupMenuEvent> p1) { return call_method<"popupMenuCanceled", void>(p1); }
	void updateInfo() { return call_method<"updateInfo", void>(); }

protected:

	ServiceDialog_PrintServicePanel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_PRINTSERVICEPANEL
