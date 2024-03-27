// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xpath::internal { class XPathContext_XPathExpressionContext; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xpath::internal::XPathContext_XPathExpressionContext>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::org::apache::xalan::internal::extensions::ExpressionContext>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <scapix/java_api/com/sun/org/apache/xml/internal/utils/QName.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/XPathContext.h>
#include <scapix/java_api/com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/xml/transform/ErrorListener.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#include <scapix/java_api/org/w3c/dom/traversal/NodeIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xpath::internal::XPathContext_XPathExpressionContext : public jni::object_base<"com/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext",
	java::lang::Object,
	com::sun::org::apache::xalan::internal::extensions::ExpressionContext>
{
public:

	static jni::ref<com::sun::org::apache::xpath::internal::XPathContext_XPathExpressionContext> new_object(jni::ref<com::sun::org::apache::xpath::internal::XPathContext> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::XPathContext> getXPathContext() { return call_method<"getXPathContext", jni::ref<com::sun::org::apache::xpath::internal::XPathContext>>(); }
	jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager> getDTMManager() { return call_method<"getDTMManager", jni::ref<com::sun::org::apache::xml::internal::dtm::DTMManager>>(); }
	jni::ref<org::w3c::dom::Node> getContextNode() { return call_method<"getContextNode", jni::ref<org::w3c::dom::Node>>(); }
	jni::ref<org::w3c::dom::traversal::NodeIterator> getContextNodes() { return call_method<"getContextNodes", jni::ref<org::w3c::dom::traversal::NodeIterator>>(); }
	jni::ref<javax::xml::transform::ErrorListener> getErrorListener() { return call_method<"getErrorListener", jni::ref<javax::xml::transform::ErrorListener>>(); }
	jboolean overrideDefaultParser() { return call_method<"overrideDefaultParser", jboolean>(); }
	void setOverrideDefaultParser(jboolean p1) { return call_method<"setOverrideDefaultParser", void>(p1); }
	jdouble toNumber(jni::ref<org::w3c::dom::Node> p1) { return call_method<"toNumber", jdouble>(p1); }
	jni::ref<java::lang::String> toString(jni::ref<org::w3c::dom::Node> p1) { return call_method<"toString", jni::ref<java::lang::String>>(p1); }
	jni::ref<com::sun::org::apache::xpath::internal::objects::XObject> getVariableOrParam(jni::ref<com::sun::org::apache::xml::internal::utils::QName> p1) { return call_method<"getVariableOrParam", jni::ref<com::sun::org::apache::xpath::internal::objects::XObject>>(p1); }

protected:

	XPathContext_XPathExpressionContext(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XPATH_INTERNAL_XPATHCONTEXT_XPATHEXPRESSIONCONTEXT
