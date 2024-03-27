// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xml::internal::dtm::DTM>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/SuballocatedIntVector.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase",
	java::lang::Object,
	com::sun::org::apache::xml::internal::dtm::DTM>
{
public:

	static jint ROOTNODE() { return get_static_field<"ROOTNODE", jint>(); }
	static jint DEFAULT_BLOCKSIZE() { return get_static_field<"DEFAULT_BLOCKSIZE", jint>(); }
	static jint DEFAULT_NUMBLOCKS() { return get_static_field<"DEFAULT_NUMBLOCKS", jint>(); }
	static jint DEFAULT_NUMBLOCKS_SMALL() { return get_static_field<"DEFAULT_NUMBLOCKS_SMALL", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> m_mgr() { return get_field<"m_mgr", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(); }
	void m_mgr(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> v) { set_field<"m_mgr", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(v); }

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1, jni::ref<javax::xml::transform::Source> p2, jint p3, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p4, jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> p5, jboolean p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1, jni::ref<javax::xml::transform::Source> p2, jint p3, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p4, jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> p5, jboolean p6, jint p7, jboolean p8, jboolean p9) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	void dumpDTM(jni::ref<java::io::OutputStream> p1) { return call_method<"dumpDTM", void>(p1); }
	jni::ref<java::lang::String> dumpNode(jint p1) { return call_method<"dumpNode", jni::ref<java::lang::String>>(p1); }
	void setFeature(jni::ref<java::lang::String> p1, jboolean p2) { return call_method<"setFeature", void>(p1, p2); }
	jboolean hasChildNodes(jint p1) { return call_method<"hasChildNodes", jboolean>(p1); }
	jint makeNodeHandle(jint p1) { return call_method<"makeNodeHandle", jint>(p1); }
	jint makeNodeIdentity(jint p1) { return call_method<"makeNodeIdentity", jint>(p1); }
	jint getFirstChild(jint p1) { return call_method<"getFirstChild", jint>(p1); }
	jint getTypedFirstChild(jint p1, jint p2) { return call_method<"getTypedFirstChild", jint>(p1, p2); }
	jint getLastChild(jint p1) { return call_method<"getLastChild", jint>(p1); }
	jint getAttributeNode(jint p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"getAttributeNode", jint>(p1, p2, p3); }
	jint getFirstAttribute(jint p1) { return call_method<"getFirstAttribute", jint>(p1); }
	jint getNextSibling(jint p1) { return call_method<"getNextSibling", jint>(p1); }
	jint getTypedNextSibling(jint p1, jint p2) { return call_method<"getTypedNextSibling", jint>(p1, p2); }
	jint getPreviousSibling(jint p1) { return call_method<"getPreviousSibling", jint>(p1); }
	jint getNextAttribute(jint p1) { return call_method<"getNextAttribute", jint>(p1); }
	jint getFirstNamespaceNode(jint p1, jboolean p2) { return call_method<"getFirstNamespaceNode", jint>(p1, p2); }
	jint getNextNamespaceNode(jint p1, jint p2, jboolean p3) { return call_method<"getNextNamespaceNode", jint>(p1, p2, p3); }
	jint getParent(jint p1) { return call_method<"getParent", jint>(p1); }
	jint getDocument() { return call_method<"getDocument", jint>(); }
	jint getOwnerDocument(jint p1) { return call_method<"getOwnerDocument", jint>(p1); }
	jint getDocumentRoot(jint p1) { return call_method<"getDocumentRoot", jint>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> getStringValue(jint p1) { return call_method<"getStringValue", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jint getStringValueChunkCount(jint p1) { return call_method<"getStringValueChunkCount", jint>(p1); }
	jni::ref<jni::array<jchar>> getStringValueChunk(jint p1, jint p2, jni::ref<jni::array<jint>> p3) { return call_method<"getStringValueChunk", jni::ref<jni::array<jchar>>>(p1, p2, p3); }
	jint getExpandedTypeID(jint p1) { return call_method<"getExpandedTypeID", jint>(p1); }
	jint getExpandedTypeID(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3) { return call_method<"getExpandedTypeID", jint>(p1, p2, p3); }
	jni::ref<java::lang::String> getLocalNameFromExpandedNameID(jint p1) { return call_method<"getLocalNameFromExpandedNameID", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceFromExpandedNameID(jint p1) { return call_method<"getNamespaceFromExpandedNameID", jni::ref<java::lang::String>>(p1); }
	jint getNamespaceType(jint p1) { return call_method<"getNamespaceType", jint>(p1); }
	jni::ref<java::lang::String> getNodeName(jint p1) { return call_method<"getNodeName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNodeNameX(jint p1) { return call_method<"getNodeNameX", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getLocalName(jint p1) { return call_method<"getLocalName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getPrefix(jint p1) { return call_method<"getPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceURI(jint p1) { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNodeValue(jint p1) { return call_method<"getNodeValue", jni::ref<java::lang::String>>(p1); }
	jshort getNodeType(jint p1) { return call_method<"getNodeType", jshort>(p1); }
	jshort getLevel(jint p1) { return call_method<"getLevel", jshort>(p1); }
	jint getNodeIdent(jint p1) { return call_method<"getNodeIdent", jint>(p1); }
	jint getNodeHandle(jint p1) { return call_method<"getNodeHandle", jint>(p1); }
	jboolean isSupported(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"isSupported", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getDocumentBaseURI() { return call_method<"getDocumentBaseURI", jni::ref<java::lang::String>>(); }
	void setDocumentBaseURI(jni::ref<java::lang::String> p1) { return call_method<"setDocumentBaseURI", void>(p1); }
	jni::ref<java::lang::String> getDocumentSystemIdentifier(jint p1) { return call_method<"getDocumentSystemIdentifier", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getDocumentEncoding(jint p1) { return call_method<"getDocumentEncoding", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getDocumentStandalone(jint p1) { return call_method<"getDocumentStandalone", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getDocumentVersion(jint p1) { return call_method<"getDocumentVersion", jni::ref<java::lang::String>>(p1); }
	jboolean getDocumentAllDeclarationsProcessed() { return call_method<"getDocumentAllDeclarationsProcessed", jboolean>(); }
	jni::ref<java::lang::String> getDocumentTypeDeclarationSystemIdentifier() { return call_method<"getDocumentTypeDeclarationSystemIdentifier", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDocumentTypeDeclarationPublicIdentifier() { return call_method<"getDocumentTypeDeclarationPublicIdentifier", jni::ref<java::lang::String>>(); }
	jint getElementById(jni::ref<java::lang::String> p1) { return call_method<"getElementById", jint>(p1); }
	jni::ref<java::lang::String> getUnparsedEntityURI(jni::ref<java::lang::String> p1) { return call_method<"getUnparsedEntityURI", jni::ref<java::lang::String>>(p1); }
	jboolean supportsPreStripping() { return call_method<"supportsPreStripping", jboolean>(); }
	jboolean isNodeAfter(jint p1, jint p2) { return call_method<"isNodeAfter", jboolean>(p1, p2); }
	jboolean isCharacterElementContentWhitespace(jint p1) { return call_method<"isCharacterElementContentWhitespace", jboolean>(p1); }
	jboolean isDocumentAllDeclarationsProcessed(jint p1) { return call_method<"isDocumentAllDeclarationsProcessed", jboolean>(p1); }
	jboolean isAttributeSpecified(jint p1) { return call_method<"isAttributeSpecified", jboolean>(p1); }
	void dispatchCharactersEvents(jint p1, jni::ref<org::xml::sax::ContentHandler> p2, jboolean p3) { return call_method<"dispatchCharactersEvents", void>(p1, p2, p3); }
	void dispatchToEvents(jint p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"dispatchToEvents", void>(p1, p2); }
	jni::ref<org::w3c::dom::Node> getNode(jint p1) { return call_method<"getNode", jni::ref<org::w3c::dom::Node>>(p1); }
	void appendChild(jint p1, jboolean p2, jboolean p3) { return call_method<"appendChild", void>(p1, p2, p3); }
	void appendTextChild(jni::ref<java::lang::String> p1) { return call_method<"appendTextChild", void>(p1); }
	void documentRegistration() { return call_method<"documentRegistration", void>(); }
	void documentRelease() { return call_method<"documentRelease", void>(); }
	void migrateTo(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1) { return call_method<"migrateTo", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> getManager() { return call_method<"getManager", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::SuballocatedIntVector> getDTMIDs() { return call_method<"getDTMIDs", jni::ref<com::sun::org::apache::xml::internal::utils::SuballocatedIntVector>>(); }

protected:

	DTMDefaultBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASE