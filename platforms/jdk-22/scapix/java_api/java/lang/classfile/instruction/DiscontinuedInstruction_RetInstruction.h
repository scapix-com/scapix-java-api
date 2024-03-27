// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/instruction/DiscontinuedInstruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class DiscontinuedInstruction_RetInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/DiscontinuedInstruction$RetInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::instruction::DiscontinuedInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Opcode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction : public jni::object_base<"java/lang/classfile/instruction/DiscontinuedInstruction$RetInstruction",
	java::lang::Object,
	java::lang::classfile::instruction::DiscontinuedInstruction>
{
public:

	jint slot() { return call_method<"slot", jint>(); }
	static jni::ref<java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction> of(jni::ref<java::lang::classfile::Opcode> op, jint slot) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction>>(op, slot); }
	static jni::ref<java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction> of(jint slot) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::DiscontinuedInstruction_RetInstruction>>(slot); }

protected:

	DiscontinuedInstruction_RetInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_DISCONTINUEDINSTRUCTION_RETINSTRUCTION