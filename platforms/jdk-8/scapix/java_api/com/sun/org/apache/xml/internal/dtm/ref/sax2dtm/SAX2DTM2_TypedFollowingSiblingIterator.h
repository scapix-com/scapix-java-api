// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2_FollowingSiblingIterator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm { class SAX2DTM2_TypedFollowingSiblingIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2_TypedFollowingSiblingIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingSiblingIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2_FollowingSiblingIterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2_TypedFollowingSiblingIterator : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM2$TypedFollowingSiblingIterator",
	com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2_FollowingSiblingIterator>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2_TypedFollowingSiblingIterator> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2> p1, jint p2) { return base_::new_object(p1, p2); }
	jint next() { return call_method<"next", jint>(); }

protected:

	SAX2DTM2_TypedFollowingSiblingIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_SAX2DTM_SAX2DTM2_TYPEDFOLLOWINGSIBLINGITERATOR
