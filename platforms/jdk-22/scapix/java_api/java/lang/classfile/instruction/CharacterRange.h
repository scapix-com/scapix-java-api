// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/classfile/PseudoInstruction.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::classfile::instruction { class CharacterRange; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::classfile::instruction::CharacterRange>
{
	static constexpr fixed_string class_name = "java/lang/classfile/instruction/CharacterRange";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::classfile::PseudoInstruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE)
#define SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/classfile/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::classfile::instruction::CharacterRange : public jni::object_base<"java/lang/classfile/instruction/CharacterRange",
	java::lang::Object,
	java::lang::classfile::PseudoInstruction>
{
public:

	jni::ref<java::lang::classfile::Label> startScope() { return call_method<"startScope", jni::ref<java::lang::classfile::Label>>(); }
	jni::ref<java::lang::classfile::Label> endScope() { return call_method<"endScope", jni::ref<java::lang::classfile::Label>>(); }
	jint characterRangeStart() { return call_method<"characterRangeStart", jint>(); }
	jint characterRangeEnd() { return call_method<"characterRangeEnd", jint>(); }
	jint flags() { return call_method<"flags", jint>(); }
	static jni::ref<java::lang::classfile::instruction::CharacterRange> of(jni::ref<java::lang::classfile::Label> startScope, jni::ref<java::lang::classfile::Label> endScope, jint characterRangeStart, jint characterRangeEnd, jint flags) { return call_static_method<"of", jni::ref<java::lang::classfile::instruction::CharacterRange>>(startScope, endScope, characterRangeStart, characterRangeEnd, flags); }

protected:

	CharacterRange(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CLASSFILE_INSTRUCTION_CHARACTERRANGE