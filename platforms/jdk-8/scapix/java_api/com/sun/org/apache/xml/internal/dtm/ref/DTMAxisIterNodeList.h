// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMNodeListBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMAxisIterNodeList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIterNodeList>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIterNodeList";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIterNodeList : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIterNodeList",
	com::sun::org::apache::xml::internal::dtm::ref::DTMNodeListBase>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIterNodeList> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> getDTMAxisIterator() { return call_method<"getDTMAxisIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(); }
	jni::ref<org::w3c::dom::Node> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::Node>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }

protected:

	DTMAxisIterNodeList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMAXISITERNODELIST
