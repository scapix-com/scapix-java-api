// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators_InternalAxisIteratorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class SAXImpl_NamespaceWildcardIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl_NamespaceWildcardIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceWildcardIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_InternalAxisIteratorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl_NamespaceWildcardIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/SAXImpl$NamespaceWildcardIterator",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_InternalAxisIteratorBase>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl_NamespaceWildcardIterator> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SAXImpl> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jint next() { return call_method<"next", jint>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> cloneIterator() { return call_method<"cloneIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jboolean isReverse() { return call_method<"isReverse", jboolean>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }

protected:

	SAXImpl_NamespaceWildcardIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SAXIMPL_NAMESPACEWILDCARDITERATOR