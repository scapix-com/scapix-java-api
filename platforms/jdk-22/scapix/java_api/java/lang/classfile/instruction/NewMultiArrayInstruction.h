// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class NewMultiArrayInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::NewMultiArrayInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/NewMultiArrayInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::NewMultiArrayInstruction : public jni::object_base<"java/lang/classfile/instruction/NewMultiArrayInstruction",
	java::lang::Object,
	java::lang::classfile::Instruction>
{
public:

	jni::ref<java::lang::classfile::constantpool::ClassEntry> arrayType() { return call_method<"arrayType", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	jint dimensions() { return call_method<"dimensions", jint>(); }
	static jni::ref<java::lang::classfile::instruction::NewMultiArrayInstruction> of(jni::ref<java::lang::classfile::constantpool::ClassEntry> arrayTypeEntry, jint dimensions) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::NewMultiArrayInstruction>>(arrayTypeEntry, dimensions); }

protected:

	NewMultiArrayInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWMULTIARRAYINSTRUCTION