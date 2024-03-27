// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionOwner.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FunctionMultiArgs_ArgMultiOwner; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs_ArgMultiOwner>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs$ArgMultiOwner";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xpath::internal::ExpressionOwner>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs_ArgMultiOwner : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs$ArgMultiOwner",
	java::lang::Object,
	com::sun::org::apache::xpath::internal::ExpressionOwner>
{
public:

	jni::ref<com::sun::org::apache::xpath::internal::Expression> getExpression() { return call_method<"getExpression", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(); }
	void setExpression(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"setExpression", void>(p1); }

protected:

	FunctionMultiArgs_ArgMultiOwner(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_ARGMULTIOWNER
