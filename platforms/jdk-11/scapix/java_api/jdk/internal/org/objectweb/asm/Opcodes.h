// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_ { class Opcodes; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::Opcodes>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/Opcodes";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Integer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::Opcodes : public jni::object_base<"jdk/internal/org/objectweb/asm/Opcodes",
	java::lang::Object>
{
public:

	static jint ASM4() { return get_static_field<"ASM4", jint>(); }
	static jint ASM5() { return get_static_field<"ASM5", jint>(); }
	static jint ASM6() { return get_static_field<"ASM6", jint>(); }
	static jint V1_1() { return get_static_field<"V1_1", jint>(); }
	static jint V1_2() { return get_static_field<"V1_2", jint>(); }
	static jint V1_3() { return get_static_field<"V1_3", jint>(); }
	static jint V1_4() { return get_static_field<"V1_4", jint>(); }
	static jint V1_5() { return get_static_field<"V1_5", jint>(); }
	static jint V1_6() { return get_static_field<"V1_6", jint>(); }
	static jint V1_7() { return get_static_field<"V1_7", jint>(); }
	static jint V1_8() { return get_static_field<"V1_8", jint>(); }
	static jint V9() { return get_static_field<"V9", jint>(); }
	static jint V10() { return get_static_field<"V10", jint>(); }
	static jint V11() { return get_static_field<"V11", jint>(); }
	static jint ACC_PUBLIC() { return get_static_field<"ACC_PUBLIC", jint>(); }
	static jint ACC_PRIVATE() { return get_static_field<"ACC_PRIVATE", jint>(); }
	static jint ACC_PROTECTED() { return get_static_field<"ACC_PROTECTED", jint>(); }
	static jint ACC_STATIC() { return get_static_field<"ACC_STATIC", jint>(); }
	static jint ACC_FINAL() { return get_static_field<"ACC_FINAL", jint>(); }
	static jint ACC_SUPER() { return get_static_field<"ACC_SUPER", jint>(); }
	static jint ACC_SYNCHRONIZED() { return get_static_field<"ACC_SYNCHRONIZED", jint>(); }
	static jint ACC_OPEN() { return get_static_field<"ACC_OPEN", jint>(); }
	static jint ACC_TRANSITIVE() { return get_static_field<"ACC_TRANSITIVE", jint>(); }
	static jint ACC_VOLATILE() { return get_static_field<"ACC_VOLATILE", jint>(); }
	static jint ACC_BRIDGE() { return get_static_field<"ACC_BRIDGE", jint>(); }
	static jint ACC_STATIC_PHASE() { return get_static_field<"ACC_STATIC_PHASE", jint>(); }
	static jint ACC_VARARGS() { return get_static_field<"ACC_VARARGS", jint>(); }
	static jint ACC_TRANSIENT() { return get_static_field<"ACC_TRANSIENT", jint>(); }
	static jint ACC_NATIVE() { return get_static_field<"ACC_NATIVE", jint>(); }
	static jint ACC_INTERFACE() { return get_static_field<"ACC_INTERFACE", jint>(); }
	static jint ACC_ABSTRACT() { return get_static_field<"ACC_ABSTRACT", jint>(); }
	static jint ACC_STRICT() { return get_static_field<"ACC_STRICT", jint>(); }
	static jint ACC_SYNTHETIC() { return get_static_field<"ACC_SYNTHETIC", jint>(); }
	static jint ACC_ANNOTATION() { return get_static_field<"ACC_ANNOTATION", jint>(); }
	static jint ACC_ENUM() { return get_static_field<"ACC_ENUM", jint>(); }
	static jint ACC_MANDATED() { return get_static_field<"ACC_MANDATED", jint>(); }
	static jint ACC_MODULE() { return get_static_field<"ACC_MODULE", jint>(); }
	static jint ACC_DEPRECATED() { return get_static_field<"ACC_DEPRECATED", jint>(); }
	static jint T_BOOLEAN() { return get_static_field<"T_BOOLEAN", jint>(); }
	static jint T_CHAR() { return get_static_field<"T_CHAR", jint>(); }
	static jint T_FLOAT() { return get_static_field<"T_FLOAT", jint>(); }
	static jint T_DOUBLE() { return get_static_field<"T_DOUBLE", jint>(); }
	static jint T_BYTE() { return get_static_field<"T_BYTE", jint>(); }
	static jint T_SHORT() { return get_static_field<"T_SHORT", jint>(); }
	static jint T_INT() { return get_static_field<"T_INT", jint>(); }
	static jint T_LONG() { return get_static_field<"T_LONG", jint>(); }
	static jint H_GETFIELD() { return get_static_field<"H_GETFIELD", jint>(); }
	static jint H_GETSTATIC() { return get_static_field<"H_GETSTATIC", jint>(); }
	static jint H_PUTFIELD() { return get_static_field<"H_PUTFIELD", jint>(); }
	static jint H_PUTSTATIC() { return get_static_field<"H_PUTSTATIC", jint>(); }
	static jint H_INVOKEVIRTUAL() { return get_static_field<"H_INVOKEVIRTUAL", jint>(); }
	static jint H_INVOKESTATIC() { return get_static_field<"H_INVOKESTATIC", jint>(); }
	static jint H_INVOKESPECIAL() { return get_static_field<"H_INVOKESPECIAL", jint>(); }
	static jint H_NEWINVOKESPECIAL() { return get_static_field<"H_NEWINVOKESPECIAL", jint>(); }
	static jint H_INVOKEINTERFACE() { return get_static_field<"H_INVOKEINTERFACE", jint>(); }
	static jint F_NEW() { return get_static_field<"F_NEW", jint>(); }
	static jint F_FULL() { return get_static_field<"F_FULL", jint>(); }
	static jint F_APPEND() { return get_static_field<"F_APPEND", jint>(); }
	static jint F_CHOP() { return get_static_field<"F_CHOP", jint>(); }
	static jint F_SAME() { return get_static_field<"F_SAME", jint>(); }
	static jint F_SAME1() { return get_static_field<"F_SAME1", jint>(); }
	static jni::ref<java::lang::Integer> TOP() { return get_static_field<"TOP", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> INTEGER() { return get_static_field<"INTEGER", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> FLOAT() { return get_static_field<"FLOAT", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> DOUBLE() { return get_static_field<"DOUBLE", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> LONG() { return get_static_field<"LONG", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> NULL() { return get_static_field<"NULL", jni::ref<java::lang::Integer>>(); }
	static jni::ref<java::lang::Integer> UNINITIALIZED_THIS() { return get_static_field<"UNINITIALIZED_THIS", jni::ref<java::lang::Integer>>(); }
	static jint NOP() { return get_static_field<"NOP", jint>(); }
	static jint ACONST_NULL() { return get_static_field<"ACONST_NULL", jint>(); }
	static jint ICONST_M1() { return get_static_field<"ICONST_M1", jint>(); }
	static jint ICONST_0() { return get_static_field<"ICONST_0", jint>(); }
	static jint ICONST_1() { return get_static_field<"ICONST_1", jint>(); }
	static jint ICONST_2() { return get_static_field<"ICONST_2", jint>(); }
	static jint ICONST_3() { return get_static_field<"ICONST_3", jint>(); }
	static jint ICONST_4() { return get_static_field<"ICONST_4", jint>(); }
	static jint ICONST_5() { return get_static_field<"ICONST_5", jint>(); }
	static jint LCONST_0() { return get_static_field<"LCONST_0", jint>(); }
	static jint LCONST_1() { return get_static_field<"LCONST_1", jint>(); }
	static jint FCONST_0() { return get_static_field<"FCONST_0", jint>(); }
	static jint FCONST_1() { return get_static_field<"FCONST_1", jint>(); }
	static jint FCONST_2() { return get_static_field<"FCONST_2", jint>(); }
	static jint DCONST_0() { return get_static_field<"DCONST_0", jint>(); }
	static jint DCONST_1() { return get_static_field<"DCONST_1", jint>(); }
	static jint BIPUSH() { return get_static_field<"BIPUSH", jint>(); }
	static jint SIPUSH() { return get_static_field<"SIPUSH", jint>(); }
	static jint LDC() { return get_static_field<"LDC", jint>(); }
	static jint ILOAD() { return get_static_field<"ILOAD", jint>(); }
	static jint LLOAD() { return get_static_field<"LLOAD", jint>(); }
	static jint FLOAD() { return get_static_field<"FLOAD", jint>(); }
	static jint DLOAD() { return get_static_field<"DLOAD", jint>(); }
	static jint ALOAD() { return get_static_field<"ALOAD", jint>(); }
	static jint IALOAD() { return get_static_field<"IALOAD", jint>(); }
	static jint LALOAD() { return get_static_field<"LALOAD", jint>(); }
	static jint FALOAD() { return get_static_field<"FALOAD", jint>(); }
	static jint DALOAD() { return get_static_field<"DALOAD", jint>(); }
	static jint AALOAD() { return get_static_field<"AALOAD", jint>(); }
	static jint BALOAD() { return get_static_field<"BALOAD", jint>(); }
	static jint CALOAD() { return get_static_field<"CALOAD", jint>(); }
	static jint SALOAD() { return get_static_field<"SALOAD", jint>(); }
	static jint ISTORE() { return get_static_field<"ISTORE", jint>(); }
	static jint LSTORE() { return get_static_field<"LSTORE", jint>(); }
	static jint FSTORE() { return get_static_field<"FSTORE", jint>(); }
	static jint DSTORE() { return get_static_field<"DSTORE", jint>(); }
	static jint ASTORE() { return get_static_field<"ASTORE", jint>(); }
	static jint IASTORE() { return get_static_field<"IASTORE", jint>(); }
	static jint LASTORE() { return get_static_field<"LASTORE", jint>(); }
	static jint FASTORE() { return get_static_field<"FASTORE", jint>(); }
	static jint DASTORE() { return get_static_field<"DASTORE", jint>(); }
	static jint AASTORE() { return get_static_field<"AASTORE", jint>(); }
	static jint BASTORE() { return get_static_field<"BASTORE", jint>(); }
	static jint CASTORE() { return get_static_field<"CASTORE", jint>(); }
	static jint SASTORE() { return get_static_field<"SASTORE", jint>(); }
	static jint POP() { return get_static_field<"POP", jint>(); }
	static jint POP2() { return get_static_field<"POP2", jint>(); }
	static jint DUP() { return get_static_field<"DUP", jint>(); }
	static jint DUP_X1() { return get_static_field<"DUP_X1", jint>(); }
	static jint DUP_X2() { return get_static_field<"DUP_X2", jint>(); }
	static jint DUP2() { return get_static_field<"DUP2", jint>(); }
	static jint DUP2_X1() { return get_static_field<"DUP2_X1", jint>(); }
	static jint DUP2_X2() { return get_static_field<"DUP2_X2", jint>(); }
	static jint SWAP() { return get_static_field<"SWAP", jint>(); }
	static jint IADD() { return get_static_field<"IADD", jint>(); }
	static jint LADD() { return get_static_field<"LADD", jint>(); }
	static jint FADD() { return get_static_field<"FADD", jint>(); }
	static jint DADD() { return get_static_field<"DADD", jint>(); }
	static jint ISUB() { return get_static_field<"ISUB", jint>(); }
	static jint LSUB() { return get_static_field<"LSUB", jint>(); }
	static jint FSUB() { return get_static_field<"FSUB", jint>(); }
	static jint DSUB() { return get_static_field<"DSUB", jint>(); }
	static jint IMUL() { return get_static_field<"IMUL", jint>(); }
	static jint LMUL() { return get_static_field<"LMUL", jint>(); }
	static jint FMUL() { return get_static_field<"FMUL", jint>(); }
	static jint DMUL() { return get_static_field<"DMUL", jint>(); }
	static jint IDIV() { return get_static_field<"IDIV", jint>(); }
	static jint LDIV() { return get_static_field<"LDIV", jint>(); }
	static jint FDIV() { return get_static_field<"FDIV", jint>(); }
	static jint DDIV() { return get_static_field<"DDIV", jint>(); }
	static jint IREM() { return get_static_field<"IREM", jint>(); }
	static jint LREM() { return get_static_field<"LREM", jint>(); }
	static jint FREM() { return get_static_field<"FREM", jint>(); }
	static jint DREM() { return get_static_field<"DREM", jint>(); }
	static jint INEG() { return get_static_field<"INEG", jint>(); }
	static jint LNEG() { return get_static_field<"LNEG", jint>(); }
	static jint FNEG() { return get_static_field<"FNEG", jint>(); }
	static jint DNEG() { return get_static_field<"DNEG", jint>(); }
	static jint ISHL() { return get_static_field<"ISHL", jint>(); }
	static jint LSHL() { return get_static_field<"LSHL", jint>(); }
	static jint ISHR() { return get_static_field<"ISHR", jint>(); }
	static jint LSHR() { return get_static_field<"LSHR", jint>(); }
	static jint IUSHR() { return get_static_field<"IUSHR", jint>(); }
	static jint LUSHR() { return get_static_field<"LUSHR", jint>(); }
	static jint IAND() { return get_static_field<"IAND", jint>(); }
	static jint LAND() { return get_static_field<"LAND", jint>(); }
	static jint IOR() { return get_static_field<"IOR", jint>(); }
	static jint LOR() { return get_static_field<"LOR", jint>(); }
	static jint IXOR() { return get_static_field<"IXOR", jint>(); }
	static jint LXOR() { return get_static_field<"LXOR", jint>(); }
	static jint IINC() { return get_static_field<"IINC", jint>(); }
	static jint I2L() { return get_static_field<"I2L", jint>(); }
	static jint I2F() { return get_static_field<"I2F", jint>(); }
	static jint I2D() { return get_static_field<"I2D", jint>(); }
	static jint L2I() { return get_static_field<"L2I", jint>(); }
	static jint L2F() { return get_static_field<"L2F", jint>(); }
	static jint L2D() { return get_static_field<"L2D", jint>(); }
	static jint F2I() { return get_static_field<"F2I", jint>(); }
	static jint F2L() { return get_static_field<"F2L", jint>(); }
	static jint F2D() { return get_static_field<"F2D", jint>(); }
	static jint D2I() { return get_static_field<"D2I", jint>(); }
	static jint D2L() { return get_static_field<"D2L", jint>(); }
	static jint D2F() { return get_static_field<"D2F", jint>(); }
	static jint I2B() { return get_static_field<"I2B", jint>(); }
	static jint I2C() { return get_static_field<"I2C", jint>(); }
	static jint I2S() { return get_static_field<"I2S", jint>(); }
	static jint LCMP() { return get_static_field<"LCMP", jint>(); }
	static jint FCMPL() { return get_static_field<"FCMPL", jint>(); }
	static jint FCMPG() { return get_static_field<"FCMPG", jint>(); }
	static jint DCMPL() { return get_static_field<"DCMPL", jint>(); }
	static jint DCMPG() { return get_static_field<"DCMPG", jint>(); }
	static jint IFEQ() { return get_static_field<"IFEQ", jint>(); }
	static jint IFNE() { return get_static_field<"IFNE", jint>(); }
	static jint IFLT() { return get_static_field<"IFLT", jint>(); }
	static jint IFGE() { return get_static_field<"IFGE", jint>(); }
	static jint IFGT() { return get_static_field<"IFGT", jint>(); }
	static jint IFLE() { return get_static_field<"IFLE", jint>(); }
	static jint IF_ICMPEQ() { return get_static_field<"IF_ICMPEQ", jint>(); }
	static jint IF_ICMPNE() { return get_static_field<"IF_ICMPNE", jint>(); }
	static jint IF_ICMPLT() { return get_static_field<"IF_ICMPLT", jint>(); }
	static jint IF_ICMPGE() { return get_static_field<"IF_ICMPGE", jint>(); }
	static jint IF_ICMPGT() { return get_static_field<"IF_ICMPGT", jint>(); }
	static jint IF_ICMPLE() { return get_static_field<"IF_ICMPLE", jint>(); }
	static jint IF_ACMPEQ() { return get_static_field<"IF_ACMPEQ", jint>(); }
	static jint IF_ACMPNE() { return get_static_field<"IF_ACMPNE", jint>(); }
	static jint GOTO() { return get_static_field<"GOTO", jint>(); }
	static jint JSR() { return get_static_field<"JSR", jint>(); }
	static jint RET() { return get_static_field<"RET", jint>(); }
	static jint TABLESWITCH() { return get_static_field<"TABLESWITCH", jint>(); }
	static jint LOOKUPSWITCH() { return get_static_field<"LOOKUPSWITCH", jint>(); }
	static jint IRETURN() { return get_static_field<"IRETURN", jint>(); }
	static jint LRETURN() { return get_static_field<"LRETURN", jint>(); }
	static jint FRETURN() { return get_static_field<"FRETURN", jint>(); }
	static jint DRETURN() { return get_static_field<"DRETURN", jint>(); }
	static jint ARETURN() { return get_static_field<"ARETURN", jint>(); }
	static jint RETURN() { return get_static_field<"RETURN", jint>(); }
	static jint GETSTATIC() { return get_static_field<"GETSTATIC", jint>(); }
	static jint PUTSTATIC() { return get_static_field<"PUTSTATIC", jint>(); }
	static jint GETFIELD() { return get_static_field<"GETFIELD", jint>(); }
	static jint PUTFIELD() { return get_static_field<"PUTFIELD", jint>(); }
	static jint INVOKEVIRTUAL() { return get_static_field<"INVOKEVIRTUAL", jint>(); }
	static jint INVOKESPECIAL() { return get_static_field<"INVOKESPECIAL", jint>(); }
	static jint INVOKESTATIC() { return get_static_field<"INVOKESTATIC", jint>(); }
	static jint INVOKEINTERFACE() { return get_static_field<"INVOKEINTERFACE", jint>(); }
	static jint INVOKEDYNAMIC() { return get_static_field<"INVOKEDYNAMIC", jint>(); }
	static jint NEW() { return get_static_field<"NEW", jint>(); }
	static jint NEWARRAY() { return get_static_field<"NEWARRAY", jint>(); }
	static jint ANEWARRAY() { return get_static_field<"ANEWARRAY", jint>(); }
	static jint ARRAYLENGTH() { return get_static_field<"ARRAYLENGTH", jint>(); }
	static jint ATHROW() { return get_static_field<"ATHROW", jint>(); }
	static jint CHECKCAST() { return get_static_field<"CHECKCAST", jint>(); }
	static jint INSTANCEOF() { return get_static_field<"INSTANCEOF", jint>(); }
	static jint MONITORENTER() { return get_static_field<"MONITORENTER", jint>(); }
	static jint MONITOREXIT() { return get_static_field<"MONITOREXIT", jint>(); }
	static jint MULTIANEWARRAY() { return get_static_field<"MULTIANEWARRAY", jint>(); }
	static jint IFNULL() { return get_static_field<"IFNULL", jint>(); }
	static jint IFNONNULL() { return get_static_field<"IFNONNULL", jint>(); }


protected:

	Opcodes(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_OPCODES
