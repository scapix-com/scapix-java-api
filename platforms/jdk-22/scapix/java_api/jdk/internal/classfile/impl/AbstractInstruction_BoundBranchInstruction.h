// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_BoundInstruction.h>
#include <scapix/java_api/java/lang/classfile/instruction/BranchInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_BoundBranchInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundBranchInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$BoundBranchInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction, scapix::java_api::java::lang::classfile::instruction::BranchInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/Label.h>
#include <scapix/java_api/java/lang/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/impl/CodeImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_BoundBranchInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$BoundBranchInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction,
	java::lang::classfile::instruction::BranchInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_BoundBranchInstruction> new_object(jni::ref<java::lang::classfile::Opcode> op, jni::ref<jdk::internal::classfile::impl::CodeImpl> code, jint pos) { return base_::new_object(op, code, pos); }
	jni::ref<java::lang::classfile::Label> target() { return call_method<"target", jni::ref<java::lang::classfile::Label>>(); }
	jint branchByteOffset() { return call_method<"branchByteOffset", jint>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_BoundBranchInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDBRANCHINSTRUCTION
