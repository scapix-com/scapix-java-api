// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/swing/JDialog.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class ServiceDialog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::ServiceDialog>
{
	static constexpr fixed_string class_name = "sun/print/ServiceDialog";
	using base_classes = std::tuple<scapix::java_api::javax::swing::JDialog, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG)
#define SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Dialog.h>
#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/java/awt/GraphicsConfiguration.h>
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/PrintService.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::ServiceDialog : public jni::object_base<"sun/print/ServiceDialog",
	javax::swing::JDialog,
	java::awt::event::ActionListener>
{
public:

	static jint WAITING() { return get_static_field<"WAITING", jint>(); }
	static jint APPROVE() { return get_static_field<"APPROVE", jint>(); }
	static jint CANCEL() { return get_static_field<"CANCEL", jint>(); }

	static jni::ref<sun::print::ServiceDialog> new_object(jni::ref<java::awt::GraphicsConfiguration> p1, jint p2, jint p3, jni::ref<jni::array<javax::print::PrintService>> p4, jint p5, jni::ref<javax::print::DocFlavor> p6, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p7, jni::ref<java::awt::Dialog> p8) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8); }
	static jni::ref<sun::print::ServiceDialog> new_object(jni::ref<java::awt::GraphicsConfiguration> p1, jint p2, jint p3, jni::ref<jni::array<javax::print::PrintService>> p4, jint p5, jni::ref<javax::print::DocFlavor> p6, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p7, jni::ref<java::awt::Frame> p8) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8); }
	static jni::ref<sun::print::ServiceDialog> new_object(jni::ref<java::awt::GraphicsConfiguration> p1, jint p2, jint p3, jni::ref<javax::print::PrintService> p4, jni::ref<javax::print::DocFlavor> p5, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p6, jni::ref<java::awt::Dialog> p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<sun::print::ServiceDialog> new_object(jni::ref<java::awt::GraphicsConfiguration> p1, jint p2, jint p3, jni::ref<javax::print::PrintService> p4, jni::ref<javax::print::DocFlavor> p5, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p6, jni::ref<java::awt::Frame> p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	jint getStatus() { return call_method<"getStatus", jint>(); }
	jni::ref<javax::print::attribute::PrintRequestAttributeSet> getAttributes() { return call_method<"getAttributes", jni::ref<javax::print::attribute::PrintRequestAttributeSet>>(); }
	jni::ref<javax::print::PrintService> getPrintService() { return call_method<"getPrintService", jni::ref<javax::print::PrintService>>(); }
	void dispose(jint p1) { return call_method<"dispose", void>(p1); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }
	static void initResource() { return call_static_method<"initResource", void>(); }
	static jni::ref<java::lang::String> getMsg(jni::ref<java::lang::String> p1) { return call_static_method<"getMsg", jni::ref<java::lang::String>>(p1); }
	static void showNoPrintService(jni::ref<java::awt::GraphicsConfiguration> p1) { return call_static_method<"showNoPrintService", void>(p1); }

protected:

	ServiceDialog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_SERVICEDIALOG
