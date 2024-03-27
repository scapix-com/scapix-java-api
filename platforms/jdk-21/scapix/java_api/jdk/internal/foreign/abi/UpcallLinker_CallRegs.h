// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Record.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi { class UpcallLinker_CallRegs; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::UpcallLinker_CallRegs>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/UpcallLinker$CallRegs";
	using base_classes = std::tuple<scapix::java_api::java::lang::Record>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/foreign/abi/VMStorage.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::foreign::abi::UpcallLinker_CallRegs : public jni::object_base<"jdk/internal/foreign/abi/UpcallLinker$CallRegs",
	java::lang::Record>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> argRegs() { return call_method<"argRegs", jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>>>(); }
	jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> retRegs() { return call_method<"retRegs", jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>>>(); }

protected:

	UpcallLinker_CallRegs(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_UPCALLLINKER_CALLREGS
