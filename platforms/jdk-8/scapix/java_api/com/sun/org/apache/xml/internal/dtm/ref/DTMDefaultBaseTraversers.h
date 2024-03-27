// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBaseTraversers; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisTraverser.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <scapix/java_api/javax/xml/transform/Source.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1, jni::ref<javax::xml::transform::Source> p2, jint p3, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p4, jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> p5, jboolean p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p1, jni::ref<javax::xml::transform::Source> p2, jint p3, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMWSFilter> p4, jni::ref<com::sun::org::apache::xml::internal::utils::XMLStringFactory> p5, jboolean p6, jint p7, jboolean p8, jboolean p9) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7, p8, p9); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser> getAxisTraverser(jint p1) { return call_method<"getAxisTraverser", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser>>(p1); }

protected:

	DTMDefaultBaseTraversers(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASETRAVERSERS