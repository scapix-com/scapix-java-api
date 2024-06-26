// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class Parser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/Parser";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants, scapix::java_api::org::xml::sax::ContentHandler>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Output.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Template.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/ArrayList.h>
#include <scapix/java_api/java/util/Properties.h>
#include <scapix/java_api/org/xml/sax/Attributes.h>
#include <scapix/java_api/org/xml/sax/InputSource.h>
#include <scapix/java_api/org/xml/sax/Locator.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::Parser : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/Parser",
	java::lang::Object,
	com::sun::org::apache::xalan::internal::xsltc::compiler::Constants,
	org::xml::sax::ContentHandler>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC> p1, jboolean p2) { return base_::new_object(p1, p2); }
	void init() { return call_method<"init", void>(); }
	void setOutput(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Output> p1) { return call_method<"setOutput", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Output> getOutput() { return call_method<"getOutput", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Output>>(); }
	jni::ref<java::util::Properties> getOutputProperties() { return call_method<"getOutputProperties", jni::ref<java::util::Properties>>(); }
	void addVariable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Variable> p1) { return call_method<"addVariable", void>(p1); }
	void addParameter(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Param> p1) { return call_method<"addParameter", void>(p1); }
	void removeVariable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"removeVariable", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase> lookupVariable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1) { return call_method<"lookupVariable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase>>(p1); }
	void setXSLTC(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC> p1) { return call_method<"setXSLTC", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC> getXSLTC() { return call_method<"getXSLTC", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC>>(); }
	jint getCurrentImportPrecedence() { return call_method<"getCurrentImportPrecedence", jint>(); }
	jint getNextImportPrecedence() { return call_method<"getNextImportPrecedence", jint>(); }
	void setCurrentStylesheet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> p1) { return call_method<"setCurrentStylesheet", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> getCurrentStylesheet() { return call_method<"getCurrentStylesheet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> getTopLevelStylesheet() { return call_method<"getTopLevelStylesheet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQNameSafe(jni::ref<java::lang::String> p1) { return call_method<"getQNameSafe", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<java::lang::String> p1) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQNameIgnoreDefaultNs(jni::ref<java::lang::String> p1) { return call_method<"getQNameIgnoreDefaultNs", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p2) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getUseAttributeSets() { return call_method<"getUseAttributeSets", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getExtensionElementPrefixes() { return call_method<"getExtensionElementPrefixes", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getExcludeResultPrefixes() { return call_method<"getExcludeResultPrefixes", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> makeStylesheet(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1) { return call_method<"makeStylesheet", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet>>(p1); }
	void createAST(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Stylesheet> p1) { return call_method<"createAST", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> parse(jni::ref<org::xml::sax::XMLReader> p1, jni::ref<org::xml::sax::InputSource> p2) { return call_method<"parse", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> parse(jni::ref<org::xml::sax::InputSource> p1) { return call_method<"parse", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> getDocumentRoot() { return call_method<"getDocumentRoot", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>>(); }
	jboolean elementSupported(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"elementSupported", jboolean>(p1, p2); }
	jboolean functionSupported(jni::ref<java::lang::String> p1) { return call_method<"functionSupported", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> getSymbolTable() { return call_method<"getSymbolTable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template> getTemplate() { return call_method<"getTemplate", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template>>(); }
	void setTemplate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Template> p1) { return call_method<"setTemplate", void>(p1); }
	jint getTemplateIndex() { return call_method<"getTemplateIndex", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> makeInstance(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<org::xml::sax::Attributes> p4) { return call_method<"makeInstance", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>>(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression> parseExpression(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1, jni::ref<java::lang::String> p2) { return call_method<"parseExpression", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression> parseExpression(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"parseExpression", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern> parsePattern(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1, jni::ref<java::lang::String> p2) { return call_method<"parsePattern", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern> parsePattern(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"parsePattern", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern>>(p1, p2, p3); }
	jboolean errorsFound() { return call_method<"errorsFound", jboolean>(); }
	void printErrors() { return call_method<"printErrors", void>(); }
	void printWarnings() { return call_method<"printWarnings", void>(); }
	void reportError(jint p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg> p2) { return call_method<"reportError", void>(p1, p2); }
	jni::ref<java::util::ArrayList> getErrors() { return call_method<"getErrors", jni::ref<java::util::ArrayList>>(); }
	jni::ref<java::util::ArrayList> getWarnings() { return call_method<"getWarnings", jni::ref<java::util::ArrayList>>(); }
	void startDocument() { return call_method<"startDocument", void>(); }
	void endDocument() { return call_method<"endDocument", void>(); }
	void startPrefixMapping(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"startPrefixMapping", void>(p1, p2); }
	void endPrefixMapping(jni::ref<java::lang::String> p1) { return call_method<"endPrefixMapping", void>(p1); }
	void startElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<org::xml::sax::Attributes> p4) { return call_method<"startElement", void>(p1, p2, p3, p4); }
	void endElement(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"endElement", void>(p1, p2, p3); }
	void characters(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"characters", void>(p1, p2, p3); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"processingInstruction", void>(p1, p2); }
	void ignorableWhitespace(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"ignorableWhitespace", void>(p1, p2, p3); }
	void skippedEntity(jni::ref<java::lang::String> p1) { return call_method<"skippedEntity", void>(p1); }
	void setDocumentLocator(jni::ref<org::xml::sax::Locator> p1) { return call_method<"setDocumentLocator", void>(p1); }

protected:

	Parser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_PARSER
