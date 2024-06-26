// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class UpcallLinker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::UpcallLinker>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/UpcallLinker";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/invoke/MethodType.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#include <scapix/java_api/jdk/internal/foreign/abi/AbstractLinker_UpcallStubFactory.h>
#include <scapix/java_api/jdk/internal/foreign/abi/CallingSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::UpcallLinker : public jni::object_base<"jdk/internal/foreign/abi/UpcallLinker",
	java::lang::Object>
{
public:

	static jni::ref<jdk::internal::foreign::abi::UpcallLinker> new_object() { return base_::new_object(); }
	static jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory> makeFactory(jni::ref<java::lang::invoke::MethodType> targetType, jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abi, jni::ref<jdk::internal::foreign::abi::CallingSequence> callingSequence) { return call_static_method<"makeFactory", jni::ref<jdk::internal::foreign::abi::AbstractLinker_UpcallStubFactory>>(targetType, abi, callingSequence); }

protected:

	UpcallLinker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER
