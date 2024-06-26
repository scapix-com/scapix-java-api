// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::instruction { class BranchInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::instruction::BranchInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/instruction/BranchInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::instruction::BranchInstruction : public jni::object_base<"jdk/internal/classfile/instruction/BranchInstruction",
	java::lang::Object,
	jdk::internal::classfile::Instruction>
{
public:

	jni::ref<jdk::internal::classfile::Label> target() { return call_method<"target", jni::ref<jdk::internal::classfile::Label>>(); }
	static jni::ref<jdk::internal::classfile::instruction::BranchInstruction> of(jni::ref<jdk::internal::classfile::Opcode> op, jni::ref<jdk::internal::classfile::Label> target) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::BranchInstruction>>(op, target); }

protected:

	BranchInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_BRANCHINSTRUCTION
