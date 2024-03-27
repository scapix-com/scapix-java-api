// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>

#ifndef SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT_FWD
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::w3c::dom { class Document; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::w3c::dom::Document>
{
	static constexpr fixed_string class_name = "org/w3c/dom/Document";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT)
#define SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/CDATASection.h>
#include <scapix/java_api/org/w3c/dom/Comment.h>
#include <scapix/java_api/org/w3c/dom/DOMConfiguration.h>
#include <scapix/java_api/org/w3c/dom/DOMImplementation.h>
#include <scapix/java_api/org/w3c/dom/DocumentFragment.h>
#include <scapix/java_api/org/w3c/dom/DocumentType.h>
#include <scapix/java_api/org/w3c/dom/Element.h>
#include <scapix/java_api/org/w3c/dom/EntityReference.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/ProcessingInstruction.h>
#include <scapix/java_api/org/w3c/dom/Text.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::w3c::dom::Document : public jni::object_base<"org/w3c/dom/Document",
	java::lang::Object,
	org::w3c::dom::Node>
{
public:

	jni::ref<org::w3c::dom::DocumentType> getDoctype() { return call_method<"getDoctype", jni::ref<org::w3c::dom::DocumentType>>(); }
	jni::ref<org::w3c::dom::DOMImplementation> getImplementation() { return call_method<"getImplementation", jni::ref<org::w3c::dom::DOMImplementation>>(); }
	jni::ref<org::w3c::dom::Element> getDocumentElement() { return call_method<"getDocumentElement", jni::ref<org::w3c::dom::Element>>(); }
	jni::ref<org::w3c::dom::Element> createElement(jni::ref<java::lang::String> p1) { return call_method<"createElement", jni::ref<org::w3c::dom::Element>>(p1); }
	jni::ref<org::w3c::dom::DocumentFragment> createDocumentFragment() { return call_method<"createDocumentFragment", jni::ref<org::w3c::dom::DocumentFragment>>(); }
	jni::ref<org::w3c::dom::Text> createTextNode(jni::ref<java::lang::String> p1) { return call_method<"createTextNode", jni::ref<org::w3c::dom::Text>>(p1); }
	jni::ref<org::w3c::dom::Comment> createComment(jni::ref<java::lang::String> p1) { return call_method<"createComment", jni::ref<org::w3c::dom::Comment>>(p1); }
	jni::ref<org::w3c::dom::CDATASection> createCDATASection(jni::ref<java::lang::String> p1) { return call_method<"createCDATASection", jni::ref<org::w3c::dom::CDATASection>>(p1); }
	jni::ref<org::w3c::dom::ProcessingInstruction> createProcessingInstruction(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"createProcessingInstruction", jni::ref<org::w3c::dom::ProcessingInstruction>>(p1, p2); }
	jni::ref<org::w3c::dom::Attr> createAttribute(jni::ref<java::lang::String> p1) { return call_method<"createAttribute", jni::ref<org::w3c::dom::Attr>>(p1); }
	jni::ref<org::w3c::dom::EntityReference> createEntityReference(jni::ref<java::lang::String> p1) { return call_method<"createEntityReference", jni::ref<org::w3c::dom::EntityReference>>(p1); }
	jni::ref<org::w3c::dom::NodeList> getElementsByTagName(jni::ref<java::lang::String> p1) { return call_method<"getElementsByTagName", jni::ref<org::w3c::dom::NodeList>>(p1); }
	jni::ref<org::w3c::dom::Node> importNode(jni::ref<org::w3c::dom::Node> p1, jboolean p2) { return call_method<"importNode", jni::ref<org::w3c::dom::Node>>(p1, p2); }
	jni::ref<org::w3c::dom::Element> createElementNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"createElementNS", jni::ref<org::w3c::dom::Element>>(p1, p2); }
	jni::ref<org::w3c::dom::Attr> createAttributeNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"createAttributeNS", jni::ref<org::w3c::dom::Attr>>(p1, p2); }
	jni::ref<org::w3c::dom::NodeList> getElementsByTagNameNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getElementsByTagNameNS", jni::ref<org::w3c::dom::NodeList>>(p1, p2); }
	jni::ref<org::w3c::dom::Element> getElementById(jni::ref<java::lang::String> p1) { return call_method<"getElementById", jni::ref<org::w3c::dom::Element>>(p1); }
	jni::ref<java::lang::String> getInputEncoding() { return call_method<"getInputEncoding", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getXmlEncoding() { return call_method<"getXmlEncoding", jni::ref<java::lang::String>>(); }
	jboolean getXmlStandalone() { return call_method<"getXmlStandalone", jboolean>(); }
	void setXmlStandalone(jboolean p1) { return call_method<"setXmlStandalone", void>(p1); }
	jni::ref<java::lang::String> getXmlVersion() { return call_method<"getXmlVersion", jni::ref<java::lang::String>>(); }
	void setXmlVersion(jni::ref<java::lang::String> p1) { return call_method<"setXmlVersion", void>(p1); }
	jboolean getStrictErrorChecking() { return call_method<"getStrictErrorChecking", jboolean>(); }
	void setStrictErrorChecking(jboolean p1) { return call_method<"setStrictErrorChecking", void>(p1); }
	jni::ref<java::lang::String> getDocumentURI() { return call_method<"getDocumentURI", jni::ref<java::lang::String>>(); }
	void setDocumentURI(jni::ref<java::lang::String> p1) { return call_method<"setDocumentURI", void>(p1); }
	jni::ref<org::w3c::dom::Node> adoptNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"adoptNode", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::DOMConfiguration> getDomConfig() { return call_method<"getDomConfig", jni::ref<org::w3c::dom::DOMConfiguration>>(); }
	void normalizeDocument() { return call_method<"normalizeDocument", void>(); }
	jni::ref<org::w3c::dom::Node> renameNode(jni::ref<org::w3c::dom::Node> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3) { return call_method<"renameNode", jni::ref<org::w3c::dom::Node>>(p1, p2, p3); }

protected:

	Document(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_W3C_DOM_DOCUMENT
