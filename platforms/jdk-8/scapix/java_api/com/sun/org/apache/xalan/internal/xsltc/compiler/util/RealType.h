// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util { class RealType; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <scapix/java_api/com/sun/org/apache/bcel/internal/generic/Type.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType",
	com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean identicalTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1) { return call_method<"identicalTo", jboolean>(p1); }
	jni::ref<java::lang::String> toSignature() { return call_method<"toSignature", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Type> toJCType() { return call_method<"toJCType", jni::ref<com::sun::org::apache::bcel::internal::generic::Type>>(); }
	jint distanceTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p1) { return call_method<"distanceTo", jint>(p1); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList> translateToDesynthesized(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType> p3) { return call_method<"translateToDesynthesized", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList>>(p1, p2, p3); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	void translateTo(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<java::lang::Class> p3) { return call_method<"translateTo", void>(p1, p2, p3); }
	void translateFrom(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2, jni::ref<java::lang::Class> p3) { return call_method<"translateFrom", void>(p1, p2, p3); }
	void translateBox(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translateBox", void>(p1, p2); }
	void translateUnBox(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translateUnBox", void>(p1, p2); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> ADD() { return call_method<"ADD", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> SUB() { return call_method<"SUB", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> MUL() { return call_method<"MUL", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> DIV() { return call_method<"DIV", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> REM() { return call_method<"REM", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> NEG() { return call_method<"NEG", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> LOAD(jint p1) { return call_method<"LOAD", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> STORE(jint p1) { return call_method<"STORE", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> POP() { return call_method<"POP", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> CMP(jboolean p1) { return call_method<"CMP", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(p1); }
	jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction> DUP() { return call_method<"DUP", jni::ref<com::sun::org::apache::bcel::internal::generic::Instruction>>(); }

protected:

	RealType(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UTIL_REALTYPE
