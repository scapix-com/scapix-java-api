// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class RelationalExpr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::RelationalExpr>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/RelationalExpr";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::RelationalExpr : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/RelationalExpr",
	com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::RelationalExpr> new_object(jint p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Expression> p3) { return base_::new_object(p1, p2, p3); }
	void setParser(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p1) { return call_method<"setParser", void>(p1); }
	jboolean hasPositionCall() { return call_method<"hasPositionCall", jboolean>(); }
	jboolean hasLastCall() { return call_method<"hasLastCall", jboolean>(); }
	jboolean hasReferenceArgs() { return call_method<"hasReferenceArgs", jboolean>(); }
	jboolean hasNodeArgs() { return call_method<"hasNodeArgs", jboolean>(); }
	jboolean hasNodeSetArgs() { return call_method<"hasNodeSetArgs", jboolean>(); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> typeCheck(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p1) { return call_method<"typeCheck", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(p1); }
	void translate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translate", void>(p1, p2); }
	void translateDesynthesized(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translateDesynthesized", void>(p1, p2); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	RelationalExpr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_RELATIONALEXPR
