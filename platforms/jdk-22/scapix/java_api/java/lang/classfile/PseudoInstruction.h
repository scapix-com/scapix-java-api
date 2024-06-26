// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/CodeElement.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile { class PseudoInstruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::PseudoInstruction>
{
	static constexpr fixed_string class_name = "java/lang/classfile/PseudoInstruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::CodeElement>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::PseudoInstruction : public jni::object_base<"java/lang/classfile/PseudoInstruction",
	java::lang::Object,
	java::lang::classfile::CodeElement>
{
public:


protected:

	PseudoInstruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_PSEUDOINSTRUCTION
