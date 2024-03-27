// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/app/Service.h>

#ifndef SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE_FWD
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::printservice { class PrintService; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::printservice::PrintService>
{
	static constexpr fixed_string class_name = "android/printservice/PrintService";
	using base_classes = std::tuple<scapix::java_api::android::app::Service>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE)
#define SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Intent.h>
#include <scapix/java_api/android/os/IBinder.h>
#include <scapix/java_api/android/print/PrinterId.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::printservice::PrintService : public jni::object_base<"android/printservice/PrintService",
	android::app::Service>
{
public:

	static jni::ref<java::lang::String> EXTRA_PRINTER_INFO() { return get_static_field<"EXTRA_PRINTER_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PRINT_DOCUMENT_INFO() { return get_static_field<"EXTRA_PRINT_DOCUMENT_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> EXTRA_PRINT_JOB_INFO() { return get_static_field<"EXTRA_PRINT_JOB_INFO", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_INTERFACE() { return get_static_field<"SERVICE_INTERFACE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SERVICE_META_DATA() { return get_static_field<"SERVICE_META_DATA", jni::ref<java::lang::String>>(); }

	static jni::ref<android::printservice::PrintService> new_object() { return base_::new_object(); }
	jni::ref<java::util::List> getActivePrintJobs() { return call_method<"getActivePrintJobs", jni::ref<java::util::List>>(); }
	jni::ref<android::print::PrinterId> generatePrinterId(jni::ref<java::lang::String> localId) { return call_method<"generatePrinterId", jni::ref<android::print::PrinterId>>(localId); }
	jni::ref<android::os::IBinder> onBind(jni::ref<android::content::Intent> intent) { return call_method<"onBind", jni::ref<android::os::IBinder>>(intent); }

protected:

	PrintService(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_PRINTSERVICE_PRINTSERVICE