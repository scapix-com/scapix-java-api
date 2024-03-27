// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/operations/Variable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::operations { class VariableSafeAbsRef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::operations::VariableSafeAbsRef>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/operations/VariableSafeAbsRef";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::operations::Variable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::operations::VariableSafeAbsRef : public jni::object_base<"com/sun/org/apache/xpath/internal/operations/VariableSafeAbsRef",
	com::sun::org::apache::xpath::internal::operations::Variable>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::operations::VariableSafeAbsRef> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jboolean p2) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2); }

protected:

	VariableSafeAbsRef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_OPERATIONS_VARIABLESAFEABSREF
