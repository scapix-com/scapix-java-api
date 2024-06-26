// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::print { class PrinterGraphics; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::print::PrinterGraphics>
{
	static constexpr fixed_string class_name = "java/awt/print/PrinterGraphics";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS)
#define SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/print/PrinterJob.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::print::PrinterGraphics : public jni::object_base<"java/awt/print/PrinterGraphics",
	java::lang::Object>
{
public:

	jni::ref<java::awt::print::PrinterJob> getPrinterJob() { return call_method<"getPrinterJob", jni::ref<java::awt::print::PrinterJob>>(); }

protected:

	PrinterGraphics(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_PRINT_PRINTERGRAPHICS
