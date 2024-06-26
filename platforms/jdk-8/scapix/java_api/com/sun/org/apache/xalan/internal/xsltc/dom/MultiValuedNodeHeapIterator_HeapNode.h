// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class MultiValuedNodeHeapIterator_HeapNode; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator$HeapNode",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator> p1) { return base_::new_object(p1); }
	jint step() { return call_method<"step", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> cloneHeapNode() { return call_method<"cloneHeapNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }
	jboolean isLessThan(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> p1) { return call_method<"isLessThan", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }

protected:

	MultiValuedNodeHeapIterator_HeapNode(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIVALUEDNODEHEAPITERATOR_HEAPNODE
