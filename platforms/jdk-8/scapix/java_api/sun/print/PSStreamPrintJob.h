// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/javax/print/CancelablePrintJob.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class PSStreamPrintJob; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::PSStreamPrintJob>
{
	static constexpr fixed_string class_name = "sun/print/PSStreamPrintJob";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::javax::print::CancelablePrintJob>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB)
#define SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/print/Pageable.h>
#include <scapix/java_api/java/awt/print/Printable.h>
#include <scapix/java_api/javax/print/Doc.h>
#include <scapix/java_api/javax/print/PrintService.h>
#include <scapix/java_api/javax/print/attribute/PrintJobAttributeSet.h>
#include <scapix/java_api/javax/print/attribute/PrintRequestAttributeSet.h>
#include <scapix/java_api/javax/print/event/PrintJobAttributeListener.h>
#include <scapix/java_api/javax/print/event/PrintJobListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::PSStreamPrintJob : public jni::object_base<"sun/print/PSStreamPrintJob",
	java::lang::Object,
	javax::print::CancelablePrintJob>
{
public:

	jni::ref<javax::print::PrintService> getPrintService() { return call_method<"getPrintService", jni::ref<javax::print::PrintService>>(); }
	jni::ref<javax::print::attribute::PrintJobAttributeSet> getAttributes() { return call_method<"getAttributes", jni::ref<javax::print::attribute::PrintJobAttributeSet>>(); }
	void addPrintJobListener(jni::ref<javax::print::event::PrintJobListener> p1) { return call_method<"addPrintJobListener", void>(p1); }
	void removePrintJobListener(jni::ref<javax::print::event::PrintJobListener> p1) { return call_method<"removePrintJobListener", void>(p1); }
	void addPrintJobAttributeListener(jni::ref<javax::print::event::PrintJobAttributeListener> p1, jni::ref<javax::print::attribute::PrintJobAttributeSet> p2) { return call_method<"addPrintJobAttributeListener", void>(p1, p2); }
	void removePrintJobAttributeListener(jni::ref<javax::print::event::PrintJobAttributeListener> p1) { return call_method<"removePrintJobAttributeListener", void>(p1); }
	void print(jni::ref<javax::print::Doc> p1, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p2) { return call_method<"print", void>(p1, p2); }
	void printableJob(jni::ref<java::awt::print::Printable> p1, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p2) { return call_method<"printableJob", void>(p1, p2); }
	void pageableJob(jni::ref<java::awt::print::Pageable> p1, jni::ref<javax::print::attribute::PrintRequestAttributeSet> p2) { return call_method<"pageableJob", void>(p1, p2); }
	void cancel() { return call_method<"cancel", void>(); }

protected:

	PSStreamPrintJob(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSSTREAMPRINTJOB
