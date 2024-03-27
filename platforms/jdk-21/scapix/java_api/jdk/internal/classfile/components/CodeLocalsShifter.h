// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/CodeTransform.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::components { class CodeLocalsShifter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::components::CodeLocalsShifter>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/components/CodeLocalsShifter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::CodeTransform>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/constant/MethodTypeDesc.h>
#include <scapix/java_api/jdk/internal/classfile/AccessFlags.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::components::CodeLocalsShifter : public jni::object_base<"jdk/internal/classfile/components/CodeLocalsShifter",
	java::lang::Object,
	jdk::internal::classfile::CodeTransform>
{
public:

	static jni::ref<jdk::internal::classfile::components::CodeLocalsShifter> of(jni::ref<jdk::internal::classfile::AccessFlags> methodFlags, jni::ref<java::lang::constant::MethodTypeDesc> methodDescriptor) { return call_static_method<"of", jni::ref<jdk::internal::classfile::components::CodeLocalsShifter>>(methodFlags, methodDescriptor); }

protected:

	CodeLocalsShifter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_COMPONENTS_CODELOCALSSHIFTER