// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator_HeapNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class KeyIndex_KeyIndexIterator_KeyIndexHeapNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex_KeyIndexIterator_KeyIndexHeapNode>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator$KeyIndexHeapNode";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex_KeyIndexIterator_KeyIndexHeapNode : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/KeyIndex$KeyIndexIterator$KeyIndexHeapNode",
	com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>
{
public:

	jint step() { return call_method<"step", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> cloneHeapNode() { return call_method<"cloneHeapNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }
	jboolean isLessThan(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> p1) { return call_method<"isLessThan", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }

protected:

	KeyIndex_KeyIndexIterator_KeyIndexHeapNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_KEYINDEX_KEYINDEXITERATOR_KEYINDEXHEAPNODE