// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom { class DOMWSFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xml::internal::dtm::DTMWSFilter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/runtime/AbstractTranslet.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/dom/DOMWSFilter",
	java::lang::Object,
	com::sun::org::apache::xml::internal::dtm::DTMWSFilter>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::dom::DOMWSFilter> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet> p1) { return base_::new_object(p1); }
	jshort getShouldStripSpace(jint p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p2) { return call_method<"getShouldStripSpace", jshort>(p1, p2); }

protected:

	DOMWSFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_DOM_DOMWSFILTER