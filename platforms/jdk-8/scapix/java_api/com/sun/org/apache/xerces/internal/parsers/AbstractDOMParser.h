// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/parsers/AbstractXMLDocumentParser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::parsers { class AbstractDOMParser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/QName.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Locale.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::parsers::AbstractDOMParser : public jni::object_base<"com/sun/org/apache/xerces/internal/parsers/AbstractDOMParser",
	com::sun::org::apache::xerces::internal::parsers::AbstractXMLDocumentParser>
{
public:

	jni::ref<org::w3c::dom::Document> getDocument() { return call_method<"getDocument", jni::ref<org::w3c::dom::Document>>(); }
	void dropDocumentReferences() { return call_method<"dropDocumentReferences", void>(); }
	void reset() { return call_method<"reset", void>(); }
	void setLocale(jni::ref<java::util::Locale> p1) { return call_method<"setLocale", void>(p1); }
	void startGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startGeneralEntity", void>(p1, p2, p3, p4); }
	void textDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"textDecl", void>(p1, p2, p3); }
	void comment(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"comment", void>(p1, p2); }
	void processingInstruction(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"processingInstruction", void>(p1, p2, p3); }
	void startDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLLocator> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::NamespaceContext> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startDocument", void>(p1, p2, p3, p4); }
	void xmlDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"xmlDecl", void>(p1, p2, p3, p4); }
	void doctypeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"doctypeDecl", void>(p1, p2, p3, p4); }
	void startElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"startElement", void>(p1, p2, p3); }
	void emptyElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLAttributes> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"emptyElement", void>(p1, p2, p3); }
	void characters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"characters", void>(p1, p2); }
	void ignorableWhitespace(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignorableWhitespace", void>(p1, p2); }
	void endElement(jni::ref<com::sun::org::apache::xerces::internal::xni::QName> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endElement", void>(p1, p2); }
	void startCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"startCDATA", void>(p1); }
	void endCDATA(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endCDATA", void>(p1); }
	void endDocument(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endDocument", void>(p1); }
	void endGeneralEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endGeneralEntity", void>(p1, p2); }
	void startDTD(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLLocator> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startDTD", void>(p1, p2); }
	void endDTD(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endDTD", void>(p1); }
	void startConditional(jshort p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startConditional", void>(p1, p2); }
	void endConditional(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endConditional", void>(p1); }
	void startExternalSubset(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startExternalSubset", void>(p1, p2); }
	void endExternalSubset(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endExternalSubset", void>(p1); }
	void internalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"internalEntityDecl", void>(p1, p2, p3, p4); }
	void externalEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"externalEntityDecl", void>(p1, p2, p3); }
	void startParameterEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"startParameterEntity", void>(p1, p2, p3, p4); }
	void endParameterEntity(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"endParameterEntity", void>(p1, p2); }
	void unparsedEntityDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<java::lang::String> p3, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p4) { return call_method<"unparsedEntityDecl", void>(p1, p2, p3, p4); }
	void notationDecl(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"notationDecl", void>(p1, p2, p3); }
	void ignoredCharacters(jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"ignoredCharacters", void>(p1, p2); }
	void elementDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p3) { return call_method<"elementDecl", void>(p1, p2, p3); }
	void attributeDecl(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<jni::array<java::lang::String>> p4, jni::ref<java::lang::String> p5, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p6, jni::ref<com::sun::org::apache::xerces::internal::xni::XMLString> p7, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p8) { return call_method<"attributeDecl", void>(p1, p2, p3, p4, p5, p6, p7, p8); }
	void startAttlist(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p2) { return call_method<"startAttlist", void>(p1, p2); }
	void endAttlist(jni::ref<com::sun::org::apache::xerces::internal::xni::Augmentations> p1) { return call_method<"endAttlist", void>(p1); }
	void abort() { return call_method<"abort", void>(); }

protected:

	AbstractDOMParser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_PARSERS_ABSTRACTDOMPARSER
