// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::java::util::jar::pack { class Instruction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::java::util::jar::pack::Instruction>
{
	static constexpr fixed_string class_name = "com/sun/java/util/jar/pack/Instruction";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION)
#define SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java/util/jar/pack/ConstantPool_Entry.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Package_Version.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Instruction_LookupSwitch.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Instruction_TableSwitch.h>
#include <scapix/java_api/com/sun/java/util/jar/pack/Instruction_Switch.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::java::util::jar::pack::Instruction : public jni::object_base<"com/sun/java/util/jar/pack/Instruction",
	java::lang::Object>
{
public:

	using LookupSwitch = Instruction_LookupSwitch;
	using TableSwitch = Instruction_TableSwitch;
	using Switch = Instruction_Switch;

	jint getBC() { return call_method<"getBC", jint>(); }
	jboolean isWide() { return call_method<"isWide", jboolean>(); }
	jni::ref<jni::array<jbyte>> getBytes() { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(); }
	jint getPC() { return call_method<"getPC", jint>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jint getNextPC() { return call_method<"getNextPC", jint>(); }
	jni::ref<com::sun::java::util::jar::pack::Instruction> next() { return call_method<"next", jni::ref<com::sun::java::util::jar::pack::Instruction>>(); }
	jboolean isNonstandard() { return call_method<"isNonstandard", jboolean>(); }
	void setNonstandardLength(jint length) { return call_method<"setNonstandardLength", void>(length); }
	jni::ref<com::sun::java::util::jar::pack::Instruction> forceNextPC(jint nextpc) { return call_method<"forceNextPC", jni::ref<com::sun::java::util::jar::pack::Instruction>>(nextpc); }
	static jni::ref<com::sun::java::util::jar::pack::Instruction> at(jni::ref<jni::array<jbyte>> bytes, jint pc) { return call_static_method<"at", jni::ref<com::sun::java::util::jar::pack::Instruction>>(bytes, pc); }
	static jni::ref<com::sun::java::util::jar::pack::Instruction> at(jni::ref<jni::array<jbyte>> bytes, jint pc, jni::ref<com::sun::java::util::jar::pack::Instruction> reuse) { return call_static_method<"at", jni::ref<com::sun::java::util::jar::pack::Instruction>>(bytes, pc, reuse); }
	jbyte getCPTag() { return call_method<"getCPTag", jbyte>(); }
	jint getCPIndex() { return call_method<"getCPIndex", jint>(); }
	void setCPIndex(jint cpi) { return call_method<"setCPIndex", void>(cpi); }
	jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry> getCPRef(jni::ref<jni::array<com::sun::java::util::jar::pack::ConstantPool_Entry>> cpMap) { return call_method<"getCPRef", jni::ref<com::sun::java::util::jar::pack::ConstantPool_Entry>>(cpMap); }
	jint getLocalSlot() { return call_method<"getLocalSlot", jint>(); }
	jint getBranchLabel() { return call_method<"getBranchLabel", jint>(); }
	void setBranchLabel(jint targetPC) { return call_method<"setBranchLabel", void>(targetPC); }
	jint getConstant() { return call_method<"getConstant", jint>(); }
	void setConstant(jint con) { return call_method<"setConstant", void>(con); }
	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<com::sun::java::util::jar::pack::Instruction> that) { return call_method<"equals", jboolean>(that); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString(jni::ref<jni::array<com::sun::java::util::jar::pack::ConstantPool_Entry>> cpMap) { return call_method<"toString", jni::ref<java::lang::String>>(cpMap); }
	jint getIntAt(jint off) { return call_method<"getIntAt", jint>(off); }
	jint getShortAt(jint off) { return call_method<"getShortAt", jint>(off); }
	jint getByteAt(jint off) { return call_method<"getByteAt", jint>(off); }
	static jint getInt(jni::ref<jni::array<jbyte>> bytes, jint pc) { return call_static_method<"getInt", jint>(bytes, pc); }
	static jint getShort(jni::ref<jni::array<jbyte>> bytes, jint pc) { return call_static_method<"getShort", jint>(bytes, pc); }
	static jint getByte(jni::ref<jni::array<jbyte>> bytes, jint pc) { return call_static_method<"getByte", jint>(bytes, pc); }
	static void setInt(jni::ref<jni::array<jbyte>> bytes, jint pc, jint x) { return call_static_method<"setInt", void>(bytes, pc, x); }
	static void setShort(jni::ref<jni::array<jbyte>> bytes, jint pc, jint x) { return call_static_method<"setShort", void>(bytes, pc, x); }
	static void setByte(jni::ref<jni::array<jbyte>> bytes, jint pc, jint x) { return call_static_method<"setByte", void>(bytes, pc, x); }
	static jboolean isNonstandard(jint bc) { return call_static_method<"isNonstandard", jboolean>(bc); }
	static jint opLength(jint bc) { return call_static_method<"opLength", jint>(bc); }
	static jint opWideLength(jint bc) { return call_static_method<"opWideLength", jint>(bc); }
	static jboolean isLocalSlotOp(jint bc) { return call_static_method<"isLocalSlotOp", jboolean>(bc); }
	static jboolean isBranchOp(jint bc) { return call_static_method<"isBranchOp", jboolean>(bc); }
	static jboolean isCPRefOp(jint bc) { return call_static_method<"isCPRefOp", jboolean>(bc); }
	static jbyte getCPRefOpTag(jint bc) { return call_static_method<"getCPRefOpTag", jbyte>(bc); }
	static jboolean isFieldOp(jint bc) { return call_static_method<"isFieldOp", jboolean>(bc); }
	static jboolean isInvokeInitOp(jint bc) { return call_static_method<"isInvokeInitOp", jboolean>(bc); }
	static jboolean isSelfLinkerOp(jint bc) { return call_static_method<"isSelfLinkerOp", jboolean>(bc); }
	static jni::ref<java::lang::String> byteName(jint bc) { return call_static_method<"byteName", jni::ref<java::lang::String>>(bc); }
	static void opcodeChecker(jni::ref<jni::array<jbyte>> code, jni::ref<jni::array<com::sun::java::util::jar::pack::ConstantPool_Entry>> cpMap, jni::ref<com::sun::java::util::jar::pack::Package_Version> clsVersion) { return call_static_method<"opcodeChecker", void>(code, cpMap, clsVersion); }

protected:

	Instruction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_JAVA_UTIL_JAR_PACK_INSTRUCTION
