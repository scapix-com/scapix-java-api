// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/Instruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class NewPrimitiveArrayInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::NewPrimitiveArrayInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/NewPrimitiveArrayInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::NewPrimitiveArrayInstruction : public jni::object_base<"java/lang/classfile/instruction/NewPrimitiveArrayInstruction",
	java::lang::Object,
	java::lang::classfile::Instruction>
{
public:

	jni::ref<java::lang::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<java::lang::classfile::TypeKind>>(); }
	static jni::ref<java::lang::classfile::instruction::NewPrimitiveArrayInstruction> of(jni::ref<java::lang::classfile::TypeKind> typeKind) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::NewPrimitiveArrayInstruction>>(typeKind); }

protected:

	NewPrimitiveArrayInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_NEWPRIMITIVEARRAYINSTRUCTION