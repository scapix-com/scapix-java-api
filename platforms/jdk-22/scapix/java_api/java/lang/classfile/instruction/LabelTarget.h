// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/PseudoInstruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class LabelTarget; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::LabelTarget>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/LabelTarget";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::PseudoInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::LabelTarget : public jni::object_base<"java/lang/classfile/instruction/LabelTarget",
	java::lang::Object,
	java::lang::classfile::PseudoInstruction>
{
public:

	jni::ref<java::lang::classfile::Label> label() { return call_method<"label", jni::ref<java::lang::classfile::Label>>(); }

protected:

	LabelTarget(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_LABELTARGET
