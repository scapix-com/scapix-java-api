// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class XMLDocumentParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/XMLDocumentParser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarPool.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/parser/XMLParserConfiguration.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/XMLDocumentParser",
	com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser> new_object(jni::ref<com::sun::org::apache::xerces::internal::xni::parser::XMLParserConfiguration> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xerces::internal::parsers::XMLDocumentParser> new_object(jni::ref<com::sun::org::apache::xerces::internal::util::SymbolTable> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarPool> p2) { return base_::new_object(p1, p2); }

protected:

	XMLDocumentParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_XMLDOCUMENTPARSER