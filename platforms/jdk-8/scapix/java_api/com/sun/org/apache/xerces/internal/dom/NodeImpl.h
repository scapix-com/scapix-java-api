// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/events/EventTarget.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class NodeImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::NodeImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/NodeImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::Node, scapix::java_api::org::w3c::dom::NodeList, scapix::java_api::org::w3c::dom::events::EventTarget, scapix::java_api::java::lang::Cloneable, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Document.h>
#include <scapix/java_api/org/w3c/dom/NamedNodeMap.h>
#include <scapix/java_api/org/w3c/dom/UserDataHandler.h>
#include <scapix/java_api/org/w3c/dom/events/Event.h>
#include <scapix/java_api/org/w3c/dom/events/EventListener.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::NodeImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/NodeImpl",
	java::lang::Object,
	org::w3c::dom::Node,
	org::w3c::dom::NodeList,
	org::w3c::dom::events::EventTarget,
	java::lang::Cloneable,
	java::io::Serializable>
{
public:

	static jshort TREE_POSITION_PRECEDING() { return get_static_field<"TREE_POSITION_PRECEDING", jshort>(); }
	static jshort TREE_POSITION_FOLLOWING() { return get_static_field<"TREE_POSITION_FOLLOWING", jshort>(); }
	static jshort TREE_POSITION_ANCESTOR() { return get_static_field<"TREE_POSITION_ANCESTOR", jshort>(); }
	static jshort TREE_POSITION_DESCENDANT() { return get_static_field<"TREE_POSITION_DESCENDANT", jshort>(); }
	static jshort TREE_POSITION_EQUIVALENT() { return get_static_field<"TREE_POSITION_EQUIVALENT", jshort>(); }
	static jshort TREE_POSITION_SAME_NODE() { return get_static_field<"TREE_POSITION_SAME_NODE", jshort>(); }
	static jshort TREE_POSITION_DISCONNECTED() { return get_static_field<"TREE_POSITION_DISCONNECTED", jshort>(); }
	static jshort ELEMENT_DEFINITION_NODE() { return get_static_field<"ELEMENT_DEFINITION_NODE", jshort>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::dom::NodeImpl> new_object() { return base_::new_object(); }
	jshort getNodeType() { return call_method<"getNodeType", jshort>(); }
	jni::ref<java::lang::String> getNodeName() { return call_method<"getNodeName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getNodeValue() { return call_method<"getNodeValue", jni::ref<java::lang::String>>(); }
	void setNodeValue(jni::ref<java::lang::String> p1) { return call_method<"setNodeValue", void>(p1); }
	jni::ref<org::w3c::dom::Node> appendChild(jni::ref<org::w3c::dom::Node> p1) { return call_method<"appendChild", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> cloneNode(jboolean p1) { return call_method<"cloneNode", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Document> getOwnerDocument() { return call_method<"getOwnerDocument", jni::ref<org::w3c::dom::Document>>(); }
	jni::ref<org::w3c::dom::Node> getParentNode() { return call_method<"getParentNode", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> getNextSibling() { return call_method<"getNextSibling", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> getPreviousSibling() { return call_method<"getPreviousSibling", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::NamedNodeMap> getAttributes() { return call_method<"getAttributes", jni::ref<org::w3c::dom::NamedNodeMap>>(); }
	jboolean hasAttributes() { return call_method<"hasAttributes", jboolean>(); }
	jboolean hasChildNodes() { return call_method<"hasChildNodes", jboolean>(); }
	jni::ref<org::w3c::dom::NodeList> getChildNodes() { return call_method<"getChildNodes", jni::ref<org::w3c::dom::NodeList>>(); }
	jni::ref<org::w3c::dom::Node> getFirstChild() { return call_method<"getFirstChild", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> getLastChild() { return call_method<"getLastChild", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> insertBefore(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"insertBefore", jni::ref<org::w3c::dom::Node>>(p1, p2); }
	jni::ref<org::w3c::dom::Node> removeChild(jni::ref<org::w3c::dom::Node> p1) { return call_method<"removeChild", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> replaceChild(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"replaceChild", jni::ref<org::w3c::dom::Node>>(p1, p2); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<org::w3c::dom::Node> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::Node>>(p1); }
	void normalize() { return call_method<"normalize", void>(); }
	jboolean isSupported(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"isSupported", jboolean>(p1, p2); }
	jni::ref<java::lang::String> getNamespaceURI() { return call_method<"getNamespaceURI", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getPrefix() { return call_method<"getPrefix", jni::ref<java::lang::String>>(); }
	void setPrefix(jni::ref<java::lang::String> p1) { return call_method<"setPrefix", void>(p1); }
	jni::ref<java::lang::String> getLocalName() { return call_method<"getLocalName", jni::ref<java::lang::String>>(); }
	void addEventListener(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::events::EventListener> p2, jboolean p3) { return call_method<"addEventListener", void>(p1, p2, p3); }
	void removeEventListener(jni::ref<java::lang::String> p1, jni::ref<org::w3c::dom::events::EventListener> p2, jboolean p3) { return call_method<"removeEventListener", void>(p1, p2, p3); }
	jboolean dispatchEvent(jni::ref<org::w3c::dom::events::Event> p1) { return call_method<"dispatchEvent", jboolean>(p1); }
	jni::ref<java::lang::String> getBaseURI() { return call_method<"getBaseURI", jni::ref<java::lang::String>>(); }
	jshort compareTreePosition(jni::ref<org::w3c::dom::Node> p1) { return call_method<"compareTreePosition", jshort>(p1); }
	jshort compareDocumentPosition(jni::ref<org::w3c::dom::Node> p1) { return call_method<"compareDocumentPosition", jshort>(p1); }
	jni::ref<java::lang::String> getTextContent() { return call_method<"getTextContent", jni::ref<java::lang::String>>(); }
	void setTextContent(jni::ref<java::lang::String> p1) { return call_method<"setTextContent", void>(p1); }
	jboolean isSameNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"isSameNode", jboolean>(p1); }
	jboolean isDefaultNamespace(jni::ref<java::lang::String> p1) { return call_method<"isDefaultNamespace", jboolean>(p1); }
	jni::ref<java::lang::String> lookupPrefix(jni::ref<java::lang::String> p1) { return call_method<"lookupPrefix", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> lookupNamespaceURI(jni::ref<java::lang::String> p1) { return call_method<"lookupNamespaceURI", jni::ref<java::lang::String>>(p1); }
	jboolean isEqualNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"isEqualNode", jboolean>(p1); }
	jni::ref<java::lang::Object> getFeature(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getFeature", jni::ref<java::lang::Object>>(p1, p2); }
	jni::ref<java::lang::Object> setUserData(jni::ref<java::lang::String> p1, jni::ref<java::lang::Object> p2, jni::ref<org::w3c::dom::UserDataHandler> p3) { return call_method<"setUserData", jni::ref<java::lang::Object>>(p1, p2, p3); }
	jni::ref<java::lang::Object> getUserData(jni::ref<java::lang::String> p1) { return call_method<"getUserData", jni::ref<java::lang::Object>>(p1); }
	void setReadOnly(jboolean p1, jboolean p2) { return call_method<"setReadOnly", void>(p1, p2); }
	jboolean getReadOnly() { return call_method<"getReadOnly", jboolean>(); }
	void setUserData(jni::ref<java::lang::Object> p1) { return call_method<"setUserData", void>(p1); }
	jni::ref<java::lang::Object> getUserData() { return call_method<"getUserData", jni::ref<java::lang::Object>>(); }
	void needsSyncChildren(jboolean p1) { return call_method<"needsSyncChildren", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NodeImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_NODEIMPL
