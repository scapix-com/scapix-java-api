// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XBoolean.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::objects { class XBooleanStatic; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XBooleanStatic>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/objects/XBooleanStatic";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XBoolean>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::objects::XBooleanStatic : public jni::object_base<"com/sun/org/apache/xpath/internal/objects/XBooleanStatic",
	com::sun::org::apache::xpath::internal::objects::XBoolean>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::objects::XBooleanStatic> new_object(jboolean p1) { return base_::new_object(p1); }
	jboolean equals(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	XBooleanStatic(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XBOOLEANSTATIC
