// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class AnyNodeCounter_DefaultAnyNodeCounter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter_DefaultAnyNodeCounter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter$DefaultAnyNodeCounter";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/Translet.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter_DefaultAnyNodeCounter : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/AnyNodeCounter$DefaultAnyNodeCounter",
	com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::AnyNodeCounter_DefaultAnyNodeCounter> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::Translet> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::DOM> p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<java::lang::String> getCounter() { return call_method<"getCounter", jni::ref<java::lang::String>>(); }

protected:

	AnyNodeCounter_DefaultAnyNodeCounter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_ANYNODECOUNTER_DEFAULTANYNODECOUNTER
