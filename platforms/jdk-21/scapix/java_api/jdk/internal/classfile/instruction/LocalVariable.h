// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/PseudoInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::instruction { class LocalVariable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::instruction::LocalVariable>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/instruction/LocalVariable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::PseudoInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ClassDesc.h>
#include <scapix/java_api/jdk/internal/classfile/BufWriter.h>
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#include <scapix/java_api/jdk/internal/classfile/constantpool/Utf8Entry.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::instruction::LocalVariable : public jni::object_base<"jdk/internal/classfile/instruction/LocalVariable",
	java::lang::Object,
	jdk::internal::classfile::PseudoInstruction>
{
public:

	jint slot() { return call_method<"slot", jint>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> name() { return call_method<"name", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> type() { return call_method<"type", jni::ref<jdk::internal::classfile::constantpool::Utf8Entry>>(); }
	jni::ref<java::lang::constant::ClassDesc> typeSymbol() { return call_method<"typeSymbol", jni::ref<java::lang::constant::ClassDesc>>(); }
	jni::ref<jdk::internal::classfile::Label> startScope() { return call_method<"startScope", jni::ref<jdk::internal::classfile::Label>>(); }
	jni::ref<jdk::internal::classfile::Label> endScope() { return call_method<"endScope", jni::ref<jdk::internal::classfile::Label>>(); }
	jboolean writeTo(jni::ref<jdk::internal::classfile::BufWriter> p1) { return call_method<"writeTo", jboolean>(p1); }
	static jni::ref<jdk::internal::classfile::instruction::LocalVariable> of(jint slot, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> nameEntry, jni::ref<jdk::internal::classfile::constantpool::Utf8Entry> descriptorEntry, jni::ref<jdk::internal::classfile::Label> startScope, jni::ref<jdk::internal::classfile::Label> endScope) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::LocalVariable>>(slot, nameEntry, descriptorEntry, startScope, endScope); }
	static jni::ref<jdk::internal::classfile::instruction::LocalVariable> of(jint slot, jni::ref<java::lang::String> name, jni::ref<java::lang::constant::ClassDesc> descriptor, jni::ref<jdk::internal::classfile::Label> startScope, jni::ref<jdk::internal::classfile::Label> endScope) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::LocalVariable>>(slot, name, descriptor, startScope, endScope); }

protected:

	LocalVariable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_LOCALVARIABLE
