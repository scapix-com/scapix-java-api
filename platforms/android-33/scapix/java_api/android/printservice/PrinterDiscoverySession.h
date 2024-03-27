// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::printservice { class PrinterDiscoverySession; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::printservice::PrinterDiscoverySession>
{
	static constexpr fixed_string class_name = "android/printservice/PrinterDiscoverySession";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION)
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/os/CancellationSignal.h>
#include <scapix/java_api/android/print/PrinterId.h>
#include <scapix/java_api/android/printservice/CustomPrinterIconCallback.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::printservice::PrinterDiscoverySession : public jni::object_base<"android/printservice/PrinterDiscoverySession",
	java::lang::Object>
{
public:

	static jni::ref<android::printservice::PrinterDiscoverySession> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> getPrinters() { return call_method<"getPrinters", jni::ref<java::util::List>>(); }
	void addPrinters(jni::ref<java::util::List> printers) { return call_method<"addPrinters", void>(printers); }
	void removePrinters(jni::ref<java::util::List> printerIds) { return call_method<"removePrinters", void>(printerIds); }
	void onStartPrinterDiscovery(jni::ref<java::util::List> p1) { return call_method<"onStartPrinterDiscovery", void>(p1); }
	void onStopPrinterDiscovery() { return call_method<"onStopPrinterDiscovery", void>(); }
	void onValidatePrinters(jni::ref<java::util::List> p1) { return call_method<"onValidatePrinters", void>(p1); }
	void onStartPrinterStateTracking(jni::ref<android::print::PrinterId> p1) { return call_method<"onStartPrinterStateTracking", void>(p1); }
	void onRequestCustomPrinterIcon(jni::ref<android::print::PrinterId> printerId, jni::ref<android::os::CancellationSignal> cancellationSignal, jni::ref<android::printservice::CustomPrinterIconCallback> callback) { return call_method<"onRequestCustomPrinterIcon", void>(printerId, cancellationSignal, callback); }
	void onStopPrinterStateTracking(jni::ref<android::print::PrinterId> p1) { return call_method<"onStopPrinterStateTracking", void>(p1); }
	jni::ref<java::util::List> getTrackedPrinters() { return call_method<"getTrackedPrinters", jni::ref<java::util::List>>(); }
	void onDestroy() { return call_method<"onDestroy", void>(); }
	jboolean isDestroyed() { return call_method<"isDestroyed", jboolean>(); }
	jboolean isPrinterDiscoveryStarted() { return call_method<"isPrinterDiscoveryStarted", jboolean>(); }

protected:

	PrinterDiscoverySession(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTERDISCOVERYSESSION
