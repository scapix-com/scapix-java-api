// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers_DescendantTraverser.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBaseTraversers_DescendantFromRootTraverser; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantFromRootTraverser>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantFromRootTraverser";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantTraverser>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantFromRootTraverser : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers$DescendantFromRootTraverser",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers_DescendantTraverser>
{
public:

	jint first(jint p1) { return call_method<"first", jint>(p1); }
	jint first(jint p1, jint p2) { return call_method<"first", jint>(p1, p2); }

protected:

	DTMDefaultBaseTraversers_DescendantFromRootTraverser(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_DESCENDANTFROMROOTTRAVERSER
