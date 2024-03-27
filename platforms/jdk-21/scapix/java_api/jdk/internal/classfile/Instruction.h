// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/CodeElement.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Instruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Instruction>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Instruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::CodeElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Opcode.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Instruction : public jni::object_base<"jdk/internal/classfile/Instruction",
	java::lang::Object,
	jdk::internal::classfile::CodeElement>
{
public:

	jni::ref<jdk::internal::classfile::Opcode> opcode() { return call_method<"opcode", jni::ref<jdk::internal::classfile::Opcode>>(); }
	jint sizeInBytes() { return call_method<"sizeInBytes", jint>(); }

protected:

	Instruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION