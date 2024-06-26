// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class DOMAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::DOM>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/StripFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/serializer/SerializationHandler.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/DOMAdapter",
	java::lang::Object,
	com::sun::org::apache::xalan::internal::xsltc::DOM>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::DOMAdapter> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<jni::array<java::lang::String>> p3, jni::ref<jni::array<jint>> p4, jni::ref<jni::array<java::lang::String>> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void setupMapping(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<java::lang::String>> p2, jni::ref<jni::array<jint>> p3, jni::ref<jni::array<java::lang::String>> p4) { return call_method<"setupMapping", void>(p1, p2, p3, p4); }
	jni::ref<jni::array<java::lang::String>> getNamesArray() { return call_method<"getNamesArray", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<java::lang::String>> getUrisArray() { return call_method<"getUrisArray", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<jni::array<jint>> getTypesArray() { return call_method<"getTypesArray", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<java::lang::String>> getNamespaceArray() { return call_method<"getNamespaceArray", jni::ref<jni::array<java::lang::String>>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> getDOMImpl() { return call_method<"getDOMImpl", jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getIterator() { return call_method<"getIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jni::ref<java::lang::String> getStringValue() { return call_method<"getStringValue", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getChildren(jint p1) { return call_method<"getChildren", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	void setFilter(jni::ref<com::sun::org::apache::xalan::internal::xsltc::StripFilter> p1) { return call_method<"setFilter", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getTypedChildren(jint p1) { return call_method<"getTypedChildren", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getNamespaceAxisIterator(jint p1, jint p2) { return call_method<"getNamespaceAxisIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getAxisIterator(jint p1) { return call_method<"getAxisIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getTypedAxisIterator(jint p1, jint p2) { return call_method<"getTypedAxisIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1, p2); }
	jint getMultiDOMMask() { return call_method<"getMultiDOMMask", jint>(); }
	void setMultiDOMMask(jint p1) { return call_method<"setMultiDOMMask", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getNthDescendant(jint p1, jint p2, jboolean p3) { return call_method<"getNthDescendant", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getNodeValueIterator(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1, jint p2, jni::ref<java::lang::String> p3, jboolean p4) { return call_method<"getNodeValueIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> orderNodes(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1, jint p2) { return call_method<"orderNodes", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1, p2); }
	jint getExpandedTypeID(jint p1) { return call_method<"getExpandedTypeID", jint>(p1); }
	jint getNamespaceType(jint p1) { return call_method<"getNamespaceType", jint>(p1); }
	jint getNSType(jint p1) { return call_method<"getNSType", jint>(p1); }
	jint getParent(jint p1) { return call_method<"getParent", jint>(p1); }
	jint getAttributeNode(jint p1, jint p2) { return call_method<"getAttributeNode", jint>(p1, p2); }
	jni::ref<java::lang::String> getNodeName(jint p1) { return call_method<"getNodeName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNodeNameX(jint p1) { return call_method<"getNodeNameX", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getNamespaceName(jint p1) { return call_method<"getNamespaceName", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> getStringValueX(jint p1) { return call_method<"getStringValueX", jni::ref<java::lang::String>>(p1); }
	void copy(jint p1, jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler> p2) { return call_method<"copy", void>(p1, p2); }
	void copy(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1, jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler> p2) { return call_method<"copy", void>(p1, p2); }
	jni::ref<java::lang::String> shallowCopy(jint p1, jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler> p2) { return call_method<"shallowCopy", jni::ref<java::lang::String>>(p1, p2); }
	jboolean lessThan(jint p1, jint p2) { return call_method<"lessThan", jboolean>(p1, p2); }
	void characters(jint p1, jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler> p2) { return call_method<"characters", void>(p1, p2); }
	jni::ref<org::w3c::dom::Node> makeNode(jint p1) { return call_method<"makeNode", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> makeNode(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1) { return call_method<"makeNode", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::NodeList> makeNodeList(jint p1) { return call_method<"makeNodeList", jni::ref<org::w3c::dom::NodeList>>(p1); }
	jni::ref<org::w3c::dom::NodeList> makeNodeList(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1) { return call_method<"makeNodeList", jni::ref<org::w3c::dom::NodeList>>(p1); }
	jni::ref<java::lang::String> getLanguage(jint p1) { return call_method<"getLanguage", jni::ref<java::lang::String>>(p1); }
	jint getSize() { return call_method<"getSize", jint>(); }
	void setDocumentURI(jni::ref<java::lang::String> p1) { return call_method<"setDocumentURI", void>(p1); }
	jni::ref<java::lang::String> getDocumentURI() { return call_method<"getDocumentURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getDocumentURI(jint p1) { return call_method<"getDocumentURI", jni::ref<java::lang::String>>(p1); }
	jint getDocument() { return call_method<"getDocument", jint>(); }
	jboolean isElement(jint p1) { return call_method<"isElement", jboolean>(p1); }
	jboolean isAttribute(jint p1) { return call_method<"isAttribute", jboolean>(p1); }
	jint getNodeIdent(jint p1) { return call_method<"getNodeIdent", jint>(p1); }
	jint getNodeHandle(jint p1) { return call_method<"getNodeHandle", jint>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> getResultTreeFrag(jint p1, jint p2) { return call_method<"getResultTreeFrag", jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM>>(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> getResultTreeFrag(jint p1, jint p2, jboolean p3) { return call_method<"getResultTreeFrag", jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler> getOutputDomBuilder() { return call_method<"getOutputDomBuilder", jni::ref<com::sun::org::apache::xml::internal::serializer::SerializationHandler>>(); }
	jni::ref<java::lang::String> lookupNamespace(jint p1, jni::ref<java::lang::String> p2) { return call_method<"lookupNamespace", jni::ref<java::lang::String>>(p1, p2); }
	jni::ref<java::lang::String> getUnparsedEntityURI(jni::ref<java::lang::String> p1) { return call_method<"getUnparsedEntityURI", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::util::Map> getElementsWithIDs() { return call_method<"getElementsWithIDs", jni::ref<java::util::Map>>(); }
	void release() { return call_method<"release", void>(); }

protected:

	DOMAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMADAPTER
