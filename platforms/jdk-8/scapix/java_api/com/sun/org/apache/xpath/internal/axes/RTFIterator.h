// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/NodeSetDTM.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::axes { class RTFIterator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::axes::RTFIterator>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/axes/RTFIterator";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::NodeSetDTM>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::axes::RTFIterator : public jni::object_base<"com/sun/org/apache/xpath/internal/axes/RTFIterator",
	com::sun::org::apache::xpath::internal::NodeSetDTM>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::axes::RTFIterator> new_object(jint p1, jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> p2) { return base_::new_object(p1, p2); }

protected:

	RTFIterator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_AXES_RTFITERATOR
