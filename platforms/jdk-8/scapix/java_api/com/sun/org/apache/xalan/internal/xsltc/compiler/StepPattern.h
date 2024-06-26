// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class StepPattern; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern",
	com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern> new_object(jint p1, jint p2, jni::ref<java::util::List> p3) { return base_::new_object(p1, p2, p3); }
	void setParser(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p1) { return call_method<"setParser", void>(p1); }
	jint getNodeType() { return call_method<"getNodeType", jint>(); }
	void setPriority(jdouble p1) { return call_method<"setPriority", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern> getKernelPattern() { return call_method<"getKernelPattern", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern>>(); }
	jboolean isWildcard() { return call_method<"isWildcard", jboolean>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern> setPredicates(jni::ref<java::util::List> p1) { return call_method<"setPredicates", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern>>(p1); }
	jdouble getDefaultPriority() { return call_method<"getDefaultPriority", jdouble>(); }
	jint getAxis() { return call_method<"getAxis", jint>(); }
	void reduceKernelPattern() { return call_method<"reduceKernelPattern", void>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> typeCheck(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p1) { return call_method<"typeCheck", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(p1); }
	void translate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translate", void>(p1, p2); }

protected:

	StepPattern(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STEPPATTERN
