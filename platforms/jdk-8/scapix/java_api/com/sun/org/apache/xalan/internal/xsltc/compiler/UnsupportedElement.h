// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class UnsupportedElement; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::UnsupportedElement>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/UnsupportedElement";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::UnsupportedElement : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/UnsupportedElement",
	com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::UnsupportedElement> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jboolean p4) { return base_::new_object(p1, p2, p3, p4); }
	void setErrorMessage(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg> p1) { return call_method<"setErrorMessage", void>(p1); }
	void display(jint p1) { return call_method<"display", void>(p1); }
	void parseContents(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p1) { return call_method<"parseContents", void>(p1); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> typeCheck(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p1) { return call_method<"typeCheck", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(p1); }
	void translate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translate", void>(p1, p2); }

protected:

	UnsupportedElement(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_UNSUPPORTEDELEMENT
