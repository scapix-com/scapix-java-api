// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::operations { class Neg; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::operations::Neg>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/operations/Neg";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::operations::UnaryOperation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::operations::Neg : public jni::object_base<"com/sun/org/apache/xpath/internal/operations/Neg",
	com::sun::org::apache::xpath::internal::operations::UnaryOperation>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::operations::Neg> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> operate(jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> p1) { return call_method<"operate", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	jdouble num(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"num", jdouble>(p1); }

protected:

	Neg(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_NEG