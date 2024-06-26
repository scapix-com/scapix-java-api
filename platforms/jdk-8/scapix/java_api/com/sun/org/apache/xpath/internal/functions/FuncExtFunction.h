// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/Function.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FuncExtFunction; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FuncExtFunction>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FuncExtFunction";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::functions::Function>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitor.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::functions::FuncExtFunction : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FuncExtFunction",
	com::sun::org::apache::xpath::internal::functions::Function>
{
public:

	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	jni::ref<java::lang::String> getNamespace() { return call_method<"getNamespace", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getFunctionName() { return call_method<"getFunctionName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> getMethodKey() { return call_method<"getMethodKey", jni::ref<java::lang::Object>>(); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> getArg(jint p1) { return call_method<"getArg", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(p1); }
	jint getArgCount() { return call_method<"getArgCount", jint>(); }
	static jni::ref<com::sun::org::apache::xpath::internal::functions::FuncExtFunction> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Object> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void setArg(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1, jint p2) { return call_method<"setArg", void>(p1, p2); }
	void checkNumberArgs(jint p1) { return call_method<"checkNumberArgs", void>(p1); }
	void callArgVisitors(jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> p1) { return call_method<"callArgVisitors", void>(p1); }
	void exprSetParent(jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> p1) { return call_method<"exprSetParent", void>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FuncExtFunction(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCEXTFUNCTION
