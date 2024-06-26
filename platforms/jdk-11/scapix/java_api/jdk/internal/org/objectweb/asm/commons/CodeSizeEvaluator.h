// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Opcodes.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class CodeSizeEvaluator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::CodeSizeEvaluator>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/CodeSizeEvaluator";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::MethodVisitor, scapix::java_api::jdk::internal::org::objectweb::asm_::Opcodes>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Handle.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Label.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::commons::CodeSizeEvaluator : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/CodeSizeEvaluator",
	jdk::internal::org::objectweb::asm_::MethodVisitor,
	jdk::internal::org::objectweb::asm_::Opcodes>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::commons::CodeSizeEvaluator> new_object(jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> mv) { return base_::new_object(mv); }
	jint getMinSize() { return call_method<"getMinSize", jint>(); }
	jint getMaxSize() { return call_method<"getMaxSize", jint>(); }
	void visitInsn(jint opcode) { return call_method<"visitInsn", void>(opcode); }
	void visitIntInsn(jint opcode, jint operand) { return call_method<"visitIntInsn", void>(opcode, operand); }
	void visitVarInsn(jint opcode, jint var) { return call_method<"visitVarInsn", void>(opcode, var); }
	void visitTypeInsn(jint opcode, jni::ref<java::lang::String> type) { return call_method<"visitTypeInsn", void>(opcode, type); }
	void visitFieldInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitFieldInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jboolean itf) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc, itf); }
	void visitInvokeDynamicInsn(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<jdk::internal::org::objectweb::asm_::Handle> bsm, jni::ref<jni::array<java::lang::Object>> bsmArgs) { return call_method<"visitInvokeDynamicInsn", void>(name, desc, bsm, bsmArgs); }
	void visitJumpInsn(jint opcode, jni::ref<jdk::internal::org::objectweb::asm_::Label> label) { return call_method<"visitJumpInsn", void>(opcode, label); }
	void visitLdcInsn(jni::ref<java::lang::Object> cst) { return call_method<"visitLdcInsn", void>(cst); }
	void visitIincInsn(jint var, jint increment) { return call_method<"visitIincInsn", void>(var, increment); }
	void visitTableSwitchInsn(jint min, jint max, jni::ref<jdk::internal::org::objectweb::asm_::Label> dflt, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> labels) { return call_method<"visitTableSwitchInsn", void>(min, max, dflt, labels); }
	void visitLookupSwitchInsn(jni::ref<jdk::internal::org::objectweb::asm_::Label> dflt, jni::ref<jni::array<jint>> keys, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> labels) { return call_method<"visitLookupSwitchInsn", void>(dflt, keys, labels); }
	void visitMultiANewArrayInsn(jni::ref<java::lang::String> desc, jint dims) { return call_method<"visitMultiANewArrayInsn", void>(desc, dims); }

protected:

	CodeSizeEvaluator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_CODESIZEEVALUATOR
