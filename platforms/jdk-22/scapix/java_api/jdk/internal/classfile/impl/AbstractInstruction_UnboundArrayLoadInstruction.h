// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_UnboundInstruction.h>
#include <scapix/java_api/java/lang/classfile/instruction/ArrayLoadInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_UnboundArrayLoadInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayLoadInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$UnboundArrayLoadInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction, scapix::java_api::java::lang::classfile::instruction::ArrayLoadInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Opcode.h>
#include <scapix/java_api/java/lang/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayLoadInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$UnboundArrayLoadInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction,
	java::lang::classfile::instruction::ArrayLoadInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayLoadInstruction> new_object(jni::ref<java::lang::classfile::Opcode> op) { return base_::new_object(op); }
	jni::ref<java::lang::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<java::lang::classfile::TypeKind>>(); }

protected:

	AbstractInstruction_UnboundArrayLoadInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYLOADINSTRUCTION