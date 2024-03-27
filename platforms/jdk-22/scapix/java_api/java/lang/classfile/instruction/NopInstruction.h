// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class NopInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::NopInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/NopInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::NopInstruction : public jni::object_base<"java/lang/classfile/instruction/NopInstruction",
	java::lang::Object,
	java::lang::classfile::Instruction>
{
public:

	static jni::ref<java::lang::classfile::instruction::NopInstruction> of() { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::NopInstruction>>(); }

protected:

	NopInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NOPINSTRUCTION
