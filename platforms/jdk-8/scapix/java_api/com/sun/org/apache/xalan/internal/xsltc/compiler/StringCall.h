// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class StringCall; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::StringCall>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/StringCall";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::StringCall : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/StringCall",
	com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::StringCall> new_object(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::QName> p1, jni::ref<java::util::List> p2) { return base_::new_object(p1, p2); }
	jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type> typeCheck(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable> p1) { return call_method<"typeCheck", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type>>(p1); }
	void translate(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator> p1, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator> p2) { return call_method<"translate", void>(p1, p2); }

protected:

	StringCall(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_STRINGCALL