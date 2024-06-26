// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XNodeSet.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::objects { class XNull; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XNull>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/objects/XNull";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XNodeSet>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::objects::XNull : public jni::object_base<"com/sun/org/apache/xpath/internal/objects/XNull",
	com::sun::org::apache::xpath::internal::objects::XNodeSet>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::objects::XNull> new_object() { return base_::new_object(); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getTypeString() { return call_method<"getTypeString", jni::ref<java::lang::String>>(); }
	jdouble num() { return call_method<"num", jdouble>(); }
	jboolean bool_() { return call_method<"bool", jboolean>(); }
	jni::ref<java::lang::String> str() { return call_method<"str", jni::ref<java::lang::String>>(); }
	jint rtf(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"rtf", jint>(p1); }
	jboolean equals(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	XNull(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNULL
