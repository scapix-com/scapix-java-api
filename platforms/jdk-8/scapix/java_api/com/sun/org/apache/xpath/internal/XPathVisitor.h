// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class XPathVisitor; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::XPathVisitor>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/XPathVisitor";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xpath/internal/Expression.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionOwner.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/axes/UnionPathIterator.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/functions/Function.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XNumber.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XString.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/operations/Operation.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/operations/Variable.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/patterns/NodeTest.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/patterns/StepPattern.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/patterns/UnionPattern.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::XPathVisitor : public jni::object_base<"com/sun/org/apache/xpath/internal/XPathVisitor",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::XPathVisitor> new_object() { return base_::new_object(); }
	jboolean visitLocationPath(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::axes::LocPathIterator> p2) { return call_method<"visitLocationPath", jboolean>(p1, p2); }
	jboolean visitUnionPath(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::axes::UnionPathIterator> p2) { return call_method<"visitUnionPath", jboolean>(p1, p2); }
	jboolean visitStep(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::patterns::NodeTest> p2) { return call_method<"visitStep", jboolean>(p1, p2); }
	jboolean visitPredicate(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::Expression> p2) { return call_method<"visitPredicate", jboolean>(p1, p2); }
	jboolean visitBinaryOperation(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::operations::Operation> p2) { return call_method<"visitBinaryOperation", jboolean>(p1, p2); }
	jboolean visitUnaryOperation(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::operations::UnaryOperation> p2) { return call_method<"visitUnaryOperation", jboolean>(p1, p2); }
	jboolean visitVariableRef(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::operations::Variable> p2) { return call_method<"visitVariableRef", jboolean>(p1, p2); }
	jboolean visitFunction(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::functions::Function> p2) { return call_method<"visitFunction", jboolean>(p1, p2); }
	jboolean visitMatchPattern(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::patterns::StepPattern> p2) { return call_method<"visitMatchPattern", jboolean>(p1, p2); }
	jboolean visitUnionPattern(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::patterns::UnionPattern> p2) { return call_method<"visitUnionPattern", jboolean>(p1, p2); }
	jboolean visitStringLiteral(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::objects::XString> p2) { return call_method<"visitStringLiteral", jboolean>(p1, p2); }
	jboolean visitNumberLiteral(jni::ref<com::sun::org::apache::xpath::internal::ExpressionOwner> p1, jni::ref<com::sun::org::apache::xpath::internal::objects::XNumber> p2) { return call_method<"visitNumberLiteral", jboolean>(p1, p2); }

protected:

	XPathVisitor(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHVISITOR
