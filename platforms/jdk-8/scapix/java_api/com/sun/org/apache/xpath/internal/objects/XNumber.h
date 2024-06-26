// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::objects { class XNumber; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XNumber>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/objects/XNumber";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::objects::XObject>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/java/lang/Number.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::objects::XNumber : public jni::object_base<"com/sun/org/apache/xpath/internal/objects/XNumber",
	com::sun::org::apache::xpath::internal::objects::XObject>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::objects::XNumber> new_object(jdouble p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::objects::XNumber> new_object(jni::ref<java::lang::Number> p1) { return base_::new_object(p1); }
	jint getType() { return call_method<"getType", jint>(); }
	jni::ref<java::lang::String> getTypeString() { return call_method<"getTypeString", jni::ref<java::lang::String>>(); }
	jdouble num() { return call_method<"num", jdouble>(); }
	jdouble num(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"num", jdouble>(p1); }
	jboolean bool_() { return call_method<"bool", jboolean>(); }
	jni::ref<java::lang::String> str() { return call_method<"str", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> object() { return call_method<"object", jni::ref<java::lang::Object>>(); }
	jboolean equals(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean isStableNumber() { return call_method<"isStableNumber", jboolean>(); }
	void callVisitors(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p2) { return call_method<"callVisitors", void>(p1, p2); }

protected:

	XNumber(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OBJECTS_XNUMBER
