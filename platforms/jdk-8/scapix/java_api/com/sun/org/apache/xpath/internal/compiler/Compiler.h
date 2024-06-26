// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xpath/internal/compiler/OpMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal::compiler { class Compiler; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::Compiler>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/compiler/Compiler";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xpath::internal::compiler::OpMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>
#include <scapix/java_api/javax/xml/transform/SourceLocator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::compiler::Compiler : public jni::object_base<"com/sun/org/apache/xpath/internal/compiler/Compiler",
	com::sun::org::apache::xpath::internal::compiler::OpMap>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::compiler::Compiler> new_object(jni::ref<javax::xml::transform::ErrorListener> p1, jni::ref<javax::xml::transform::SourceLocator> p2, jni::ref<com::sun::org::apache::xpath::internal::compiler::FunctionTable> p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xpath::internal::compiler::Compiler> new_object() { return base_::new_object(); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> compileExpression(jint p1) { return call_method<"compileExpression", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(p1); }
	jint getLocationPathDepth() { return call_method<"getLocationPathDepth", jint>(); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> locationPath(jint p1) { return call_method<"locationPath", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> predicate(jint p1) { return call_method<"predicate", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::Expression> locationPathPattern(jint p1) { return call_method<"locationPathPattern", jni::ref<com::sun::org::apache::xpath::internal::Expression>>(p1); }
	jint getWhatToShow(jint p1) { return call_method<"getWhatToShow", jint>(p1); }
	jni::ref<jni::array<com::sun::org::apache::xpath::internal::Expression>> getCompiledPredicates(jint p1) { return call_method<"getCompiledPredicates", jni::ref<jni::array<com::sun::org::apache::xpath::internal::Expression>>>(p1); }
	jint countPredicates(jint p1) { return call_method<"countPredicates", jint>(p1); }
	void warn(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"warn", void>(p1, p2); }
	void assertion(jboolean p1, jni::ref<java::lang::String> p2) { return call_method<"assertion", void>(p1, p2); }
	void error(jni::ref<java::lang::String> p1, jni::ref<jni::array<java::lang::Object>> p2) { return call_method<"error", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> getNamespaceContext() { return call_method<"getNamespaceContext", jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver>>(); }
	void setNamespaceContext(jni::ref<com::sun::org::apache::xml::internal::utils::PrefixResolver> p1) { return call_method<"setNamespaceContext", void>(p1); }

protected:

	Compiler(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_COMPILER_COMPILER
