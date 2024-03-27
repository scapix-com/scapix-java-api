// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser.h>
#include <scapix/java_api/org/w3c/dom/ls/LSParser.h>
#include <scapix/java_api/org/w3c/dom/DOMConfiguration.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class DOMParserImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::DOMParserImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/DOMParserImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser, scapix::java_api::org::w3c::dom::ls::LSParser, scapix::java_api::org::w3c::dom::DOMConfiguration>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/DOMStringList.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#include <scapix/java_api/org/w3c/dom/ls/LSParserFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::DOMParserImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/DOMParserImpl",
	com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser,
	org::w3c::dom::ls::LSParser,
	org::w3c::dom::DOMConfiguration>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParserImpl> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration> p1, jni::ref<java::lang::String> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParserImpl> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParserImpl> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::DOMParserImpl> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2) { return base_::new_object(p1, p2); }
	void reset() { return call_method<"reset", void>(); }
	jni::ref<org::w3c::dom::DOMConfiguration> getDomConfig() { return call_method<"getDomConfig", jni::ref<org::w3c::dom::DOMConfiguration>>(); }
	jni::ref<org::w3c::dom::ls::LSParserFilter> getFilter() { return call_method<"getFilter", jni::ref<org::w3c::dom::ls::LSParserFilter>>(); }
	void setFilter(jni::ref<org::w3c::dom::ls::LSParserFilter> p1) { return call_method<"setFilter", void>(p1); }
	void setParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setParameter", void>(p1, p2); }
	jni::ref<java::lang::Object> getParameter(jni::ref<java::lang::String> p1) { return call_method<"getParameter", jni::ref<java::lang::Object>>(p1); }
	jboolean canSetParameter(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"canSetParameter", jboolean>(p1, p2); }
	jni::ref<org::w3c::dom::DOMStringList> getParameterNames() { return call_method<"getParameterNames", jni::ref<org::w3c::dom::DOMStringList>>(); }
	jni::ref<org::w3c::dom::Document> parseURI(jni::ref<java::lang::String> p1) { return call_method<"parseURI", jni::ref<org::w3c::dom::Document>>(p1); }
	jni::ref<org::w3c::dom::Document> parse(jni::ref<org::w3c::dom::ls::LSInput> p1) { return call_method<"parse", jni::ref<org::w3c::dom::Document>>(p1); }
	jni::ref<org::w3c::dom::Node> parseWithContext(jni::ref<org::w3c::dom::ls::LSInput> p1, jni::ref<org::w3c::dom::Node> p2, jshort p3) { return call_method<"parseWithContext", jni::ref<org::w3c::dom::Node>>(p1, p2, p3); }
	jboolean getAsync() { return call_method<"getAsync", jboolean>(); }
	jboolean getBusy() { return call_method<"getBusy", jboolean>(); }
	void abort() { return call_method<"abort", void>(); }
	void startElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"startElement", void>(p1, p2, p3); }

protected:

	DOMParserImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_DOMPARSERIMPL
