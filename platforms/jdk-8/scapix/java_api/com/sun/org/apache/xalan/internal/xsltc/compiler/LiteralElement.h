// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class LiteralElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralElement : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralElement",
	com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction>
{
public:

	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getName() { return call_method<"getName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(); }
	void display(jint p1) { return call_method<"display", void>(p1); }
	void registerNamespace(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p3, jboolean p4) { return call_method<"registerNamespace", void>(p1, p2, p3, p4); }
	void addAttribute(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1) { return call_method<"addAttribute", void>(p1); }
	void setFirstAttribute(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1) { return call_method<"setFirstAttribute", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> typeCheck(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p1) { return call_method<"typeCheck", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(p1); }
	jni::ref<java::util::Set> getNamespaceScope(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1) { return call_method<"getNamespaceScope", jni::ref<java::util::Set>>(p1); }
	void parseContents(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p1) { return call_method<"parseContents", void>(p1); }
	void translate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translate", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::serializer::ElemDesc> getElemDesc() { return call_method<"getElemDesc", jni::ref<com::sun::org::apache::xml::internal::serializer::ElemDesc>>(); }
	jboolean allAttributesUnique() { return call_method<"allAttributesUnique", jboolean>(); }

protected:

	LiteralElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_LITERALELEMENT
