// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class UnionIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/UnionIterator",
	com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator> addIterator(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p1) { return call_method<"addIterator", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::UnionIterator>>(p1); }

protected:

	UnionIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_UNIONITERATOR