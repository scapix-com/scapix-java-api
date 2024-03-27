// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators_InternalAxisIteratorBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref { class DTMDefaultBaseIterators_TypedAttributeIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_TypedAttributeIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedAttributeIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_InternalAxisIteratorBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_TypedAttributeIterator : public jni::object_base<"com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$TypedAttributeIterator",
	com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_InternalAxisIteratorBase>
{
public:

	static jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators_TypedAttributeIterator> new_object(jni::ref<com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators> p1, jint p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator> setStartNode(jint p1) { return call_method<"setStartNode", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMAxisIterator>>(p1); }
	jint next() { return call_method<"next", jint>(); }

protected:

	DTMDefaultBaseIterators_TypedAttributeIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XML_INTERNAL_DTM_REF_DTMDEFAULTBASEITERATORS_TYPEDATTRIBUTEITERATOR
