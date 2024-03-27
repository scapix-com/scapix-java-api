// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator_HeapNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class UnionIterator_LookAheadIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator_LookAheadIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator$LookAheadIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator_LookAheadIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator$LookAheadIterator",
	com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>
{
public:

	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> iterator() { return get_field<"iterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	void iterator(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> v) { set_field<"iterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(v); }

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator_LookAheadIterator> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator> p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p2) { return base_::new_object(p1, p2); }
	jint step() { return call_method<"step", jint>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> cloneHeapNode() { return call_method<"cloneHeapNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }
	jboolean isLessThan(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> p1) { return call_method<"isLessThan", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator_HeapNode>>(); }

protected:

	UnionIterator_LookAheadIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_LOOKAHEADITERATOR