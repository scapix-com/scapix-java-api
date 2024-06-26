// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class SymbolTable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeSet.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/DecimalFormatting.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Key.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodType.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable",
	java::lang::Object>
{
public:

	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting> getDecimalFormatting(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"getDecimalFormatting", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting>>(p1); }
	void addDecimalFormatting(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::DecimalFormatting> p2) { return call_method<"addDecimalFormatting", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Key> getKey(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"getKey", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Key>>(p1); }
	void addKey(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Key> p2) { return call_method<"addKey", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> addStylesheet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> p2) { return call_method<"addStylesheet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> lookupStylesheet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupStylesheet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template> addTemplate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template> p1) { return call_method<"addTemplate", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template> lookupTemplate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupTemplate", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable> addVariable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable> p1) { return call_method<"addVariable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param> addParam(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param> p1) { return call_method<"addParam", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable> lookupVariable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupVariable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param> lookupParam(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupParam", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> lookupName(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet> addAttributeSet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet> p1) { return call_method<"addAttributeSet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet> lookupAttributeSet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupAttributeSet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeSet>>(p1); }
	void addPrimop(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodType> p2) { return call_method<"addPrimop", void>(p1, p2); }
	jni::ref<java::util::Vector> lookupPrimop(jni::ref<java::lang::String> p1) { return call_method<"lookupPrimop", jni::ref<java::util::Vector>>(p1); }
	jni::ref<java::lang::String> generateNamespacePrefix() { return call_method<"generateNamespacePrefix", jni::ref<java::lang::String>>(); }
	void setCurrentNode(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1) { return call_method<"setCurrentNode", void>(p1); }
	jni::ref<java::lang::String> lookupNamespace(jni::ref<java::lang::String> p1) { return call_method<"lookupNamespace", jni::ref<java::lang::String>>(p1); }
	void addPrefixAlias(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"addPrefixAlias", void>(p1, p2); }
	jni::ref<java::lang::String> lookupPrefixAlias(jni::ref<java::lang::String> p1) { return call_method<"lookupPrefixAlias", jni::ref<java::lang::String>>(p1); }
	void excludeURI(jni::ref<java::lang::String> p1) { return call_method<"excludeURI", void>(p1); }
	void excludeNamespaces(jni::ref<java::lang::String> p1) { return call_method<"excludeNamespaces", void>(p1); }
	jboolean isExcludedNamespace(jni::ref<java::lang::String> p1) { return call_method<"isExcludedNamespace", jboolean>(p1); }
	void unExcludeNamespaces(jni::ref<java::lang::String> p1) { return call_method<"unExcludeNamespaces", void>(p1); }
	void pushExcludedNamespacesContext() { return call_method<"pushExcludedNamespacesContext", void>(); }
	void popExcludedNamespacesContext() { return call_method<"popExcludedNamespacesContext", void>(); }

protected:

	SymbolTable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_SYMBOLTABLE
