// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_UnboundInstruction.h>
#include <scapix/java_api/jdk/internal/classfile/instruction/ArrayStoreInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_UnboundArrayStoreInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayStoreInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$UnboundArrayStoreInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction, scapix::java_api::jdk::internal::classfile::instruction::ArrayStoreInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayStoreInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$UnboundArrayStoreInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction,
	jdk::internal::classfile::instruction::ArrayStoreInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_UnboundArrayStoreInstruction> new_object(jni::ref<jdk::internal::classfile::Opcode> op) { return base_::new_object(op); }
	jni::ref<jdk::internal::classfile::TypeKind> typeKind() { return call_method<"typeKind", jni::ref<jdk::internal::classfile::TypeKind>>(); }

protected:

	AbstractInstruction_UnboundArrayStoreInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDARRAYSTOREINSTRUCTION
