// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/ExpressionNode.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathVisitable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class Expression; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::Expression>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/Expression";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::com::sun::org::apache::xpath::internal::ExpressionNode, scapix::java_api::com::sun::org::apache::xpath::internal::XPathVisitable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Vector.h>
#include <scapix/java_api/org/xml/sax/ContentHandler.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::Expression : public jni::object_base<"com/sun/org/apache/xpath/internal/Expression",
	java::lang::Object,
	java::io::Serializable,
	com::sun::org::apache::xpath::internal::ExpressionNode,
	com::sun::org::apache::xpath::internal::XPathVisitable>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::Expression> new_object() { return base_::new_object(); }
	jboolean canTraverseOutsideSubtree() { return call_method<"canTraverseOutsideSubtree", jboolean>(); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2, jni::ref<com::sun::org::apache::xml::internal::dtm::DTM> p3, jint p4) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2, p3, p4); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> execute(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jboolean p2) { return call_method<"execute", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1, p2); }
	jdouble num(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"num", jdouble>(p1); }
	jboolean bool_(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"bool", jboolean>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::utils::XMLString> xstr(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"xstr", jni::ref<com::sun::org::apache::xml::internal::utils::XMLString>>(p1); }
	jboolean isNodesetExpr() { return call_method<"isNodesetExpr", jboolean>(); }
	jint asNode(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return call_method<"asNode", jint>(p1); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> asIterator(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2) { return call_method<"asIterator", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator> asIteratorRaw(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jint p2) { return call_method<"asIteratorRaw", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMIterator>>(p1, p2); }
	void executeCharsToContentHandler(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jni::ref<org::xml::sax::ContentHandler> p2) { return call_method<"executeCharsToContentHandler", void>(p1, p2); }
	jboolean isStableNumber() { return call_method<"isStableNumber", jboolean>(); }
	void fixupVariables(jni::ref<java::util::Vector> p1, jint p2) { return call_method<"fixupVariables", void>(p1, p2); }
	jboolean deepEquals(jni::ref<com::sun::org::apache::xpath::internal::Expression> p1) { return call_method<"deepEquals", jboolean>(p1); }
	void warn(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"warn", void>(p1, p2, p3); }
	void assertion(jboolean p1, jni::ref<java::lang::String> p2) { return call_method<"assertion", void>(p1, p2); }
	void error(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<java::lang::Object>> p3) { return call_method<"error", void>(p1, p2, p3); }
	jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> getExpressionOwner() { return call_method<"getExpressionOwner", jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode>>(); }
	void exprSetParent(jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> p1) { return call_method<"exprSetParent", void>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> exprGetParent() { return call_method<"exprGetParent", jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode>>(); }
	void exprAddChild(jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> p1, jint p2) { return call_method<"exprAddChild", void>(p1, p2); }
	jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode> exprGetChild(jint p1) { return call_method<"exprGetChild", jni::ref<com::sun::org::apache::xpath::internal::ExpressionNode>>(p1); }
	jint exprGetNumChildren() { return call_method<"exprGetNumChildren", jint>(); }
	jni::ref<java::lang::String> getPublicId() { return call_method<"getPublicId", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getSystemId() { return call_method<"getSystemId", jni::ref<java::lang::String>>(); }
	jint getLineNumber() { return call_method<"getLineNumber", jint>(); }
	jint getColumnNumber() { return call_method<"getColumnNumber", jint>(); }

protected:

	Expression(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_EXPRESSION
