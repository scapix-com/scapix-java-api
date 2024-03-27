// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPanel.h>
#include <scapix/java_api/java/awt/event/ItemListener.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ServiceDialog_MediaPanel; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ServiceDialog_MediaPanel>
{
	static constexpr fixed_string class_name = "sun/print/ServiceDialog$MediaPanel";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPanel, scapix::java_api::java::awt::event::ItemListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL)
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ItemEvent.h>
#include <scapix/java_api/sun/print/ServiceDialog.h>
#include <scapix/java_api/sun/print/ServiceDialog_MarginsPanel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::ServiceDialog_MediaPanel : public jni::object_base<"sun/print/ServiceDialog$MediaPanel",
	javax::swing::JPanel,
	java::awt::event::ItemListener>
{
public:

	static jni::ref<sun::print::ServiceDialog_MediaPanel> new_object(jni::ref<sun::print::ServiceDialog> p1) { return base_::new_object(p1); }
	void itemStateChanged(jni::ref<java::awt::event::ItemEvent> p1) { return call_method<"itemStateChanged", void>(p1); }
	void addMediaListener(jni::ref<sun::print::ServiceDialog_MarginsPanel> p1) { return call_method<"addMediaListener", void>(p1); }
	void updateInfo() { return call_method<"updateInfo", void>(); }

protected:

	ServiceDialog_MediaPanel(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_MEDIAPANEL
