// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/abi/ppc64/CallArranger_BindingCalculator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::ppc64 { class CallArranger_BoxBindingCalculator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::ppc64::CallArranger_BoxBindingCalculator>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/ppc64/CallArranger$BoxBindingCalculator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::abi::ppc64::CallArranger_BindingCalculator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::ppc64::CallArranger_BoxBindingCalculator : public jni::object_base<"jdk/internal/foreign/abi/ppc64/CallArranger$BoxBindingCalculator",
	jdk::internal::foreign::abi::ppc64::CallArranger_BindingCalculator>
{
public:


protected:

	CallArranger_BoxBindingCalculator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_PPC64_CALLARRANGER_BOXBINDINGCALCULATOR
