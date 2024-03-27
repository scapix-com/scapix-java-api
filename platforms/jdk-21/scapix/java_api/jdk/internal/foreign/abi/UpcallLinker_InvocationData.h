// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class UpcallLinker_InvocationData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::UpcallLinker_InvocationData>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/UpcallLinker$InvocationData";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Binding_VMStore.h>
#include <scapix/java_api/jdk/internal/foreign/abi/CallingSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::UpcallLinker_InvocationData : public jni::object_base<"jdk/internal/foreign/abi/UpcallLinker$InvocationData",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<java::util::Map> argIndexMap() { return call_method<"argIndexMap", jni::ref<java::util::Map>>(); }
	jni::ref<java::util::Map> retIndexMap() { return call_method<"retIndexMap", jni::ref<java::util::Map>>(); }
	jni::ref<jdk::internal::foreign::abi::CallingSequence> callingSequence() { return call_method<"callingSequence", jni::ref<jdk::internal::foreign::abi::CallingSequence>>(); }
	jni::ref<jni::array<jdk::internal::foreign::abi::Binding_VMStore>> retMoves() { return call_method<"retMoves", jni::ref<jni::array<jdk::internal::foreign::abi::Binding_VMStore>>>(); }
	jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abi() { return call_method<"abi", jni::ref<jdk::internal::foreign::abi::ABIDescriptor>>(); }

protected:

	UpcallLinker_InvocationData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_INVOCATIONDATA
