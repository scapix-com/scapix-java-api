// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/foreign/abi/Architecture.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::foreign::abi::aarch64 { class AArch64Architecture; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::foreign::abi::aarch64::AArch64Architecture>
{
	static constexpr fixed_string class_name = "jdk/internal/foreign/abi/aarch64/AArch64Architecture";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::foreign::abi::Architecture>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/foreign/abi/ABIDescriptor.h>
#include <scapix/java_api/jdk/internal/foreign/abi/VMStorage.h>
#include <scapix/java_api/jdk/internal/foreign/abi/aarch64/AArch64Architecture_StorageType.h>
#include <scapix/java_api/jdk/internal/foreign/abi/aarch64/AArch64Architecture_Regs.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::foreign::abi::aarch64::AArch64Architecture : public jni::object_base<"jdk/internal/foreign/abi/aarch64/AArch64Architecture",
	java::lang::Object,
	jdk::internal::foreign::abi::Architecture>
{
public:

	using StorageType = AArch64Architecture_StorageType;
	using Regs = AArch64Architecture_Regs;

	static jni::ref<jdk::internal::foreign::abi::Architecture> INSTANCE() { return get_static_field<"INSTANCE", jni::ref<jdk::internal::foreign::abi::Architecture>>(); }

	jboolean isStackType(jint cls) { return call_method<"isStackType", jboolean>(cls); }
	jint typeSize(jint cls) { return call_method<"typeSize", jint>(cls); }
	static jni::ref<jdk::internal::foreign::abi::VMStorage> stackStorage(jshort size, jint byteOffset) { return call_static_method<"stackStorage", jni::ref<jdk::internal::foreign::abi::VMStorage>>(size, byteOffset); }
	static jni::ref<jdk::internal::foreign::abi::ABIDescriptor> abiFor(jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> inputIntRegs, jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> inputVectorRegs, jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> outputIntRegs, jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> outputVectorRegs, jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> volatileIntRegs, jni::ref<jni::array<jdk::internal::foreign::abi::VMStorage>> volatileVectorRegs, jint stackAlignment, jint shadowSpace, jni::ref<jdk::internal::foreign::abi::VMStorage> scratch1, jni::ref<jdk::internal::foreign::abi::VMStorage> scratch2) { return call_static_method<"abiFor", jni::ref<jdk::internal::foreign::abi::ABIDescriptor>>(inputIntRegs, inputVectorRegs, outputIntRegs, outputVectorRegs, volatileIntRegs, volatileVectorRegs, stackAlignment, shadowSpace, scratch1, scratch2); }

protected:

	AArch64Architecture(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_FOREIGN_ABI_AARCH64_AARCH64ARCHITECTURE
