// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE_FWD
#define SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::print { class PSPrinterJob_GState; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::print::PSPrinterJob_GState>
{
	static constexpr fixed_string class_name = "sun/print/PSPrinterJob$GState";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE)
#define SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::print::PSPrinterJob_GState : public jni::object_base<"sun/print/PSPrinterJob$GState",
	java::lang::Object>
{
public:


protected:

	PSPrinterJob_GState(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_PRINT_PSPRINTERJOB_GSTATE