// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBaseTraversers_IndexedDTMAxisTraverser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_IndexedDTMAxisTraverser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_IndexedDTMAxisTraverser : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$IndexedDTMAxisTraverser",
	com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser>
{
public:


protected:

	DTMDefaultBaseTraversers_IndexedDTMAxisTraverser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_INDEXEDDTMAXISTRAVERSER
