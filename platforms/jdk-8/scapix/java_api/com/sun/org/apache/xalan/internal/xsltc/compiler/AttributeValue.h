// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler { class AttributeValue; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue : public jni::object_base<"com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue",
	com::sun::org::apache::xalan::internal::xsltc::compiler::Expression>
{
public:

	static jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue> create(jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode> p1, jni::ref<java::lang::String> p2, jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::Parser> p3) { return call_static_method<"create", jni::ref<com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue>>(p1, p2, p3); }

protected:

	AttributeValue(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XALAN_INTERNAL_XSLTC_COMPILER_ATTRIBUTEVALUE
