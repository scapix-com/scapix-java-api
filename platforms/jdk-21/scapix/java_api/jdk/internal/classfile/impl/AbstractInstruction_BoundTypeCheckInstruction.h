// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/classfile/impl/AbstractInstruction_BoundInstruction.h>
#include <scapix/java_api/jdk/internal/classfile/instruction/TypeCheckInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class AbstractInstruction_BoundTypeCheckInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundTypeCheckInstruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/AbstractInstruction$BoundTypeCheckInstruction";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction, scapix::java_api::jdk::internal::classfile::instruction::TypeCheckInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/ClassEntry.h>
#include <scapix/java_api/jdk/internal/classfile/impl/CodeImpl.h>
#include <scapix/java_api/jdk/internal/classfile/impl/DirectCodeBuilder.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::AbstractInstruction_BoundTypeCheckInstruction : public jni::object_base<"jdk/internal/classfile/impl/AbstractInstruction$BoundTypeCheckInstruction",
	jdk::internal::classfile::impl::AbstractInstruction_BoundInstruction,
	jdk::internal::classfile::instruction::TypeCheckInstruction>
{
public:

	static jni::ref<jdk::internal::classfile::impl::AbstractInstruction_BoundTypeCheckInstruction> new_object(jni::ref<jdk::internal::classfile::Opcode> op, jni::ref<jdk::internal::classfile::impl::CodeImpl> code, jint pos) { return base_::new_object(op, code, pos); }
	jni::ref<jdk::internal::classfile::constantpool::ClassEntry> type() { return call_method<"type", jni::ref<jdk::internal::classfile::constantpool::ClassEntry>>(); }
	void writeTo(jni::ref<jdk::internal::classfile::impl::DirectCodeBuilder> writer) { return call_method<"writeTo", void>(writer); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	AbstractInstruction_BoundTypeCheckInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_ABSTRACTINSTRUCTION_BOUNDTYPECHECKINSTRUCTION
