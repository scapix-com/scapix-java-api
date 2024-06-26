// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/jdk/internal/classfile/CodeBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class CodeBuilder_BlockCodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::CodeBuilder_BlockCodeBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/CodeBuilder$BlockCodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::jdk::internal::classfile::CodeBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/jdk/internal/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::CodeBuilder_BlockCodeBuilder : public jni::object_base<"jdk/internal/classfile/CodeBuilder$BlockCodeBuilder",
	java::lang::Object,
	jdk::internal::classfile::CodeBuilder>
{
public:

	jni::ref<jdk::internal::classfile::Label> breakLabel() { return call_method<"breakLabel", jni::ref<jdk::internal::classfile::Label>>(); }

protected:

	CodeBuilder_BlockCodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_CODEBUILDER_BLOCKCODEBUILDER
