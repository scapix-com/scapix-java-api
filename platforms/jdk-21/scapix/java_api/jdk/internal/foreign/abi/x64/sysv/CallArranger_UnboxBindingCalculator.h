// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/foreign/abi/x64/sysv/CallArranger_BindingCalculator.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::x64::sysv { class CallArranger_UnboxBindingCalculator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::x64::sysv::CallArranger_UnboxBindingCalculator>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/x64/sysv/CallArranger$UnboxBindingCalculator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::foreign::abi::x64::sysv::CallArranger_BindingCalculator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::x64::sysv::CallArranger_UnboxBindingCalculator : public jni::object_base<"jdk/internal/foreign/abi/x64/sysv/CallArranger$UnboxBindingCalculator",
	jdk::internal::foreign::abi::x64::sysv::CallArranger_BindingCalculator>
{
public:


protected:

	CallArranger_UnboxBindingCalculator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_SYSV_CALLARRANGER_UNBOXBINDINGCALCULATOR
