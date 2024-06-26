// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_UnboundInstruction.h>
#include <scapix/java_api/java/lang/classfile/instruction/NewReferenceArrayInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_UnboundNewReferenceArrayInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundNewReferenceArrayInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$UnboundNewReferenceArrayInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction, scapix::java_api::java::lang::classfile::instruction::NewReferenceArrayInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_UnboundNewReferenceArrayInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$UnboundNewReferenceArrayInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_UnboundInstruction,
	java::lang::classfile::instruction::NewReferenceArrayInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_UnboundNewReferenceArrayInstruction> new_object(jni::ref<java::lang::classfile::constantpool::ClassEntry> componentTypeEntry) { return base_::new_object(componentTypeEntry); }
	jni::ref<java::lang::classfile::constantpool::ClassEntry> componentType() { return call_method<"componentType", jni::ref<java::lang::classfile::constantpool::ClassEntry>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_UnboundNewReferenceArrayInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_UNBOUNDNEWREFERENCEARRAYINSTRUCTION
