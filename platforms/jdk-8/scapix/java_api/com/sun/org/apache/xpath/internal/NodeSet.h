// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/NodeList.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeIterator.h>
#include <scapix/java_api/java/lang/Cloneable.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/ContextNodeList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class NodeSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::NodeSet>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/NodeSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::NodeList, scapix::java_api::org::w3c::dom::traversal::NodeIterator, scapix::java_api::java::lang::Cloneable, scapix::java_api::com::sun::org::apache::xpath::internal::axes::ContextNodeList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeFilter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::NodeSet : public jni::object_base<"com/sun/org/apache/xpath/internal/NodeSet",
	java::lang::Object,
	org::w3c::dom::NodeList,
	org::w3c::dom::traversal::NodeIterator,
	java::lang::Cloneable,
	com::sun::org::apache::xpath::internal::axes::ContextNodeList>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object(jni::ref<org::w3c::dom::NodeList> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object(jni::ref<com::sun::org::apache::xpath::internal::NodeSet> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object(jni::ref<org::w3c::dom::traversal::NodeIterator> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::NodeSet> new_object(jni::ref<org::w3c::dom::Node> p1) { return base_::new_object(p1); }
	jni::ref<org::w3c::dom::Node> getRoot() { return call_method<"getRoot", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::traversal::NodeIterator> cloneWithReset() { return call_method<"cloneWithReset", jni::ref<org::w3c::dom::traversal::NodeIterator>>(); }
	void reset() { return call_method<"reset", void>(); }
	jint getWhatToShow() { return call_method<"getWhatToShow", jint>(); }
	jni::ref<org::w3c::dom::traversal::NodeFilter> getFilter() { return call_method<"getFilter", jni::ref<org::w3c::dom::traversal::NodeFilter>>(); }
	jboolean getExpandEntityReferences() { return call_method<"getExpandEntityReferences", jboolean>(); }
	jni::ref<org::w3c::dom::Node> nextNode() { return call_method<"nextNode", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> previousNode() { return call_method<"previousNode", jni::ref<org::w3c::dom::Node>>(); }
	void detach() { return call_method<"detach", void>(); }
	jboolean isFresh() { return call_method<"isFresh", jboolean>(); }
	void runTo(jint p1) { return call_method<"runTo", void>(p1); }
	jni::ref<org::w3c::dom::Node> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::Node>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	void addNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"addNode", void>(p1); }
	void insertNode(jni::ref<org::w3c::dom::Node> p1, jint p2) { return call_method<"insertNode", void>(p1, p2); }
	void removeNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"removeNode", void>(p1); }
	void addNodes(jni::ref<org::w3c::dom::NodeList> p1) { return call_method<"addNodes", void>(p1); }
	void addNodes(jni::ref<com::sun::org::apache::xpath::internal::NodeSet> p1) { return call_method<"addNodes", void>(p1); }
	void addNodes(jni::ref<org::w3c::dom::traversal::NodeIterator> p1) { return call_method<"addNodes", void>(p1); }
	void addNodesInDocOrder(jni::ref<org::w3c::dom::NodeList> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2) { return call_method<"addNodesInDocOrder", void>(p1, p2); }
	void addNodesInDocOrder(jni::ref<org::w3c::dom::traversal::NodeIterator> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2) { return call_method<"addNodesInDocOrder", void>(p1, p2); }
	jint addNodeInDocOrder(jni::ref<org::w3c::dom::Node> p1, jboolean p2, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p3) { return call_method<"addNodeInDocOrder", jint>(p1, p2, p3); }
	jint addNodeInDocOrder(jni::ref<org::w3c::dom::Node> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p2) { return call_method<"addNodeInDocOrder", jint>(p1, p2); }
	jint getCurrentPos() { return call_method<"getCurrentPos", jint>(); }
	void setCurrentPos(jint p1) { return call_method<"setCurrentPos", void>(p1); }
	jni::ref<org::w3c::dom::Node> getCurrentNode() { return call_method<"getCurrentNode", jni::ref<org::w3c::dom::Node>>(); }
	jboolean getShouldCacheNodes() { return call_method<"getShouldCacheNodes", jboolean>(); }
	void setShouldCacheNodes(jboolean p1) { return call_method<"setShouldCacheNodes", void>(p1); }
	jint getLast() { return call_method<"getLast", jint>(); }
	void setLast(jint p1) { return call_method<"setLast", void>(p1); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }
	jint size() { return call_method<"size", jint>(); }
	void addElement(jni::ref<org::w3c::dom::Node> p1) { return call_method<"addElement", void>(p1); }
	void push(jni::ref<org::w3c::dom::Node> p1) { return call_method<"push", void>(p1); }
	jni::ref<org::w3c::dom::Node> pop() { return call_method<"pop", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> popAndTop() { return call_method<"popAndTop", jni::ref<org::w3c::dom::Node>>(); }
	void popQuick() { return call_method<"popQuick", void>(); }
	jni::ref<org::w3c::dom::Node> peepOrNull() { return call_method<"peepOrNull", jni::ref<org::w3c::dom::Node>>(); }
	void pushPair(jni::ref<org::w3c::dom::Node> p1, jni::ref<org::w3c::dom::Node> p2) { return call_method<"pushPair", void>(p1, p2); }
	void popPair() { return call_method<"popPair", void>(); }
	void setTail(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setTail", void>(p1); }
	void setTailSub1(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setTailSub1", void>(p1); }
	jni::ref<org::w3c::dom::Node> peepTail() { return call_method<"peepTail", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::Node> peepTailSub1() { return call_method<"peepTailSub1", jni::ref<org::w3c::dom::Node>>(); }
	void insertElementAt(jni::ref<org::w3c::dom::Node> p1, jint p2) { return call_method<"insertElementAt", void>(p1, p2); }
	void appendNodes(jni::ref<com::sun::org::apache::xpath::internal::NodeSet> p1) { return call_method<"appendNodes", void>(p1); }
	void removeAllElements() { return call_method<"removeAllElements", void>(); }
	jboolean removeElement(jni::ref<org::w3c::dom::Node> p1) { return call_method<"removeElement", jboolean>(p1); }
	void removeElementAt(jint p1) { return call_method<"removeElementAt", void>(p1); }
	void setElementAt(jni::ref<org::w3c::dom::Node> p1, jint p2) { return call_method<"setElementAt", void>(p1, p2); }
	jni::ref<org::w3c::dom::Node> elementAt(jint p1) { return call_method<"elementAt", jni::ref<org::w3c::dom::Node>>(p1); }
	jboolean contains(jni::ref<org::w3c::dom::Node> p1) { return call_method<"contains", jboolean>(p1); }
	jint indexOf(jni::ref<org::w3c::dom::Node> p1, jint p2) { return call_method<"indexOf", jint>(p1, p2); }
	jint indexOf(jni::ref<org::w3c::dom::Node> p1) { return call_method<"indexOf", jint>(p1); }

protected:

	NodeSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_NODESET