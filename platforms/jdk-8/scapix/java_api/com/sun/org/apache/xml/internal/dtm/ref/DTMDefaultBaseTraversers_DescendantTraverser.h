// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers_IndexedDTMAxisTraverser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBaseTraversers_DescendantTraverser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantTraverser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_IndexedDTMAxisTraverser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantTraverser : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantTraverser",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_IndexedDTMAxisTraverser>
{
public:

	jint first(jint p1, jint p2) { return call_method<"first", jint>(p1, p2); }
	jint next(jint p1, jint p2) { return call_method<"next", jint>(p1, p2); }
	jint next(jint p1, jint p2, jint p3) { return call_method<"next", jint>(p1, p2, p3); }

protected:

	DTMDefaultBaseTraversers_DescendantTraverser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTTRAVERSER
