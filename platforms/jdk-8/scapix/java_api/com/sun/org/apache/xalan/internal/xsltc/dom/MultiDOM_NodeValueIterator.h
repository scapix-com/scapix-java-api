// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class MultiDOM_NodeValueIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM_NodeValueIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$NodeValueIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM_NodeValueIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/MultiDOM$NodeValueIterator",
	com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM_NodeValueIterator> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM> p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p2, jint p3, jni::ref<java::lang::String> p4, jboolean p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jboolean isReverse() { return call_method<"isReverse", jboolean>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> cloneIterator() { return call_method<"cloneIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	void setRestartable(jboolean p1) { return call_method<"setRestartable", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jint next() { return call_method<"next", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }

protected:

	MultiDOM_NodeValueIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIDOM_NODEVALUEITERATOR
