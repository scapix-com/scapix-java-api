// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/PseudoInstruction.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::instruction { class ExceptionCatch; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::instruction::ExceptionCatch>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/instruction/ExceptionCatch";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::PseudoInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Optional.h>
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::instruction::ExceptionCatch : public jni::object_base<"jdk/internal/classfile/instruction/ExceptionCatch",
	java::lang::Object,
	jdk::internal::classfile::PseudoInstruction>
{
public:

	jni::ref<jdk::internal::classfile::Label> handler() { return call_method<"handler", jni::ref<jdk::internal::classfile::Label>>(); }
	jni::ref<jdk::internal::classfile::Label> tryStart() { return call_method<"tryStart", jni::ref<jdk::internal::classfile::Label>>(); }
	jni::ref<jdk::internal::classfile::Label> tryEnd() { return call_method<"tryEnd", jni::ref<jdk::internal::classfile::Label>>(); }
	jni::ref<java::util::Optional> catchType() { return call_method<"catchType", jni::ref<java::util::Optional>>(); }
	static jni::ref<jdk::internal::classfile::instruction::ExceptionCatch> of(jni::ref<jdk::internal::classfile::Label> handler, jni::ref<jdk::internal::classfile::Label> tryStart, jni::ref<jdk::internal::classfile::Label> tryEnd, jni::ref<java::util::Optional> catchTypeEntry) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::ExceptionCatch>>(handler, tryStart, tryEnd, catchTypeEntry); }
	static jni::ref<jdk::internal::classfile::instruction::ExceptionCatch> of(jni::ref<jdk::internal::classfile::Label> handler, jni::ref<jdk::internal::classfile::Label> tryStart, jni::ref<jdk::internal::classfile::Label> tryEnd) { return call_static_method<"of", jni::ref<jdk::internal::classfile::instruction::ExceptionCatch>>(handler, tryStart, tryEnd); }

protected:

	ExceptionCatch(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_INSTRUCTION_EXCEPTIONCATCH