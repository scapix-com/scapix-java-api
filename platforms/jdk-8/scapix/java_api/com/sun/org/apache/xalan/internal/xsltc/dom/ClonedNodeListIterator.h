// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class ClonedNodeListIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::ClonedNodeListIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/ClonedNodeListIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/CachedNodeListIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::ClonedNodeListIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/ClonedNodeListIterator",
	com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::ClonedNodeListIterator> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::CachedNodeListIterator> p1) { return base_::new_object(p1); }
	void setRestartable(jboolean p1) { return call_method<"setRestartable", void>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jint next() { return call_method<"next", jint>(); }
	jint getPosition() { return call_method<"getPosition", jint>(); }
	jint getNodeByPosition(jint p1) { return call_method<"getNodeByPosition", jint>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> cloneIterator() { return call_method<"cloneIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }

protected:

	ClonedNodeListIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_CLONEDNODELISTITERATOR
