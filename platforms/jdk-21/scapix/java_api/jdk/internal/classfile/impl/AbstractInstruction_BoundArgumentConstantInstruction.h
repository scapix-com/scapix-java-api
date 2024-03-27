// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_BoundInstruction.h>
#include <scapix/java_api/jdk/internal/classfile/instruction/ConstantInstruction_ArgumentConstantInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_BoundArgumentConstantInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundArgumentConstantInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$BoundArgumentConstantInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction, scapix::java_api::jdk::internal::classfile::instruction::ConstantInstruction_ArgumentConstantInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/impl/CodeImpl.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_BoundArgumentConstantInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$BoundArgumentConstantInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction,
	jdk::internal::classfile::instruction::ConstantInstruction_ArgumentConstantInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_BoundArgumentConstantInstruction> new_object(jni::ref<jdk::internal::classfile::Opcode> op, jni::ref<jdk::internal::classfile::impl::CodeImpl> code, jint pos) { return base_::new_object(op, code, pos); }
	jni::ref<java::lang::Integer> constantValue() { return call_method<"constantValue", jni::ref<java::lang::Integer>>(); }
	jint constantInt() { return call_method<"constantInt", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_BoundArgumentConstantInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDARGUMENTCONSTANTINSTRUCTION
