// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::classfile { class Opcode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::classfile::Opcode>
{
	static constexpr fixed_string class_name = "jdk/internal/classfile/Opcode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE)
#define SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/constant/ConstantDesc.h>
#include <scapix/java_api/jdk/internal/classfile/Opcode_Kind.h>
#include <scapix/java_api/jdk/internal/classfile/TypeKind.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::classfile::Opcode : public jni::object_base<"jdk/internal/classfile/Opcode",
	java::lang::Enum>
{
public:

	using Kind = Opcode_Kind;

	static jni::ref<jdk::internal::classfile::Opcode> NOP() { return get_static_field<"NOP", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ACONST_NULL() { return get_static_field<"ACONST_NULL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_M1() { return get_static_field<"ICONST_M1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_0() { return get_static_field<"ICONST_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_1() { return get_static_field<"ICONST_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_2() { return get_static_field<"ICONST_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_3() { return get_static_field<"ICONST_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_4() { return get_static_field<"ICONST_4", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ICONST_5() { return get_static_field<"ICONST_5", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LCONST_0() { return get_static_field<"LCONST_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LCONST_1() { return get_static_field<"LCONST_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FCONST_0() { return get_static_field<"FCONST_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FCONST_1() { return get_static_field<"FCONST_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FCONST_2() { return get_static_field<"FCONST_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DCONST_0() { return get_static_field<"DCONST_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DCONST_1() { return get_static_field<"DCONST_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> BIPUSH() { return get_static_field<"BIPUSH", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> SIPUSH() { return get_static_field<"SIPUSH", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LDC() { return get_static_field<"LDC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LDC_W() { return get_static_field<"LDC_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LDC2_W() { return get_static_field<"LDC2_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD() { return get_static_field<"ILOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD() { return get_static_field<"LLOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD() { return get_static_field<"FLOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD() { return get_static_field<"DLOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD() { return get_static_field<"ALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD_0() { return get_static_field<"ILOAD_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD_1() { return get_static_field<"ILOAD_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD_2() { return get_static_field<"ILOAD_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD_3() { return get_static_field<"ILOAD_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD_0() { return get_static_field<"LLOAD_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD_1() { return get_static_field<"LLOAD_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD_2() { return get_static_field<"LLOAD_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD_3() { return get_static_field<"LLOAD_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD_0() { return get_static_field<"FLOAD_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD_1() { return get_static_field<"FLOAD_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD_2() { return get_static_field<"FLOAD_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD_3() { return get_static_field<"FLOAD_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD_0() { return get_static_field<"DLOAD_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD_1() { return get_static_field<"DLOAD_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD_2() { return get_static_field<"DLOAD_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD_3() { return get_static_field<"DLOAD_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD_0() { return get_static_field<"ALOAD_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD_1() { return get_static_field<"ALOAD_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD_2() { return get_static_field<"ALOAD_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD_3() { return get_static_field<"ALOAD_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IALOAD() { return get_static_field<"IALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LALOAD() { return get_static_field<"LALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FALOAD() { return get_static_field<"FALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DALOAD() { return get_static_field<"DALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> AALOAD() { return get_static_field<"AALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> BALOAD() { return get_static_field<"BALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> CALOAD() { return get_static_field<"CALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> SALOAD() { return get_static_field<"SALOAD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE() { return get_static_field<"ISTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE() { return get_static_field<"LSTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE() { return get_static_field<"FSTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE() { return get_static_field<"DSTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE() { return get_static_field<"ASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE_0() { return get_static_field<"ISTORE_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE_1() { return get_static_field<"ISTORE_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE_2() { return get_static_field<"ISTORE_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE_3() { return get_static_field<"ISTORE_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE_0() { return get_static_field<"LSTORE_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE_1() { return get_static_field<"LSTORE_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE_2() { return get_static_field<"LSTORE_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE_3() { return get_static_field<"LSTORE_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE_0() { return get_static_field<"FSTORE_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE_1() { return get_static_field<"FSTORE_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE_2() { return get_static_field<"FSTORE_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE_3() { return get_static_field<"FSTORE_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE_0() { return get_static_field<"DSTORE_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE_1() { return get_static_field<"DSTORE_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE_2() { return get_static_field<"DSTORE_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE_3() { return get_static_field<"DSTORE_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE_0() { return get_static_field<"ASTORE_0", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE_1() { return get_static_field<"ASTORE_1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE_2() { return get_static_field<"ASTORE_2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE_3() { return get_static_field<"ASTORE_3", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IASTORE() { return get_static_field<"IASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LASTORE() { return get_static_field<"LASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FASTORE() { return get_static_field<"FASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DASTORE() { return get_static_field<"DASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> AASTORE() { return get_static_field<"AASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> BASTORE() { return get_static_field<"BASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> CASTORE() { return get_static_field<"CASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> SASTORE() { return get_static_field<"SASTORE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> POP() { return get_static_field<"POP", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> POP2() { return get_static_field<"POP2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP() { return get_static_field<"DUP", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP_X1() { return get_static_field<"DUP_X1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP_X2() { return get_static_field<"DUP_X2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP2() { return get_static_field<"DUP2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP2_X1() { return get_static_field<"DUP2_X1", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DUP2_X2() { return get_static_field<"DUP2_X2", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> SWAP() { return get_static_field<"SWAP", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IADD() { return get_static_field<"IADD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LADD() { return get_static_field<"LADD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FADD() { return get_static_field<"FADD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DADD() { return get_static_field<"DADD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISUB() { return get_static_field<"ISUB", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSUB() { return get_static_field<"LSUB", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSUB() { return get_static_field<"FSUB", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSUB() { return get_static_field<"DSUB", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IMUL() { return get_static_field<"IMUL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LMUL() { return get_static_field<"LMUL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FMUL() { return get_static_field<"FMUL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DMUL() { return get_static_field<"DMUL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IDIV() { return get_static_field<"IDIV", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LDIV() { return get_static_field<"LDIV", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FDIV() { return get_static_field<"FDIV", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DDIV() { return get_static_field<"DDIV", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IREM() { return get_static_field<"IREM", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LREM() { return get_static_field<"LREM", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FREM() { return get_static_field<"FREM", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DREM() { return get_static_field<"DREM", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INEG() { return get_static_field<"INEG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LNEG() { return get_static_field<"LNEG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FNEG() { return get_static_field<"FNEG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DNEG() { return get_static_field<"DNEG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISHL() { return get_static_field<"ISHL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSHL() { return get_static_field<"LSHL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISHR() { return get_static_field<"ISHR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSHR() { return get_static_field<"LSHR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IUSHR() { return get_static_field<"IUSHR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LUSHR() { return get_static_field<"LUSHR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IAND() { return get_static_field<"IAND", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LAND() { return get_static_field<"LAND", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IOR() { return get_static_field<"IOR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LOR() { return get_static_field<"LOR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IXOR() { return get_static_field<"IXOR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LXOR() { return get_static_field<"LXOR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IINC() { return get_static_field<"IINC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2L() { return get_static_field<"I2L", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2F() { return get_static_field<"I2F", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2D() { return get_static_field<"I2D", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> L2I() { return get_static_field<"L2I", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> L2F() { return get_static_field<"L2F", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> L2D() { return get_static_field<"L2D", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> F2I() { return get_static_field<"F2I", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> F2L() { return get_static_field<"F2L", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> F2D() { return get_static_field<"F2D", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> D2I() { return get_static_field<"D2I", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> D2L() { return get_static_field<"D2L", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> D2F() { return get_static_field<"D2F", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2B() { return get_static_field<"I2B", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2C() { return get_static_field<"I2C", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> I2S() { return get_static_field<"I2S", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LCMP() { return get_static_field<"LCMP", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FCMPL() { return get_static_field<"FCMPL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FCMPG() { return get_static_field<"FCMPG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DCMPL() { return get_static_field<"DCMPL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DCMPG() { return get_static_field<"DCMPG", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFEQ() { return get_static_field<"IFEQ", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFNE() { return get_static_field<"IFNE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFLT() { return get_static_field<"IFLT", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFGE() { return get_static_field<"IFGE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFGT() { return get_static_field<"IFGT", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFLE() { return get_static_field<"IFLE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPEQ() { return get_static_field<"IF_ICMPEQ", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPNE() { return get_static_field<"IF_ICMPNE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPLT() { return get_static_field<"IF_ICMPLT", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPGE() { return get_static_field<"IF_ICMPGE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPGT() { return get_static_field<"IF_ICMPGT", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ICMPLE() { return get_static_field<"IF_ICMPLE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ACMPEQ() { return get_static_field<"IF_ACMPEQ", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IF_ACMPNE() { return get_static_field<"IF_ACMPNE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> GOTO() { return get_static_field<"GOTO", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> JSR() { return get_static_field<"JSR", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> RET() { return get_static_field<"RET", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> TABLESWITCH() { return get_static_field<"TABLESWITCH", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LOOKUPSWITCH() { return get_static_field<"LOOKUPSWITCH", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IRETURN() { return get_static_field<"IRETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LRETURN() { return get_static_field<"LRETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FRETURN() { return get_static_field<"FRETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DRETURN() { return get_static_field<"DRETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ARETURN() { return get_static_field<"ARETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> RETURN() { return get_static_field<"RETURN", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> GETSTATIC() { return get_static_field<"GETSTATIC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> PUTSTATIC() { return get_static_field<"PUTSTATIC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> GETFIELD() { return get_static_field<"GETFIELD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> PUTFIELD() { return get_static_field<"PUTFIELD", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INVOKEVIRTUAL() { return get_static_field<"INVOKEVIRTUAL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INVOKESPECIAL() { return get_static_field<"INVOKESPECIAL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INVOKESTATIC() { return get_static_field<"INVOKESTATIC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INVOKEINTERFACE() { return get_static_field<"INVOKEINTERFACE", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INVOKEDYNAMIC() { return get_static_field<"INVOKEDYNAMIC", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> NEW() { return get_static_field<"NEW", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> NEWARRAY() { return get_static_field<"NEWARRAY", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ANEWARRAY() { return get_static_field<"ANEWARRAY", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ARRAYLENGTH() { return get_static_field<"ARRAYLENGTH", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ATHROW() { return get_static_field<"ATHROW", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> CHECKCAST() { return get_static_field<"CHECKCAST", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> INSTANCEOF() { return get_static_field<"INSTANCEOF", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> MONITORENTER() { return get_static_field<"MONITORENTER", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> MONITOREXIT() { return get_static_field<"MONITOREXIT", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> MULTIANEWARRAY() { return get_static_field<"MULTIANEWARRAY", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFNULL() { return get_static_field<"IFNULL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IFNONNULL() { return get_static_field<"IFNONNULL", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> GOTO_W() { return get_static_field<"GOTO_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> JSR_W() { return get_static_field<"JSR_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ILOAD_W() { return get_static_field<"ILOAD_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LLOAD_W() { return get_static_field<"LLOAD_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FLOAD_W() { return get_static_field<"FLOAD_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DLOAD_W() { return get_static_field<"DLOAD_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ALOAD_W() { return get_static_field<"ALOAD_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ISTORE_W() { return get_static_field<"ISTORE_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> LSTORE_W() { return get_static_field<"LSTORE_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> FSTORE_W() { return get_static_field<"FSTORE_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> DSTORE_W() { return get_static_field<"DSTORE_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> ASTORE_W() { return get_static_field<"ASTORE_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> RET_W() { return get_static_field<"RET_W", jni::ref<jdk::internal::classfile::Opcode>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> IINC_W() { return get_static_field<"IINC_W", jni::ref<jdk::internal::classfile::Opcode>>(); }

	static jni::ref<jni::array<jdk::internal::classfile::Opcode>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::classfile::Opcode>>>(); }
	static jni::ref<jdk::internal::classfile::Opcode> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::classfile::Opcode>>(name); }
	jint bytecode() { return call_method<"bytecode", jint>(); }
	jboolean isWide() { return call_method<"isWide", jboolean>(); }
	jint sizeIfFixed() { return call_method<"sizeIfFixed", jint>(); }
	jni::ref<jdk::internal::classfile::Opcode_Kind> kind() { return call_method<"kind", jni::ref<jdk::internal::classfile::Opcode_Kind>>(); }
	jni::ref<jdk::internal::classfile::TypeKind> primaryTypeKind() { return call_method<"primaryTypeKind", jni::ref<jdk::internal::classfile::TypeKind>>(); }
	jni::ref<jdk::internal::classfile::TypeKind> secondaryTypeKind() { return call_method<"secondaryTypeKind", jni::ref<jdk::internal::classfile::TypeKind>>(); }
	jint slot() { return call_method<"slot", jint>(); }
	jni::ref<java::lang::constant::ConstantDesc> constantValue() { return call_method<"constantValue", jni::ref<java::lang::constant::ConstantDesc>>(); }
	jboolean isUnconditionalBranch() { return call_method<"isUnconditionalBranch", jboolean>(); }

protected:

	Opcode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_CLASSFILE_OPCODE
