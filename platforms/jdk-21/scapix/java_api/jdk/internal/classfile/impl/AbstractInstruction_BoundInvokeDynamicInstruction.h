// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_BoundInstruction.h>
#include <scapix/java_api/jdk/internal/classfile/instruction/InvokeDynamicInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_BoundInvokeDynamicInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundInvokeDynamicInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$BoundInvokeDynamicInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction, scapix::java_api::jdk::internal::classfile::instruction::InvokeDynamicInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/InvokeDynamicEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_BoundInvokeDynamicInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$BoundInvokeDynamicInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction,
	jdk::internal::classfile::instruction::InvokeDynamicInstruction>
{
public:

	jni::ref<jdk::internal::classfile::constantpool::InvokeDynamicEntry> invokedynamic() { return call_method<"invokedynamic", jni::ref<jdk::internal::classfile::constantpool::InvokeDynamicEntry>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_BoundInvokeDynamicInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDINVOKEDYNAMICINSTRUCTION
