// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/FieldBuilder.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile::impl { class TerminalFieldBuilder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::impl::TerminalFieldBuilder>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/impl/TerminalFieldBuilder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::FieldBuilder>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::impl::TerminalFieldBuilder : public jni::object_base<"jdk/internal/classfile/impl/TerminalFieldBuilder",
	java::lang::Object,
	java::lang::classfile::FieldBuilder>
{
public:


protected:

	TerminalFieldBuilder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_IMPL_TERMINALFIELDBUILDER
