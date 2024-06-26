// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JPanel.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ServiceDialog_IconRadioButton; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ServiceDialog_IconRadioButton>
{
	static constexpr fixed_string class_name = "sun/print/ServiceDialog$IconRadioButton";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JPanel>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON)
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/ActionListener.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/swing/ButtonGroup.h>
#include <scapix/java_api/sun/print/ServiceDialog.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::ServiceDialog_IconRadioButton : public jni::object_base<"sun/print/ServiceDialog$IconRadioButton",
	javax::swing::JPanel>
{
public:

	static jni::ref<sun::print::ServiceDialog_IconRadioButton> new_object(jni::ref<sun::print::ServiceDialog> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jboolean p4, jni::ref<javax::swing::ButtonGroup> p5, jni::ref<java::awt::event::ActionListener> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	void addActionListener(jni::ref<java::awt::event::ActionListener> p1) { return call_method<"addActionListener", void>(p1); }
	jboolean isSameAs(jni::ref<java::lang::Object> p1) { return call_method<"isSameAs", jboolean>(p1); }
	void setEnabled(jboolean p1) { return call_method<"setEnabled", void>(p1); }
	jboolean isSelected() { return call_method<"isSelected", jboolean>(); }
	void setSelected(jboolean p1) { return call_method<"setSelected", void>(p1); }

protected:

	ServiceDialog_IconRadioButton(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_ICONRADIOBUTTON
