// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/java_cup/internal/runtime/lr_parser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class XPathParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser";
	using base_classes = std::tuple<scapix::java_api::com::sun::java_cup::internal::runtime::lr_parser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/java_cup/internal/runtime/Scanner.h>
#include <scapix/java_api/com/sun/java_cup/internal/runtime/Symbol.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRef.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Stack.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/XPathParser",
	com::sun::java_cup::internal::runtime::lr_parser>
{
public:

	static jni::ref<java::util::List> EmptyArgs() { return get_static_field<"EmptyArgs", jni::ref<java::util::List>>(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRef> DummyVarRef() { return get_static_field<"DummyVarRef", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRef>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> _symbolTable() { return get_field<"_symbolTable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable>>(); }
	void _symbolTable(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> v) { set_field<"_symbolTable", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable>>(v); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser> new_object(jni::ref<com::sun::java_cup::internal::runtime::Scanner> p1) { return base_::new_object(p1); }
	jni::ref<jni::array<jni::array<jshort>>> production_table() { return call_method<"production_table", jni::ref<jni::array<jni::array<jshort>>>>(); }
	jni::ref<jni::array<jni::array<jshort>>> action_table() { return call_method<"action_table", jni::ref<jni::array<jni::array<jshort>>>>(); }
	jni::ref<jni::array<jni::array<jshort>>> reduce_table() { return call_method<"reduce_table", jni::ref<jni::array<jni::array<jshort>>>>(); }
	jni::ref<com::sun::java_cup::internal::runtime::Symbol> do_action(jint p1, jni::ref<com::sun::java_cup::internal::runtime::lr_parser> p2, jni::ref<java::util::Stack> p3, jint p4) { return call_method<"do_action", jni::ref<com::sun::java_cup::internal::runtime::Symbol>>(p1, p2, p3, p4); }
	jint start_state() { return call_method<"start_state", jint>(); }
	jint start_production() { return call_method<"start_production", jint>(); }
	jint EOF_sym() { return call_method<"EOF_sym", jint>(); }
	jint error_sym() { return call_method<"error_sym", jint>(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::XPathParser> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p1) { return base_::new_object(p1); }
	jint getLineNumber() { return call_method<"getLineNumber", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQNameIgnoreDefaultNs(jni::ref<java::lang::String> p1) { return call_method<"getQNameIgnoreDefaultNs", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> getQName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getQName", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName>>(p1, p2, p3); }
	void setMultiDocument(jboolean p1) { return call_method<"setMultiDocument", void>(p1); }
	void setCallsNodeset(jboolean p1) { return call_method<"setCallsNodeset", void>(p1); }
	void setHasIdCall(jboolean p1) { return call_method<"setHasIdCall", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern> createStepPattern(jint p1, jni::ref<java::lang::Object> p2, jni::ref<java::util::List> p3) { return call_method<"createStepPattern", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern>>(p1, p2, p3); }
	jint findNodeType(jint p1, jni::ref<java::lang::Object> p2) { return call_method<"findNodeType", jint>(p1, p2); }
	jni::ref<com::sun::java_cup::internal::runtime::Symbol> parse(jni::ref<java::lang::String> p1, jint p2) { return call_method<"parse", jni::ref<com::sun::java_cup::internal::runtime::Symbol>>(p1, p2); }
	void addError(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg> p1) { return call_method<"addError", void>(p1); }
	void report_error(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"report_error", void>(p1, p2); }
	void report_fatal_error(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"report_fatal_error", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath> insertStep(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Step> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath> p2) { return call_method<"insertStep", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath>>(p1, p2); }
	jboolean isElementAxis(jint p1) { return call_method<"isElementAxis", jboolean>(p1); }

protected:

	XPathParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_XPATHPARSER
