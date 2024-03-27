// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_UnboundInstruction.h>
#include <scapix/java_api/jdk/internal/classfile/instruction/InvokeInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_UnboundInvokeInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInvokeInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$UnboundInvokeInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction, scapix::java_api::jdk::internal::classfile::instruction::InvokeInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/MemberRefEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_UnboundInvokeInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$UnboundInvokeInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction,
	jdk::internal::classfile::instruction::InvokeInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_UnboundInvokeInstruction> new_object(jni::ref<jdk::internal::classfile::Opcode> op, jni::ref<jdk::internal::classfile::constantpool::MemberRefEntry> methodEntry) { return base_::new_object(op, methodEntry); }
	jni::ref<jdk::internal::classfile::constantpool::MemberRefEntry> method() { return call_method<"method", jni::ref<jdk::internal::classfile::constantpool::MemberRefEntry>>(); }
	jboolean isInterface() { return call_method<"isInterface", jboolean>(); }
	jint count() { return call_method<"count", jint>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_UnboundInvokeInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDINVOKEINSTRUCTION
