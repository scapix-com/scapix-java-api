// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/jdk/internal/org/objectweb/asm/signature/SignatureVisitor.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::org::objectweb::asm_::util { class CheckSignatureAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter>
{
	static constexpr fixed_string class_name = "jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter";
	using base_classes = std::tuple<scapix::java_api::jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter : public jni::object_base<"jdk/internal/org/objectweb/asm/util/CheckSignatureAdapter",
	jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>
{
public:

	static jint CLASS_SIGNATURE() { return get_static_field<"CLASS_SIGNATURE", jint>(); }
	static jint METHOD_SIGNATURE() { return get_static_field<"METHOD_SIGNATURE", jint>(); }
	static jint TYPE_SIGNATURE() { return get_static_field<"TYPE_SIGNATURE", jint>(); }

	static jni::ref<jdk::internal::org::objectweb::asm_::util::CheckSignatureAdapter> new_object(jint type, jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> sv) { return base_::new_object(type, sv); }
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
	jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor> visitTypeArgument(jchar wildcard) { return call_method<"visitTypeArgument", jni::ref<jdk::internal::org::objectweb::asm_::signature::SignatureVisitor>>(wildcard); }
	void visitEnd() { return call_method<"visitEnd", void>(); }

protected:

	CheckSignatureAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_ORG_OBJECTWEB_ASM_UTIL_CHECKSIGNATUREADAPTER
