// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/Function3Args.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FunctionMultiArgs; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::functions::Function3Args>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FunctionMultiArgs",
	com::sun::org::apache::xpath::internal::functions::Function3Args>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::functions::FunctionMultiArgs> new_object() { return base_::new_object(); }
	jni::ref<jni::array<com::sun::org::apache::xpath::internal::Expression>> getArgs() { return call_method<"getArgs", jni::ref<jni::array<com::sun::org::apache::xpath::internal::Expression>>>(); }
	void setArg(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1, jint p2) { return call_method<"setArg", void>(p1, p2); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	void checkNumberArgs(jint p1) { return call_method<"checkNumberArgs", void>(p1); }
	jboolean canTraverseOutsideSubtree() { return call_method<"canTraverseOutsideSubtree", jboolean>(); }
	void callArgVisitors(jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p1) { return call_method<"callArgVisitors", void>(p1); }
	jboolean deepEquals(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"deepEquals", jboolean>(p1); }

protected:

	FunctionMultiArgs(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCTIONMULTIARGS
