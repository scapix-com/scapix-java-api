// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/commons/LocalVariablesSorter.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::commons { class RemappingMethodAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::RemappingMethodAdapter>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/commons/RemappingMethodAdapter";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::commons::LocalVariablesSorter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/AnnotationVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Handle.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/Label.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/MethodVisitor.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/TypePath.h>
#include <scapix/java_api/jdk/internal/org/objectweb/asm/commons/Remapper.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::commons::RemappingMethodAdapter : public jni::object_base<"jdk/internal/org/objectweb/asm/commons/RemappingMethodAdapter",
	jdk::internal::org::objectweb::asm_::commons::LocalVariablesSorter>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::commons::RemappingMethodAdapter> new_object(jint access, jni::ref<java::lang::String> desc, jni::ref<jdk::internal::org::objectweb::asm_::MethodVisitor> mv, jni::ref<jdk::internal::org::objectweb::asm_::commons::Remapper> remapper) { return base_::new_object(access, desc, mv, remapper); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotationDefault() { return call_method<"visitAnnotationDefault", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitAnnotation(jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitTypeAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitTypeAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, desc, visible); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitParameterAnnotation(jint parameter, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitParameterAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(parameter, desc, visible); }
	void visitFrame(jint type, jint nLocal, jni::ref<jni::array<java::lang::Object>> local, jint nStack, jni::ref<jni::array<java::lang::Object>> stack) { return call_method<"visitFrame", void>(type, nLocal, local, nStack, stack); }
	void visitFieldInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitFieldInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc); }
	void visitMethodInsn(jint opcode, jni::ref<java::lang::String> owner, jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jboolean itf) { return call_method<"visitMethodInsn", void>(opcode, owner, name, desc, itf); }
	void visitInvokeDynamicInsn(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<jdk::internal::org::objectweb::asm_::Handle> bsm, jni::ref<jni::array<java::lang::Object>> bsmArgs) { return call_method<"visitInvokeDynamicInsn", void>(name, desc, bsm, bsmArgs); }
	void visitTypeInsn(jint opcode, jni::ref<java::lang::String> type) { return call_method<"visitTypeInsn", void>(opcode, type); }
	void visitLdcInsn(jni::ref<java::lang::Object> cst) { return call_method<"visitLdcInsn", void>(cst); }
	void visitMultiANewArrayInsn(jni::ref<java::lang::String> desc, jint dims) { return call_method<"visitMultiANewArrayInsn", void>(desc, dims); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitInsnAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitInsnAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, desc, visible); }
	void visitTryCatchBlock(jni::ref<jdk::internal::org::objectweb::asm_::Label> start, jni::ref<jdk::internal::org::objectweb::asm_::Label> end, jni::ref<jdk::internal::org::objectweb::asm_::Label> handler, jni::ref<java::lang::String> type) { return call_method<"visitTryCatchBlock", void>(start, end, handler, type); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitTryCatchAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitTryCatchAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, desc, visible); }
	void visitLocalVariable(jni::ref<java::lang::String> name, jni::ref<java::lang::String> desc, jni::ref<java::lang::String> signature, jni::ref<jdk::internal::org::objectweb::asm_::Label> start, jni::ref<jdk::internal::org::objectweb::asm_::Label> end, jint index) { return call_method<"visitLocalVariable", void>(name, desc, signature, start, end, index); }
	jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor> visitLocalVariableAnnotation(jint typeRef, jni::ref<jdk::internal::org::objectweb::asm_::TypePath> typePath, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> start, jni::ref<jni::array<jdk::internal::org::objectweb::asm_::Label>> end, jni::ref<jni::array<jint>> index, jni::ref<java::lang::String> desc, jboolean visible) { return call_method<"visitLocalVariableAnnotation", jni::ref<jdk::internal::org::objectweb::asm_::AnnotationVisitor>>(typeRef, typePath, start, end, index, desc, visible); }

protected:

	RemappingMethodAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_COMMONS_REMAPPINGMETHODADAPTER
