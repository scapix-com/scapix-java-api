// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/NodeCounter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class MultipleNodeCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/MultipleNodeCounter",
	com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::Translet> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::MultipleNodeCounter> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::Translet> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter>>(p1); }
	jni::ref<java::lang::String> getCounter() { return call_method<"getCounter", jni::ref<java::lang::String>>(); }
	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter> getDefaultNodeCounter(jni::ref<com::sun::org::apache::xalan::internal::xsltc::Translet> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p3) { return call_static_method<"getDefaultNodeCounter", jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::NodeCounter>>(p1, p2, p3); }

protected:

	MultipleNodeCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_MULTIPLENODECOUNTER
