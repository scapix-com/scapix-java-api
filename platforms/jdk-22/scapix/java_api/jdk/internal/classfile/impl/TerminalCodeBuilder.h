// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/CodeBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TerminalCodeBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TerminalCodeBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TerminalCodeBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::CodeBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TerminalCodeBuilder : public jni::object_base<"jdk/internal/classfile/impl/TerminalCodeBuilder",
	java::lang::Object,
	java::lang::classfile::CodeBuilder>
{
public:


protected:

	TerminalCodeBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALCODEBUILDER
