// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class SingletonIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/SingletonIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/SingletonIterator",
	com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::SingletonIterator> new_object(jint p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> reset() { return call_method<"reset", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jint next() { return call_method<"next", jint>(); }
	void setMark() { return call_method<"setMark", void>(); }
	void gotoMark() { return call_method<"gotoMark", void>(); }

protected:

	SingletonIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_SINGLETONITERATOR
