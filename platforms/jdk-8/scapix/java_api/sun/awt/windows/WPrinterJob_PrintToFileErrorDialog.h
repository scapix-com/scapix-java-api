// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/Dialog.h>
#include <scapix/java_api/java/awt/event/ActionListener.h>

#ifndef SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG_FWD
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::awt::windows { class WPrinterJob_PrintToFileErrorDialog; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::awt::windows::WPrinterJob_PrintToFileErrorDialog>
{
	static constexpr fixed_string class_name = "sun/awt/windows/WPrinterJob$PrintToFileErrorDialog";
	using base_classes = std::tuple<scapix::java_api::java::awt::Dialog, scapix::java_api::java::awt::event::ActionListener>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG)
#define SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Frame.h>
#include <scapix/java_api/java/awt/event/ActionEvent.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/awt/windows/WPrinterJob.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::awt::windows::WPrinterJob_PrintToFileErrorDialog : public jni::object_base<"sun/awt/windows/WPrinterJob$PrintToFileErrorDialog",
	java::awt::Dialog,
	java::awt::event::ActionListener>
{
public:

	static jni::ref<sun::awt::windows::WPrinterJob_PrintToFileErrorDialog> new_object(jni::ref<sun::awt::windows::WPrinterJob> p1, jni::ref<java::awt::Frame> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<sun::awt::windows::WPrinterJob_PrintToFileErrorDialog> new_object(jni::ref<sun::awt::windows::WPrinterJob> p1, jni::ref<java::awt::Dialog> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void actionPerformed(jni::ref<java::awt::event::ActionEvent> p1) { return call_method<"actionPerformed", void>(p1); }

protected:

	WPrinterJob_PrintToFileErrorDialog(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_AWT_WINDOWS_WPRINTERJOB_PRINTTOFILEERRORDIALOG
