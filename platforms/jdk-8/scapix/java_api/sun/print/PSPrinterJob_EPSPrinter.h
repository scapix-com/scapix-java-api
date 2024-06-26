// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/awt/print/Pageable.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class PSPrinterJob_EPSPrinter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::PSPrinterJob_EPSPrinter>
{
	static constexpr fixed_string class_name = "sun/print/PSPrinterJob$EPSPrinter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::awt::print::Pageable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER)
#define SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/print/PageFormat.h>
#include <scapix/java_api/java/awt/print/Printable.h>
#include <scapix/java_api/java/io/PrintStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::PSPrinterJob_EPSPrinter : public jni::object_base<"sun/print/PSPrinterJob$EPSPrinter",
	java::lang::Object,
	java::awt::print::Pageable>
{
public:

	static jni::ref<sun::print::PSPrinterJob_EPSPrinter> new_object(jni::ref<java::awt::print::Printable> p1, jni::ref<java::lang::String> p2, jni::ref<java::io::PrintStream> p3, jint p4, jint p5, jint p6, jint p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	void print() { return call_method<"print", void>(); }
	jint getNumberOfPages() { return call_method<"getNumberOfPages", jint>(); }
	jni::ref<java::awt::print::PageFormat> getPageFormat(jint p1) { return call_method<"getPageFormat", jni::ref<java::awt::print::PageFormat>>(p1); }
	jni::ref<java::awt::print::Printable> getPrintable(jint p1) { return call_method<"getPrintable", jni::ref<java::awt::print::Printable>>(p1); }

protected:

	PSPrinterJob_EPSPrinter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_EPSPRINTER
