// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm { class DOM2DTM; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/IncrementalSAXSource.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>
#include <scapix/java_api/javax/xml/transform/dom/DOMSource.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#include <scapix/java_api/org/xml/sax/DTDHandler.h>
#include <scapix/java_api/org/xml/sax/EntityResolver.h>
#include <scapix/java_api/org/xml/sax/ErrorHandler.h>
#include <scapix/java_api/org/xml/sax/ext/DeclHandler.h>
#include <scapix/java_api/org/xml/sax/ext/LexicalHandler.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM_CharacterNodeHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators>
{
public:

	using CharacterNodeHandler = DOM2DTM_CharacterNodeHandler;

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::dom2dtm::DOM2DTM> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1, jni::ref<javax::xml::transform::dom::DOMSource> p2, jint p3, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p4, jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> p5, jboolean p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jint getNumberOfNodes() { return call_method<"getNumberOfNodes", jint>(); }
	jni::ref<org::w3c::dom::Node> getNode(jint p1) { return call_method<"getNode", jni::ref<org::w3c::dom::Node>>(p1); }
	jint getHandleOfNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"getHandleOfNode", jint>(p1); }
	jint getAttributeNode(jint p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getAttributeNode", jint>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> getStringValue(jint p1) { return call_method<"getStringValue", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jboolean isWhitespace(jint p1) { return call_method<"isWhitespace", jboolean>(p1); }
	jni::ref<java::lang::String> getNodeName(jint p1) { return call_method<"getNodeName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNodeNameX(jint p1) { return call_method<"getNodeNameX", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getLocalName(jint p1) { return call_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getPrefix(jint p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceURI(jint p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNodeValue(jint p1) { return call_method<"getNodeValue", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getDocumentTypeDeclarationSystemIdentifier() { return call_method<"getDocumentTypeDeclarationSystemIdentifier", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDocumentTypeDeclarationPublicIdentifier() { return call_method<"getDocumentTypeDeclarationPublicIdentifier", jni::ref<java::lang::String>>(); }
	jint getElementById(jni::ref<java::lang::String> p1) { return call_method<"getElementById", jint>(p1); }
	jni::ref<java::lang::String> getUnparsedEntityURI(jni::ref<java::lang::String> p1) { return call_method<"getUnparsedEntityURI", jni::ref<java::lang::String>>(p1); }
	jboolean isAttributeSpecified(jint p1) { return call_method<"isAttributeSpecified", jboolean>(p1); }
	void setIncrementalSAXSource(jni::ref<com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource> p1) { return call_method<"setIncrementalSAXSource", void>(p1); }
	jni::ref<org::xml::sax::ContentHandler> getContentHandler() { return call_method<"getContentHandler", jni::ref<org::xml::sax::ContentHandler>>(); }
	jni::ref<org::xml::sax::ext::LexicalHandler> getLexicalHandler() { return call_method<"getLexicalHandler", jni::ref<org::xml::sax::ext::LexicalHandler>>(); }
	jni::ref<org::xml::sax::EntityResolver> getEntityResolver() { return call_method<"getEntityResolver", jni::ref<org::xml::sax::EntityResolver>>(); }
	jni::ref<org::xml::sax::DTDHandler> getDTDHandler() { return call_method<"getDTDHandler", jni::ref<org::xml::sax::DTDHandler>>(); }
	jni::ref<org::xml::sax::ErrorHandler> getErrorHandler() { return call_method<"getErrorHandler", jni::ref<org::xml::sax::ErrorHandler>>(); }
	jni::ref<org::xml::sax::ext::DeclHandler> getDeclHandler() { return call_method<"getDeclHandler", jni::ref<org::xml::sax::ext::DeclHandler>>(); }
	jboolean needsTwoThreads() { return call_method<"needsTwoThreads", jboolean>(); }
	void dispatchCharactersEvents(jint p1, jni::ref<org::xml::sax::ContentHandler> p2, jboolean p3) { return call_method<"dispatchCharactersEvents", void>(p1, p2, p3); }
	void dispatchToEvents(jint p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"dispatchToEvents", void>(p1, p2); }
	void setProperty(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2) { return call_method<"setProperty", void>(p1, p2); }
	jni::ref<javax::xml::transform::SourceLocator> getSourceLocatorFor(jint p1) { return call_method<"getSourceLocatorFor", jni::ref<javax::xml::transform::SourceLocator>>(p1); }

protected:

	DOM2DTM(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DOM2DTM_DOM2DTM