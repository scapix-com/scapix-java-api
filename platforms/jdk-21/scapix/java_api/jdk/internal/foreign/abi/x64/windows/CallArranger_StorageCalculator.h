// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::x64::windows { class CallArranger_StorageCalculator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::x64::windows::CallArranger_StorageCalculator>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/x64/windows/CallArranger$StorageCalculator";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/foreign/abi/VMStorage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::x64::windows::CallArranger_StorageCalculator : public jni::object_base<"jdk/internal/foreign/abi/x64/windows/CallArranger$StorageCalculator",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::foreign::abi::x64::windows::CallArranger_StorageCalculator> new_object(jboolean forArguments) { return base_::new_object(forArguments); }
	jni::ref<jdk::internal::foreign::abi::VMStorage> extraVarargsStorage() { return call_method<"extraVarargsStorage", jni::ref<jdk::internal::foreign::abi::VMStorage>>(); }

protected:

	CallArranger_StorageCalculator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_X64_WINDOWS_CALLARRANGER_STORAGECALCULATOR