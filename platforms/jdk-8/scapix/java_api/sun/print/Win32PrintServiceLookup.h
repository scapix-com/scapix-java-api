// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/javax/print/PrintServiceLookup.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class Win32PrintServiceLookup; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::Win32PrintServiceLookup>
{
	static constexpr fixed_string class_name = "sun/print/Win32PrintServiceLookup";
	using base_classes = std::tuple<scapix::java_api::javax::print::PrintServiceLookup>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP)
#define SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/print/DocFlavor.h>
#include <scapix/java_api/javax/print/MultiDocPrintService.h>
#include <scapix/java_api/javax/print/PrintService.h>
#include <scapix/java_api/javax/print/attribute/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::print::Win32PrintServiceLookup : public jni::object_base<"sun/print/Win32PrintServiceLookup",
	javax::print::PrintServiceLookup>
{
public:

	static jni::ref<sun::print::Win32PrintServiceLookup> getWin32PrintLUS() { return call_static_method<"getWin32PrintLUS", jni::ref<sun::print::Win32PrintServiceLookup>>(); }
	static jni::ref<sun::print::Win32PrintServiceLookup> new_object() { return base_::new_object(); }
	jni::ref<jni::array<javax::print::PrintService>> getPrintServices() { return call_method<"getPrintServices", jni::ref<jni::array<javax::print::PrintService>>>(); }
	jni::ref<javax::print::PrintService> getPrintServiceByName(jni::ref<java::lang::String> p1) { return call_method<"getPrintServiceByName", jni::ref<javax::print::PrintService>>(p1); }
	jni::ref<jni::array<javax::print::PrintService>> getPrintServices(jni::ref<javax::print::DocFlavor> p1, jni::ref<javax::print::attribute::AttributeSet> p2) { return call_method<"getPrintServices", jni::ref<jni::array<javax::print::PrintService>>>(p1, p2); }
	jni::ref<jni::array<javax::print::MultiDocPrintService>> getMultiDocPrintServices(jni::ref<jni::array<javax::print::DocFlavor>> p1, jni::ref<javax::print::attribute::AttributeSet> p2) { return call_method<"getMultiDocPrintServices", jni::ref<jni::array<javax::print::MultiDocPrintService>>>(p1, p2); }
	jni::ref<javax::print::PrintService> getDefaultPrintService() { return call_method<"getDefaultPrintService", jni::ref<javax::print::PrintService>>(); }

protected:

	Win32PrintServiceLookup(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_WIN32PRINTSERVICELOOKUP
