// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::bcel::internal::generic { class InstructionFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::bcel::internal::generic::InstructionFactory>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/bcel/internal/generic/InstructionFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/GETSTATIC.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/INSTANCEOF.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/PUTSTATIC.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::bcel::internal::generic::InstructionFactory : public jni::object_base<"com/sun/org/apache/bcel/internal/generic/InstructionFactory",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction> createArrayLoad(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1) { return call_static_method<"createArrayLoad", jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction> createArrayStore(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1) { return call_static_method<"createArrayStore", jni::ref<com::sun::org::apache::bcel::internal::generic::ArrayInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction> createBinaryOperation(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p2) { return call_static_method<"createBinaryOperation", jni::ref<com::sun::org::apache::bcel::internal::generic::ArithmeticInstruction>>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::BranchInstruction> createBranchInstruction(jshort p1, jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionHandle> p2) { return call_static_method<"createBranchInstruction", jni::ref<com::sun::org::apache::bcel::internal::generic::BranchInstruction>>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> createDup(jint p1) { return call_static_method<"createDup", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> createDup_1(jint p1) { return call_static_method<"createDup_1", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> createDup_2(jint p1) { return call_static_method<"createDup_2", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> createLoad(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1, jint p2) { return call_static_method<"createLoad", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createNull(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1) { return call_static_method<"createNull", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction> createPop(jint p1) { return call_static_method<"createPop", jni::ref<com::sun::org::apache::bcel::internal::generic::StackInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction> createReturn(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1) { return call_static_method<"createReturn", jni::ref<com::sun::org::apache::bcel::internal::generic::ReturnInstruction>>(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction> createStore(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1, jint p2) { return call_static_method<"createStore", jni::ref<com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction>>(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createThis() { return call_static_method<"createThis", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionFactory> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionFactory> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionFactory> new_object(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createAppend(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1) { return call_method<"createAppend", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createCast(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p2) { return call_method<"createCast", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1, p2); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::CHECKCAST> createCheckCast(jni::ref<com::sun::org::apache::bcel::internal::generic::ReferenceType> p1) { return call_method<"createCheckCast", jni::ref<com::sun::org::apache::bcel::internal::generic::CHECKCAST>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createConstant(jni::ref<java::lang::Object> p1) { return call_method<"createConstant", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::FieldInstruction> createFieldAccess(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3, jshort p4) { return call_method<"createFieldAccess", jni::ref<com::sun::org::apache::bcel::internal::generic::FieldInstruction>>(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::GETFIELD> createGetField(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3) { return call_method<"createGetField", jni::ref<com::sun::org::apache::bcel::internal::generic::GETFIELD>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::GETSTATIC> createGetStatic(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3) { return call_method<"createGetStatic", jni::ref<com::sun::org::apache::bcel::internal::generic::GETSTATIC>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::INSTANCEOF> createInstanceOf(jni::ref<com::sun::org::apache::bcel::internal::generic::ReferenceType> p1) { return call_method<"createInstanceOf", jni::ref<com::sun::org::apache::bcel::internal::generic::INSTANCEOF>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::InvokeInstruction> createInvoke(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3, jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> p4, jshort p5) { return call_method<"createInvoke", jni::ref<com::sun::org::apache::bcel::internal::generic::InvokeInstruction>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::InvokeInstruction> createInvoke(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3, jni::ref<jni::array<com::sun::org::apache::bcel::internal::generic::Type>> p4, jshort p5, jboolean p6) { return call_method<"createInvoke", jni::ref<com::sun::org::apache::bcel::internal::generic::InvokeInstruction>>(p1, p2, p3, p4, p5, p6); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::NEW> createNew(jni::ref<com::sun::org::apache::bcel::internal::generic::ObjectType> p1) { return call_method<"createNew", jni::ref<com::sun::org::apache::bcel::internal::generic::NEW>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::NEW> createNew(jni::ref<java::lang::String> p1) { return call_method<"createNew", jni::ref<com::sun::org::apache::bcel::internal::generic::NEW>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> createNewArray(jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p1, jshort p2) { return call_method<"createNewArray", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1, p2); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionList> createPrintln(jni::ref<java::lang::String> p1) { return call_method<"createPrintln", jni::ref<com::sun::org::apache::bcel::internal::generic::InstructionList>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::PUTFIELD> createPutField(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3) { return call_method<"createPutField", jni::ref<com::sun::org::apache::bcel::internal::generic::PUTFIELD>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::PUTSTATIC> createPutStatic(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::bcel::internal::generic::Type> p3) { return call_method<"createPutStatic", jni::ref<com::sun::org::apache::bcel::internal::generic::PUTSTATIC>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> getClassGen() { return call_method<"getClassGen", jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> getConstantPool() { return call_method<"getConstantPool", jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen>>(); }
	void setClassGen(jni::ref<com::sun::org::apache::bcel::internal::generic::ClassGen> p1) { return call_method<"setClassGen", void>(p1); }
	void setConstantPool(jni::ref<com::sun::org::apache::bcel::internal::generic::ConstantPoolGen> p1) { return call_method<"setConstantPool", void>(p1); }

protected:

	InstructionFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_BCEL_INTERNAL_GENERIC_INSTRUCTIONFACTORY
