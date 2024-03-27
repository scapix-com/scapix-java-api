// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class Arg; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::Arg>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/Arg";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/QName.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::Arg : public jni::object_base<"com/sun/org/apache/xpath/internal/Arg",
	java::lang::Object>
{
public:

	jni::ref<com::sun::org::apache::xml::internal::utils::QName> getQName() { return call_method<"getQName", jni::ref<com::sun::org::apache::xml::internal::utils::QName>>(); }
	void setQName(jni::ref<com::sun::org::apache::xml::internal::utils::QName> p1) { return call_method<"setQName", void>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> getVal() { return call_method<"getVal", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(); }
	void setVal(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"setVal", void>(p1); }
	void detach() { return call_method<"detach", void>(); }
	jni::ref<java::lang::String> getExpression() { return call_method<"getExpression", jni::ref<java::lang::String>>(); }
	void setExpression(jni::ref<java::lang::String> p1) { return call_method<"setExpression", void>(p1); }
	jboolean isFromWithParam() { return call_method<"isFromWithParam", jboolean>(); }
	jboolean isVisible() { return call_method<"isVisible", jboolean>(); }
	void setIsVisible(jboolean p1) { return call_method<"setIsVisible", void>(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::Arg> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xpath::internal::Arg> new_object(jni::ref<com::sun::org::apache::xml::internal::utils::QName> p1, jni::ref<java::lang::String> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xpath::internal::Arg> new_object(jni::ref<com::sun::org::apache::xml::internal::utils::QName> p1, jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p2) { return base_::new_object(p1, p2); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	static jni::ref<com::sun::org::apache::xpath::internal::Arg> new_object(jni::ref<com::sun::org::apache::xml::internal::utils::QName> p1, jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p2, jboolean p3) { return base_::new_object(p1, p2, p3); }

protected:

	Arg(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_ARG