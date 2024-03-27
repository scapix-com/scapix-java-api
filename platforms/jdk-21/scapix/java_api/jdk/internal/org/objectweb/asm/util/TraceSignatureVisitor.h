// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class TraceSignatureVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::TraceSignatureVisitor>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/TraceSignatureVisitor";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::TraceSignatureVisitor : public jni::object_base<"jdk/internal/org/objectweb/asm/util/TraceSignatureVisitor",
	jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>
{
public:

	static jni::ref<jdk::internal::org::objectweb::asm_::util::TraceSignatureVisitor> new_object(jint accessFlags) { return base_::new_object(accessFlags); }
	void visitFormalTypeParameter(jni::ref<java::lang::String> name) { return call_method<"visitFormalTypeParameter", void>(name); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitClassBound() { return call_method<"visitClassBound", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitInterfaceBound() { return call_method<"visitInterfaceBound", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitSuperclass() { return call_method<"visitSuperclass", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitInterface() { return call_method<"visitInterface", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitParameterType() { return call_method<"visitParameterType", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitReturnType() { return call_method<"visitReturnType", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitExceptionType() { return call_method<"visitExceptionType", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	void visitBaseType(jchar descriptor) { return call_method<"visitBaseType", void>(descriptor); }
	void visitTypeVariable(jni::ref<java::lang::String> name) { return call_method<"visitTypeVariable", void>(name); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitArrayType() { return call_method<"visitArrayType", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(); }
	void visitClassType(jni::ref<java::lang::String> name) { return call_method<"visitClassType", void>(name); }
	void visitInnerClassType(jni::ref<java::lang::String> name) { return call_method<"visitInnerClassType", void>(name); }
	void visitTypeArgument() { return call_method<"visitTypeArgument", void>(); }
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitTypeArgument(jchar tag) { return call_method<"visitTypeArgument", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(tag); }
	void visitEnd() { return call_method<"visitEnd", void>(); }
	jni::ref<java::lang::String> getDeclaration() { return call_method<"getDeclaration", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getReturnType() { return call_method<"getReturnType", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getExceptions() { return call_method<"getExceptions", jni::ref<java::lang::String>>(); }

protected:

	TraceSignatureVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_TRACESIGNATUREVISITOR