// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::aarch64 { class CallArranger_BindingCalculator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::aarch64::CallArranger_BindingCalculator>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/aarch64/CallArranger$BindingCalculator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::aarch64::CallArranger_BindingCalculator : public jni::object_base<"jdk/internal/foreign/abi/aarch64/CallArranger$BindingCalculator",
	java::lang::Object>
{
public:


protected:

	CallArranger_BindingCalculator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_CALLARRANGER_BINDINGCALCULATOR
