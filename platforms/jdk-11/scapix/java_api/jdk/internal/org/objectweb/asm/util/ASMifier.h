// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/util/Printer.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class ASMifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::ASMifier>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/ASMifier";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::util::Printer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Attribute.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Handle.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Label.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::ASMifier : public jni::object_base<"jdk/internal/org/objectweb/asm/util/ASMifier",
	jdk::internal::org::objectweb::asm_::util::Printer>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> new_object() { return base_::new_object(); }
	static void main(jni::ref<jni::array<java::lang::String>> args) { return call_static_method<"main", void>(args); }
	void visit(jint version, jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> signature, jni::ref<java::lang::String> superName, jni::ref<jni::array<java::lang::String>> interfaces) { return call_method<"visit", void>(version, access, name, signature, superName, interfaces); }
	void visitSource(jni::ref<java::lang::String> file, jni::ref<java::lang::String> debug) { return call_method<"visitSource", void>(file, debug); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> visitModule(jni::ref<java::lang::String> name, jint flags, jni::ref<java::lang::String> version) { return call_method<"visitModule", jni::ref<jdk::internal::org::objectweb::asm_::util::Printer>>(name, flags, version); }
	void visitOuterClass(jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitOuterClass", void>(owner, name, desc); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitClassAnnotation(jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitClassAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitClassTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitClassTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	void visitClassAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attr) { return call_method<"visitClassAttribute", void>(attr); }
	void visitInnerClass(jni::ref<java::lang::String> name, jni::ref<java::lang::String> outerName, jni::ref<java::lang::String> innerName, jint access) { return call_method<"visitInnerClass", void>(name, outerName, innerName, access); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitField(jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> signature, jni::ref<java::lang::Object> value) { return call_method<"visitField", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(access, name, desc, signature, value); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitMethod(jint access, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> signature, jni::ref<jni::array<java::lang::String>> exceptions) { return call_method<"visitMethod", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(access, name, desc, signature, exceptions); }
	void visitClassEnd() { return call_method<"visitClassEnd", void>(); }
	void visitMainClass(jni::ref<java::lang::String> mainClass) { return call_method<"visitMainClass", void>(mainClass); }
	void visitPackage(jni::ref<java::lang::String> packaze) { return call_method<"visitPackage", void>(packaze); }
	void visitRequire(jni::ref<java::lang::String> module, jint access, jni::ref<java::lang::String> version) { return call_method<"visitRequire", void>(module, access, version); }
	void visitExport(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitExport", void>(packaze, access, modules); }
	void visitOpen(jni::ref<java::lang::String> packaze, jint access, jni::ref<jni::array<java::lang::String>> modules) { return call_method<"visitOpen", void>(packaze, access, modules); }
	void visitUse(jni::ref<java::lang::String> service) { return call_method<"visitUse", void>(service); }
	void visitProvide(jni::ref<java::lang::String> service, jni::ref<jni::array<java::lang::String>> providers) { return call_method<"visitProvide", void>(service, providers); }
	void visitModuleEnd() { return call_method<"visitModuleEnd", void>(); }
	void visit(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> value) { return call_method<"visit", void>(name, value); }
	void visitEnum(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> value) { return call_method<"visitEnum", void>(name, desc, value); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitAnnotation(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(name, desc); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitArray(jni::ref<java::lang::String> name) { return call_method<"visitArray", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(name); }
	void visitAnnotationEnd() { return call_method<"visitAnnotationEnd", void>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitFieldAnnotation(jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitFieldAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitFieldTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitFieldTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	void visitFieldAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attr) { return call_method<"visitFieldAttribute", void>(attr); }
	void visitFieldEnd() { return call_method<"visitFieldEnd", void>(); }
	void visitParameter(jni::ref<java::lang::String> parameterName, jint access) { return call_method<"visitParameter", void>(parameterName, access); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitAnnotationDefault() { return call_method<"visitAnnotationDefault", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitMethodAnnotation(jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitMethodAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitMethodTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitMethodTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitParameterAnnotation(jint parameter, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitParameterAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(parameter, desc, visible); }
	void visitMethodAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attr) { return call_method<"visitMethodAttribute", void>(attr); }
	void visitCode() { return call_method<"visitCode", void>(); }
	void visitFrame(jint type, jint nLocal, jni::ref<jni::array<java::lang::Object>> local, jint nStack, jni::ref<jni::array<java::lang::Object>> stack) { return call_method<"visitFrame", void>(type, nLocal, local, nStack, stack); }
	void visitInsn(jint opcode) { return call_method<"visitInsn", void>(opcode); }
	void visitIntInsn(jint opcode, jint operand) { return call_method<"visitIntInsn", void>(opcode, operand); }
	void visitVarInsn(jint opcode, jint var) { return call_method<"visitVarInsn", void>(opcode, var); }
	void visitTypeInsn(jint opcode, jni::ref<java::lang::String> type) { return call_method<"visitTypeInsn", void>(opcode, type); }
	void visitFieldInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitFieldInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jboolean itf) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc, itf); }
	void visitInvokeDynamicInsn(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<jdk::internal::org::objectweb::asm_::Handle> bsm, jni::ref<jni::array<java::lang::Object>> bsmArgs) { return call_method<"visitInvokeDynamicInsn", void>(name, desc, bsm, bsmArgs); }
	void visitJumpInsn(jint opcode, jni::ref<jdk::internal::org::objectweb::asm_::Label> label) { return call_method<"visitJumpInsn", void>(opcode, label); }
	void visitLabel(jni::ref<jdk::internal::org::objectweb::asm_::Label> label) { return call_method<"visitLabel", void>(label); }
	void visitLdcInsn(jni::ref<java::lang::Object> cst) { return call_method<"visitLdcInsn", void>(cst); }
	void visitIincInsn(jint var, jint increment) { return call_method<"visitIincInsn", void>(var, increment); }
	void visitTableSwitchInsn(jint min, jint max, jni::ref<jdk::internal::org::objectweb::asm_::Label> dflt, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> labels) { return call_method<"visitTableSwitchInsn", void>(min, max, dflt, labels); }
	void visitLookupSwitchInsn(jni::ref<jdk::internal::org::objectweb::asm_::Label> dflt, jni::ref<jni::array<jint>> keys, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> labels) { return call_method<"visitLookupSwitchInsn", void>(dflt, keys, labels); }
	void visitMultiANewArrayInsn(jni::ref<java::lang::String> desc, jint dims) { return call_method<"visitMultiANewArrayInsn", void>(desc, dims); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitInsnAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitInsnAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	void visitTryCatchBlock(jni::ref<jdk::internal::org::objectweb::asm_::Label> start, jni::ref<jdk::internal::org::objectweb::asm_::Label> end, jni::ref<jdk::internal::org::objectweb::asm_::Label> handler, jni::ref<java::lang::String> type) { return call_method<"visitTryCatchBlock", void>(start, end, handler, type); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitTryCatchAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitTryCatchAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	void visitLocalVariable(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> signature, jni::ref<jdk::internal::org::objectweb::asm_::Label> start, jni::ref<jdk::internal::org::objectweb::asm_::Label> end, jint index) { return call_method<"visitLocalVariable", void>(name, desc, signature, start, end, index); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::Printer> visitLocalVariableAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> start, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> end, jni::ref<jni::array<jint>> index, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitLocalVariableAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::Printer>>(typeRef, typePath, start, end, index, desc, visible); }
	void visitLineNumber(jint line, jni::ref<jdk::internal::org::objectweb::asm_::Label> start) { return call_method<"visitLineNumber", void>(line, start); }
	void visitMaxs(jint maxStack, jint maxLocals) { return call_method<"visitMaxs", void>(maxStack, maxLocals); }
	void visitMethodEnd() { return call_method<"visitMethodEnd", void>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitAnnotation(jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(typeRef, typePath, desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier> visitTypeAnnotation(jni::ref<java::lang::String> method, jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::util::ASMifier>>(method, typeRef, typePath, desc, visible); }
	void visitAttribute(jni::ref<jdk::internal::org::objectweb::asm_::Attribute> attr) { return call_method<"visitAttribute", void>(attr); }

protected:

	ASMifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_ASMIFIER