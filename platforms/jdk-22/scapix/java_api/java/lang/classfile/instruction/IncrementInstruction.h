// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class IncrementInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::IncrementInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/IncrementInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::IncrementInstruction : public jni::object_base<"java/lang/classfile/instruction/IncrementInstruction",
	java::lang::Object,
	java::lang::classfile::Instruction>
{
public:

	jint slot() { return call_method<"slot", jint>(); }
	jint constant() { return call_method<"constant", jint>(); }
	static jni::ref<java::lang::classfile::instruction::IncrementInstruction> of(jint slot, jint constant) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::IncrementInstruction>>(slot, constant); }

protected:

	IncrementInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_INCREMENTINSTRUCTION
