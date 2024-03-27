// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::instruction { class LoadInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::instruction::LoadInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/instruction/LoadInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::instruction::LoadInstruction : public jni::object_base<"jdk/internal/classfile/instruction/LoadInstruction",
	java::lang::Object,
	jdk::internal::classfile::Instruction>
{
public:

	jint slot() { return call_method<"slot", jint>(); }
	jni::ref<jdk::internal::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<jdk::internal::classfile::TypeKind>>(); }
	static jni::ref<jdk::internal::classfile::instruction::LoadInstruction> of(jni::ref<jdk::internal::classfile::TypeKind> kind, jint slot) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::LoadInstruction>>(kind, slot); }
	static jni::ref<jdk::internal::classfile::instruction::LoadInstruction> of(jni::ref<jdk::internal::classfile::Opcode> op, jint slot) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::LoadInstruction>>(op, slot); }

protected:

	LoadInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOADINSTRUCTION