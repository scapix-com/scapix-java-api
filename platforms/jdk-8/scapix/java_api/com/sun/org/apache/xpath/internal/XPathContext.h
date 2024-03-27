// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class XPathContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::XPathContext>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/XPathContext";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::DTMManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/SourceTreeManager.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/VariableStack.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Stack.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>
#include <scapix/java_api/javax/xml/transform/URIResolver.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/xml/sax/XMLReader.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext_XPathExpressionContext.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::XPathContext : public jni::object_base<"com/sun/org/apache/xpath/internal/XPathContext",
	com::sun::org::apache::xml::internal::dtm::DTMManager>
{
public:

	using XPathExpressionContext = XPathContext_XPathExpressionContext;

	jni::ref<org::xml::sax::XMLReader> m_primaryReader() { return get_field<"m_primaryReader", jni::ref<org::xml::sax::XMLReader>>(); }
	void m_primaryReader(jni::ref<org::xml::sax::XMLReader> v) { set_field<"m_primaryReader", jni::ref<org::xml::sax::XMLReader>>(v); }
	static jint RECURSIONLIMIT() { return get_static_field<"RECURSIONLIMIT", jint>(); }

	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> getDTMManager() { return call_method<"getDTMManager", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(); }
	void setSecureProcessing(jboolean p1) { return call_method<"setSecureProcessing", void>(p1); }
	jboolean isSecureProcessing() { return call_method<"isSecureProcessing", jboolean>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> getDTM(jni::ref<javax::xml::transform::Source> p1, jboolean p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p3, jboolean p4, jboolean p5) { return call_method<"getDTM", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> getDTM(jint p1) { return call_method<"getDTM", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(p1); }
	jint getDTMHandleFromNode(jni::ref<org::w3c::dom::Node> p1) { return call_method<"getDTMHandleFromNode", jint>(p1); }
	jint getDTMIdentity(jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p1) { return call_method<"getDTMIdentity", jint>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> createDocumentFragment() { return call_method<"createDocumentFragment", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(); }
	jboolean release(jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p1, jboolean p2) { return call_method<"release", jboolean>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> createDTMIterator(jni::ref<java::lang::Object> p1, jint p2) { return call_method<"createDTMIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> createDTMIterator(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p2) { return call_method<"createDTMIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> createDTMIterator(jint p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMFilter> p2, jboolean p3) { return call_method<"createDTMIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> createDTMIterator(jint p1) { return call_method<"createDTMIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::XPathContext> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xpath::internal::XPathContext> new_object(jboolean p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::XPathContext> new_object(jni::ref<java::lang::Object> p1) { return base_::new_object(p1); }
	void reset() { return call_method<"reset", void>(); }
	void setSAXLocator(jni::ref<javax::xml::transform::SourceLocator> p1) { return call_method<"setSAXLocator", void>(p1); }
	void pushSAXLocator(jni::ref<javax::xml::transform::SourceLocator> p1) { return call_method<"pushSAXLocator", void>(p1); }
	void pushSAXLocatorNull() { return call_method<"pushSAXLocatorNull", void>(); }
	void popSAXLocator() { return call_method<"popSAXLocator", void>(); }
	jni::ref<javax::xml::transform::SourceLocator> getSAXLocator() { return call_method<"getSAXLocator", jni::ref<javax::xml::transform::SourceLocator>>(); }
	jni::ref<java::lang::Object> getOwnerObject() { return call_method<"getOwnerObject", jni::ref<java::lang::Object>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::VariableStack> getVarStack() { return call_method<"getVarStack", jni::ref<com::sun::org::apache::xpath::internal::VariableStack>>(); }
	void setVarStack(jni::ref<com::sun::org::apache::xpath::internal::VariableStack> p1) { return call_method<"setVarStack", void>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::SourceTreeManager> getSourceTreeManager() { return call_method<"getSourceTreeManager", jni::ref<com::sun::org::apache::xpath::internal::SourceTreeManager>>(); }
	void setSourceTreeManager(jni::ref<com::sun::org::apache::xpath::internal::SourceTreeManager> p1) { return call_method<"setSourceTreeManager", void>(p1); }
	jni::ref<javax::xml::transform::ErrorListener> getErrorListener() { return call_method<"getErrorListener", jni::ref<javax::xml::transform::ErrorListener>>(); }
	void setErrorListener(jni::ref<javax::xml::transform::ErrorListener> p1) { return call_method<"setErrorListener", void>(p1); }
	jni::ref<javax::xml::transform::URIResolver> getURIResolver() { return call_method<"getURIResolver", jni::ref<javax::xml::transform::URIResolver>>(); }
	void setURIResolver(jni::ref<javax::xml::transform::URIResolver> p1) { return call_method<"setURIResolver", void>(p1); }
	jni::ref<org::xml::sax::XMLReader> getPrimaryReader() { return call_method<"getPrimaryReader", jni::ref<org::xml::sax::XMLReader>>(); }
	void setPrimaryReader(jni::ref<org::xml::sax::XMLReader> p1) { return call_method<"setPrimaryReader", void>(p1); }
	jni::ref<java::util::Stack> getContextNodeListsStack() { return call_method<"getContextNodeListsStack", jni::ref<java::util::Stack>>(); }
	void setContextNodeListsStack(jni::ref<java::util::Stack> p1) { return call_method<"setContextNodeListsStack", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> getContextNodeList() { return call_method<"getContextNodeList", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(); }
	void pushContextNodeList(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> p1) { return call_method<"pushContextNodeList", void>(p1); }
	void popContextNodeList() { return call_method<"popContextNodeList", void>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::IntStack> getCurrentNodeStack() { return call_method<"getCurrentNodeStack", jni::ref<com::sun::org::apache::xml::internal::utils::IntStack>>(); }
	void setCurrentNodeStack(jni::ref<com::sun::org::apache::xml::internal::utils::IntStack> p1) { return call_method<"setCurrentNodeStack", void>(p1); }
	jint getCurrentNode() { return call_method<"getCurrentNode", jint>(); }
	void pushCurrentNodeAndExpression(jint p1, jint p2) { return call_method<"pushCurrentNodeAndExpression", void>(p1, p2); }
	void popCurrentNodeAndExpression() { return call_method<"popCurrentNodeAndExpression", void>(); }
	void pushExpressionState(jint p1, jint p2, jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p3) { return call_method<"pushExpressionState", void>(p1, p2, p3); }
	void popExpressionState() { return call_method<"popExpressionState", void>(); }
	void pushCurrentNode(jint p1) { return call_method<"pushCurrentNode", void>(p1); }
	void popCurrentNode() { return call_method<"popCurrentNode", void>(); }
	void pushPredicateRoot(jint p1) { return call_method<"pushPredicateRoot", void>(p1); }
	void popPredicateRoot() { return call_method<"popPredicateRoot", void>(); }
	jint getPredicateRoot() { return call_method<"getPredicateRoot", jint>(); }
	void pushIteratorRoot(jint p1) { return call_method<"pushIteratorRoot", void>(p1); }
	void popIteratorRoot() { return call_method<"popIteratorRoot", void>(); }
	jint getIteratorRoot() { return call_method<"getIteratorRoot", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::IntStack> getCurrentExpressionNodeStack() { return call_method<"getCurrentExpressionNodeStack", jni::ref<com::sun::org::apache::xml::internal::utils::IntStack>>(); }
	void setCurrentExpressionNodeStack(jni::ref<com::sun::org::apache::xml::internal::utils::IntStack> p1) { return call_method<"setCurrentExpressionNodeStack", void>(p1); }
	jint getPredicatePos() { return call_method<"getPredicatePos", jint>(); }
	void pushPredicatePos(jint p1) { return call_method<"pushPredicatePos", void>(p1); }
	void popPredicatePos() { return call_method<"popPredicatePos", void>(); }
	jint getCurrentExpressionNode() { return call_method<"getCurrentExpressionNode", jint>(); }
	void pushCurrentExpressionNode(jint p1) { return call_method<"pushCurrentExpressionNode", void>(p1); }
	void popCurrentExpressionNode() { return call_method<"popCurrentExpressionNode", void>(); }
	jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver>>(); }
	void setNamespaceContext(jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p1) { return call_method<"setNamespaceContext", void>(p1); }
	void pushNamespaceContext(jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p1) { return call_method<"pushNamespaceContext", void>(p1); }
	void pushNamespaceContextNull() { return call_method<"pushNamespaceContextNull", void>(); }
	void popNamespaceContext() { return call_method<"popNamespaceContext", void>(); }
	jni::ref<java::util::Stack> getAxesIteratorStackStacks() { return call_method<"getAxesIteratorStackStacks", jni::ref<java::util::Stack>>(); }
	void setAxesIteratorStackStacks(jni::ref<java::util::Stack> p1) { return call_method<"setAxesIteratorStackStacks", void>(p1); }
	void pushSubContextList(jni::ref<com::sun::org::apache::xpath::internal::axes::SubContextList> p1) { return call_method<"pushSubContextList", void>(p1); }
	void popSubContextList() { return call_method<"popSubContextList", void>(); }
	jni::ref<com::sun::org::apache::xpath::internal::axes::SubContextList> getSubContextList() { return call_method<"getSubContextList", jni::ref<com::sun::org::apache::xpath::internal::axes::SubContextList>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::axes::SubContextList> getCurrentNodeList() { return call_method<"getCurrentNodeList", jni::ref<com::sun::org::apache::xpath::internal::axes::SubContextList>>(); }
	jint getContextNode() { return call_method<"getContextNode", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> getContextNodes() { return call_method<"getContextNodes", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::extensions::ExpressionContext> getExpressionContext() { return call_method<"getExpressionContext", jni::ref<com::sun::org::apache::xalan::internal::extensions::ExpressionContext>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> getGlobalRTFDTM() { return call_method<"getGlobalRTFDTM", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> getRTFDTM() { return call_method<"getRTFDTM", jni::ref<com::sun::org::apache::xml::internal::dtm::DTM>>(); }
	void pushRTFContext() { return call_method<"pushRTFContext", void>(); }
	void popRTFContext() { return call_method<"popRTFContext", void>(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag> getDTMXRTreeFrag(jint p1) { return call_method<"getDTMXRTreeFrag", jni::ref<com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag>>(p1); }

protected:

	XPathContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT
