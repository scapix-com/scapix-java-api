// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class Instruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::Instruction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/Instruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionComparator.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/util/ByteSequence.h>
#include <scapix/java_api/java/io/DataOutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::Instruction : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/Instruction",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionComparator> getComparator() { return call_static_method<"getComparator", jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionComparator>>(); }
	static jboolean isValidByte(jint p1) { return call_static_method<"isValidByte", jboolean>(p1); }
	static jboolean isValidShort(jint p1) { return call_static_method<"isValidShort", jboolean>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> readInstruction(jni::ref<com::sun::org::apache::bcel::internal::util::ByteSequence> p1) { return call_static_method<"readInstruction", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	static void setComparator(jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionComparator> p1) { return call_static_method<"setComparator", void>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> new_object(jshort p1, jshort p2) { return base_::new_object(p1, p2); }
	void accept(jni::ref<com::sun::org::apache::bcel::internal::generic::Visitor> p1) { return call_method<"accept", void>(p1); }
	jint consumeStack(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"consumeStack", jint>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> copy() { return call_method<"copy", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	void dump(jni::ref<java::io::DataOutputStream> p1) { return call_method<"dump", void>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jshort getOpcode() { return call_method<"getOpcode", jshort>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint produceStack(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"produceStack", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jboolean p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toString(jni::ref<com::sun::org::apache::bcel::internal::classfile::ConstantPool> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }

protected:

	Instruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTION
