// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/Function.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::functions { class FuncPosition; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::functions::FuncPosition>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/functions/FuncPosition";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::functions::Function>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/compiler/Compiler.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/util/Vector.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::functions::FuncPosition : public jni::object_base<"com/sun/org/apache/xpath/internal/functions/FuncPosition",
	com::sun::org::apache::xpath::internal::functions::Function>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::functions::FuncPosition> new_object() { return base_::new_object(); }
	void postCompileStep(jni::ref<com::sun::org::apache::xpath::internal::compiler::Compiler> p1) { return call_method<"postCompileStep", void>(p1); }
	jint getPositionInContextNodeList(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"getPositionInContextNodeList", jint>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }

protected:

	FuncPosition(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_FUNCTIONS_FUNCPOSITION
