// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::instruction { class StackInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::instruction::StackInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/instruction/StackInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::instruction::StackInstruction : public jni::object_base<"jdk/internal/classfile/instruction/StackInstruction",
	java::lang::Object,
	jdk::internal::classfile::Instruction>
{
public:

	static jni::ref<jdk::internal::classfile::instruction::StackInstruction> of(jni::ref<jdk::internal::classfile::Opcode> op) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::StackInstruction>>(op); }

protected:

	StackInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_STACKINSTRUCTION
